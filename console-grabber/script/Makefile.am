EXTRA_DIST = console-grabber.src

bin_SCRIPTS = console-grabber

CLEANFILES = console-grabber

%: %.src Makefile
	sed "\
	     s@__JAVA__@${JAVA}@g;\
	     s@__JARDIR__@${datadir}@g;\
	     s@__JARFILE__@${JAVA_JAR}@g;\
	     s@__MAINCLASS__@${JAVA_MAIN_CLASS}@g;\
	     s@__EXTERNAL_JARS__@${EXTERNAL_INSTALLED_JARS}@g;\
	" < $< > $@ && chmod +x $@
