## Description
```
Golf With Gorbit 2021 DAY 5
```
On the 1st day of Gorbitmas, One Lone Coder said to me:

> Given a string of four words (max 16 characters) on stdin, display all the permutations of them, one line at a time on stdout

Example Input:
```
GORBIT SUCKS AT BF
```

Example Output: 
```
GGG OOO RRR BBB III TTT      SSS U U CCC K K SSS     AAA TTT     BBB FFF
G   O O R R B B  I   T       S   U U C   K K S       A A  T      B B F
G G O O RRR BBB  I   T       SSS U U C   KK  SSS     AAA  T      BBB FF
G G O O RR  B B  I   T         S U U C   K K   S     A A  T      B B F
GGG OOO R R BBB III  T       SSS UUU CCC K K SSS     A A  T      BBB F
```

## Submissions
C++ 283 bytes: https://godbolt.org/z/qEjanE74a
- gcc 8.3
- 0 semicolons
- winning submission
- compressed bitfont is produced by this code: https://godbolt.org/z/Ea9TM6195
    - gcc 11.2