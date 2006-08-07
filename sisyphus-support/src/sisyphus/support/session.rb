
require 'active_record'

class Session < ActiveRecord::Base
  has_many :builds
  has_many :changes
  belongs_to :previous, :class_name => 'Session', :foreign_key => 'previous_id'
  belongs_to :host
  validates_presence_of :time

  def self.find_latest_for_host(host)
    return Session.find_by_host(host, :order => 'time desc')
  end

  protected

  def validate
    previous_session_must_be_of_same_host
  end

  def previous_session_must_be_of_same_host
    return previous.host == host
  end

end

