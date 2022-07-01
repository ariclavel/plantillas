/* PROBLEM STATEMENT
We will buy a product for NN yen (the currency of Japan) at a shop.

If we use only 10001000-yen bills to pay the price, how much change will we receive?

Assume we use the minimum number of bills required.

CONSTRAINTS
1 ≤ N ≤ 10000
N is an integer.

INPUT
Input is given from Standard Input in the following format:
N

OUTPUT
Print the amount of change as an integer.

EXAMPLES
Input: 1900
Output: 100

Input: 3000
Output: 0
*/

#include <stdio.h>

int main(){
    int N; // input
    int change; // change required
    scanf("%d", &N);

    if(N % 1000 == 0){ // Check if input is exact
        printf("%d\n",0);
    }
    else{
        change = 1000 - (N % 1000); // Calculate change
        printf("%d\n",change);
    }

}