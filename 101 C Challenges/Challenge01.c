/*
Write a program to round off an integer i to the next largest multiple of another integer j.
For example, 256 days when rounded off to the next largest multiple divisible by a week results into 259.

Explanation Suppose value of i and j are entered as 256 and 7, then k evaluates to 259 which is the next largest multiple of 7 after 256.

Yashavant Kanetkar; Aditya Kanetkar. 101 Challenges In C Programming (p. 14). BPB Publications. Kindle Edition. 
*/

#include <stdio.h> 

int main() { 
    int i, j, k ; 
    printf ("Enter values of i and j:\n"); 
    scanf ("%d %d", &i, &j); 
    k = i + j - i % j; 
    printf ("Next largest multiple = %d\n", k); 
    return 0; 
}