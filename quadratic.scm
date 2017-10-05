;; run using CHICKEN Scheme in interactive mode `csi quadratic.scm`

(define prompt "Enter a value for ")
(display (string-append prompt "A: "))
(define a (string->number (read-line)))
(display (string-append prompt "B: "))
(define b (string->number (read-line)))
(display (string-append prompt "C: "))
(define c (string->number (read-line)))

(define d (* 4.0 a c))

(define first-result (/ (- (- b) (sqrt d)) (* 2.0 a)))
(define second-result (/ (+ (- b) (sqrt d)) (* 2.0 a)))

(newline) (display first-result) (newline)
(display second-result) (newline)
