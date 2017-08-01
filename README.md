# codevita2017_palingdrom_sorting

A palindrome is a word, phrase, or sequence that reads the same backwards as forwards. Given a palindrome write a program to print the sorted list of all palindromes that can be constructed from the alphabets of the given palindrome. All palindromes should start in a newline.
Input Format:

The first line, an integer T, indicating the number of test cases

T lines each containing one string (palindrome)

Output Format:

For each test case, one line indicating the Test case number

The next lines containing a sorted list of all palindromes constructed from the given palindrome of the ith test case

Constraints:

T ≤ 10

Example 1

Input 
1 
NITIN

Output 
INTNI 
NITIN

Explanation 
There are only two palindromes that can be constructed from NITIN


Example 2

Input 
1 
ABCDCBA

Output 
ABCDCBA 
ACBDBCA 
BACDCAB 
BCADACB 
CABDBAC 
CBADABC

Explanation 
Since there is only one D, it can only be the middle letter in the palindrome. The remaining lettere A, B, C can be arranged in 6 possible ways and each way gives rise to a palindrome.

Note:

Please do not use package and namespace in your code. For object oriented languages your code should be written in one class.
Note:

Participants submitting solutions in C language should not use functions from <conio.h> / <process.h> as these files do not exist in gcc
Note:

For C and C++, return type of main() function should be int.
