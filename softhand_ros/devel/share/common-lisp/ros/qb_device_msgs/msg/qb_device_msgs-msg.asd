
(cl:in-package :asdf)

(defsystem "qb_device_msgs-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :std_msgs-msg
)
  :components ((:file "_package")
    (:file "Info" :depends-on ("_package_Info"))
    (:file "_package_Info" :depends-on ("_package"))
    (:file "ResourceData" :depends-on ("_package_ResourceData"))
    (:file "_package_ResourceData" :depends-on ("_package"))
    (:file "State" :depends-on ("_package_State"))
    (:file "_package_State" :depends-on ("_package"))
    (:file "StateStamped" :depends-on ("_package_StateStamped"))
    (:file "_package_StateStamped" :depends-on ("_package"))
  ))