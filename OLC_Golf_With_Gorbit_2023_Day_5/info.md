## Description
```
Golf With Gorbit 2023 DAY 5 (the ffs javid one)
```

```
Write a program that reads a 60x20 character "treasure map" of 6 islands on stdin, where:
     '~' represents the sea
     'O' represents the land
     '+' represents the beach
     Each island is entirely surrounded by beach, even diagonally
     Each island has a unique identifier 1-6
     Each island must be seperated from the other islands and the edge of the treasure map by 1 cell of sea
     Diagonally opposite beaches are considered connected

Two additional unique integer arguments, A and B, are to be supplied via stdin, in the range 1 - 6 inclusive.

Use '*' to chart a course from island A beach to island B beach, and display the map and course on stdout.

Note: The treasure map should be supplied without new-line characters, so one continuous 1200 character string

Input: <a whole 60x20 treasure map> 4 6
Output:
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
~~~+++++~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~+++++++++++~~~~~~~~~
~~++OOO+++++~~~~~~~+++++++~~~~~~~~~~~~~~+OOOOOOOOO+++++++++~
~~+OOOOOOOO+++~~~~++OOOOO++++~~~~~~~~~~~+OOOOOOOOOOOOOOOOO+~
~++OOOOOOOOOO++~~~+OOOOOOOOO++++++++~~~~+OOOOOO3OOOOOOOO+++~
~+OOOOO1OOOOOO+~~~+OOOOOOOOOOOOOOOO++++~+OOOOOOOOOOOOOO++~~~
~+OOOOOOOOOOOO+~~~++++OOOOOOOOOOOOOOOO+~+OOOOO+++OOOOOOO++~~
~+OOOOOOOOOOO++~~~~~~+++OOOO2OOOOOOO+++~+OOOOO+~+++++OOOO+~~
~+++OOOO++++++~~~~~~~~~++OOOOOOOOOOO+~~~+OOOO++~~~~++OOO++~~
~~~++++++~~~~~~++++++~~~++++OOOOOO+++~~~+OOO++~~~~++OO+++~~~
~~~~~~~~~~~~~+++OOOO+++~~~~++++++++~~~~~+OOOO++++++OOO+~~~~~
~~~~~~++++++++OOOOOOOO*****************~+++OOOOOOOOOO++~~~~~
~~~++++OOOOOOOOOOOOO+++~~~++++++++++~~**~~++OOOOOOOO++~~~~~~
~~~+OOOOOOOOOOOOO++++~~~~++OOOOOOOO++~~**~~++++OOO+++~~+++~~
~~~++OOOOO4OOOOOO+~~~~++++OOOOOOOOOO+++~*~~~~~+++++~~~++O++~
~~~~++OOOOOOOOOO++~~~~+OOOOOO5OOOOOOOO+~**************+O6O+~
~~~~~+++OOOOOOOO+~~~~~++OOOOOOOOOOOO+++~~~~~~~~~~~++++OOO++~
~~~~~~~+++OOOOOO+~~~~~~+++OOOOOOOO+++~~~~~~~~~~~~~+OOOOO++~~
~~~~~~~~~++++++++~~~~~~~~++++++++++~~~~~~~~~~~~~~~+++++++~~~
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
```

## Submissions
C 411 bytes: https://godbolt.org/z/581fE3T4h
- gcc 13.2
- single proper solution
- can be easily improved (by getting rid of macros)
- credits: trolledwoods

C 376 bytes: https://godbolt.org/z/8Gjhfbjc8
- gcc 13.2
- cheeky pirates using helicopters to shorten their path
- credits: coderunner (a.k.a. MaGetzUb)