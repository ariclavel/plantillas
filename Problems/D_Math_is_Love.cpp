/* PROBLEM STATEMENT
Rashid loves mathematics. He recently started to learn how the various function works in mathematics. 
On his journey through the math world, he came in touch with a function named Y.

He also came to know that, here Y means the summation of number from 0 to n. For example if n = 5, then 

Y = 0+1+2+3+4+5 = 15.

Now he is wondering if the knows the value of Y, can he find the value of n for the above equation?

Being so very new to the math world, he could not figure out how to approach this new problem. 
So he came to you for help. Can you help him?


INPUT
First line of input will be T(1<=T<=100000), denoting the number of test cases.

Next T lines will contain the number Y(1<=Y<=3*10^9), value of the above function.


OUTPUT
For each test case, if there is exist a value of n for which the above function gives the output Y then print

that value of n, otherwise if print “NAI”. (quotes for clarification).


EXAMPLE
5 -> NAI 
11 -> NAI
15 -> 5
21 -> 6
1 -> 1
7626 -> 123
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int k; // input
    float len; // output
    
    scanf("%d", &k);

    len = floor(sqrt(2*k)); // get n (length of "array")

    int x = len*(len+1)/2; // compute n*(n+1)/2 series with the formula

    if(len == (int)len){ // first check dataype length
        if(x == k){  // check if x is equal to input value
            printf("%d\n", (int)len); // typecast to int and print
        }
        else{ 
        printf("NAI\n");
        }
 
    }

}