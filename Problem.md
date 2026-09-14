# Problem.md — Pseudocode for Task 2

START
DECLARE name AS STRING
DECLARE rollNo AS INTEGER
DECLARE age AS INTEGER
DECLARE height AS FLOAT
DECLARE gpa AS DOUBLE
DECLARE section AS CHARACTER

PRINT "Enter student name: "
READ name

PRINT "Enter roll number: "
READ rollNo

PRINT "Enter age: "
READ age

PRINT "Enter height: "
READ height

PRINT "Enter GPA: "
READ gpa

PRINT "Enter section: "
READ section

DISPLAY "Name: " + name
DISPLAY "Roll No: " + rollNo
DISPLAY "Age: " + age
DISPLAY "Height: " + height
DISPLAY "GPA: " + gpa
DISPLAY "Section: " + section
End

## Problem 2: Read and Display a Character Using getchar() and putchar()

START
DECLARE ch AS CHARACTER
PRINT "Enter a character: "
ch = getchar()

PRINT "You entered: "
putchar(ch)
END

## Problem 3: Display a Floating-Point Value Using Different Precision Settings

START
DECLARE value AS FLOAT
PRINT "Enter a floating-point value: "
READ value

DISPLAY value WITH DEFAULT PRECISION
DISPLAY value WITH 2 DECIMAL PLACES
DISPLAY value WITH 4 DECIMAL PLACES
DISPLAY value WITH 6 DECIMAL PLACES
END
