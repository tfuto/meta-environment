; 
; $Id$
;
; Toolbus interface functions for structure editor

; we keep a list of the buffers for the structure editor
(setq bufferlist ())
(setq sendmessage ())
(setq debug ())

(defun tb-init (filename)
  "Load the file filename, and return a unique buffer name to the ToolBus"
  (setq sendmessage t)
  (edit-file filename)
  ()
)

(defun edit-file (filename)
   "Load the file filename from disk, and return a unique buffer name to the ToolBus"
  (interactive "F")
  
  (if (string= (buffer-file-name) nil)
    (find-file filename) ; if window is empty (e.g. *scratch*) use this
    (find-file-other-frame filename) ; otherwise start new toplevel window
  )
 
  (setq bufferlist (cons (buffer-name) bufferlist))
  (TBvalue (concat "file-id(" (TBstring (buffer-name)) ")"))
  ()
)


(defun reload-file (filename)
  "Read the contents of the file on disk into the buffer editing this filename)"
  (interactive "F")

  (switch-to-buffer (get-file-buffer filename)) 
  (revert-buffer nil t) 
  ()
)

(defun move-editor-to-front (filename)
	"Raise the frame in which filename is displayed to the front"
  (let ((buf (get-file-buffer filename)))
    (if (bufferp buf) ; if the buffer exists
      (raise-frame (window-frame (get-buffer-window buf t)))
      () ; else do nothing
    )
  )
  () ; return nil
)

(defun tb-set-char-pos (filename pos)
  "Set the cursor to position POS in FILENAME"
  (set-marker (point-marker t) pos (get-file-buffer filename))
)

(defun tb-set-msg (text)
  "Set a message in the status line"
  (display-message 'generic-msg text)
)
  
(defun tb-get-focus-text (filename start length)
  "Return the substring of the file FILENAME which starts at START and is LENGTH
characters long. "

  ;(let ((buftext (buffer-substring start (+ start length) filename)))
  (let ((buftext (buffer-substring 1 
                                   (+ (buffer-size (get-file-buffer filename)) 1)
                                   filename)))
    (TBvalue (concat "focus-text(" 
                     (TBstring filename) "," 
                     (TBstring buftext) ")" 
             )
    )
  )
  ()
)

(defun tb-add-menu-item (menuname itemname)
  "Add button named ITEMNAME to menu named MENUNAME. If this button is clicked by the user, the editor will send a snd-event(menu-selected(MENUNAME,ITEMNAME,current buffer)) back to the ToolBus"

  (interactive "sMenuname: sItemname: ")
  (set-buffer-menubar current-menubar)
  (add-menu-button (list menuname) 
                   (vector itemname (list 'TBevent (concat "menu-event" "(" 
                                                           (TBstring menuname) "," 
                                                           (TBstring itemname) "," 
                                                           (TBstring (buffer-name)) ")" 
                                                   )
                                    ) t 
                   )
  )
)

(defun tb-unset-focus (filename)
  "Undo the changes made by a corresponding call to `tb-set-focus'"
  (debug-out filename)
  (tb-set-focus filename "None" 1 0)
  ()
)

(defun move-cursor-into-focus (start length)
  "Moves the cursor to the start of the focus if the cursor is not already 
   contained in the focus"

   (if (or (> (point) (+ start length))
           (< (point) start))
       (goto-char start)
   )
)

(defun tb-set-focus (filename str start length)
  "Set the focus:
   FILENAME is the file where the focus should be set.
   STR is the sortname of the focus.
   START is the starting character.
   LENGTH the length (in characters) of the focus."

; reactivate sending a message
  (setq sendmessage t)

; retrieve a handle to the buffer
  (let (buf (get-file-buffer filename))

    ; we find and select the window for this file ('t' means search in all frames)
    (select-window (get-buffer-window filename t))

    (display-message 'focus (concat "Focus symbol: " str))
    (move-cursor-into-focus start length)
    ; first clear ALL colorings (including the previous focus)
    (remove-text-properties 1 (point-max buf) '(face nil) buf)
    ; then set the new focus
    (if (> (+ start length) (+ (buffer-size buf) 1))
      (put-text-property 1 (+ (buffer-size buf) 1) 'face 'secondary-selection buf)
    ;else
      (put-text-property start (+ start length) 'face 'secondary-selection buf)
    )
  )
  () ; return nil
)

(defun tb-get-focus (evt count)
  "Generates a get-focus event for the ToolBus. The idea is that whenever
the user clicks somewhere, a focus is drawn containing that insertion
point."

  ; we only catch single clicks (then count == 1)
  (if (= 1 count)
      (let ((mark (event-closest-point evt)))
	      (if (> mark (buffer-size))
	          (set 'mark (buffer-size))
	      )
        ; if this is one of our buffers, generate a message to the toolbus
	      (if (is-element (buffer-name) bufferlist)
	          (TBevent (concat "set-current-location(" 
                             (TBstring (buffer-name)) 
                             ","
                             (number-to-string mark) 
                             ")"
                     )
            )
	      )
	    )
  )
  () ;; Return nil so other hooks are executed regularly
)

(defun tb-changed-event (start end oldlength)
  "Generates a changed event to the ToolBus"

  ; if this is one of our buffers
  (if (is-element (buffer-name) bufferlist)
    (if (eq sendmessage t)
      (progn (setq sendmessage ())
             (TBevent (concat "modified(" (TBstring (buffer-name)) ")"))
      )
    )
  )
)

; declaring event handlers
(add-hook 'after-change-functions 'tb-changed-event)
(add-hook 'mouse-track-click-hook 'tb-get-focus)

; Utility functions
(defun is-element (obj list)
  (let ((res nil)
	(l list))
    (while (and l (not res))
      (if (eq (car l) obj)
	  (set 'res t)
	(set 'l (cdr l))
	)
      )
    res)
)
