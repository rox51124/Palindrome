# Palindrome
## What's that ?
The program find iterated reversal palindromes.
## Palindrome ?
A palindrome is a word or a number which reads the same backward or forward (that is for numbers, numbers invariant when reversed).
A n-iteration turnover palindrome is a number which leads to a palindrome after n iterations of the following procedure:
1.reverse the number,
2.add both the number and its reversal to obtain a new number,
3.iterate from the first step until you get a palindromic number.
### Example
```
>./palindrome -n 4782 -b 10
4782 leads to 46464 in 3 iteration(s) in base 10

>./palindrome -n 64 -b 2
64 leads to 65 in 1 iteration(s) in base 2

>./palindrome -n 4782 toto
invalid argument

>./palindrome -p 363 -b 10 -imin 6
3 leads to 363 in 6 iteration(s) in base 10

> ./palindrome -p 363 -b 10 -imin 7
no solution
```
## How to use it ?
```
USAGE:
    ./palindrome -n number -p palindrome [-b base] [-imin i] [-imax i]

DESCRIPTION:
    -n n integer to be transformed (>=0)
    -p pal palindromic number to be obtained (incompatible with the -n option) (>=0)
    if defined, all fitting values of n will be output
    -b base base in which the procedure will be executed (1<b<=10) [def: 10]
    -imin i minimum number of iterations, included (>=0) [def: 0]
    -imax i maximum number of iterations, included (>=0) [def: 100]
```