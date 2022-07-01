#include <stdio.h>

int main(){
    int A, B; // input parameters
    int C; // output
    scanf("%d %d", &A, &B);

    if( (A == 1 && B == 3) || (A == 3 && B == 1)){ 
        C = 2;
        printf("%d",C);
    }
    else if((A == 2 && B == 3) || (A == 3 && B == 2)){
        C = 1;
        printf("%d",C);
    }
    else if((A == 1 && B == 2) || (A == 2 && B == 1) ){ 
        C = 3;
        printf("%d\n",C);
    }
}