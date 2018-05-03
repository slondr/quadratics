(print "Enter a value for A: ") (finish-output)
(defconstant a (parse-integer (read-line)))
(print "Enter a value for B: ") (finish-output)
(defconstant b (parse-integer (read-line)))
(print "Enter a value for C: ") (finish-output)
(defconstant c (parse-integer (read-line)))

(print (/ (- (- b) (sqrt (- (* b b) (* 4.0 a c)))) (* 2.0 a)))
(print (/ (+ (- b) (sqrt (- (* b b) (* 4.0 a c)))) (* 2.0 a)))
