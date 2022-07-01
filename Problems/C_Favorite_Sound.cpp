#include <stdio.h>
#include <math.h>

int main(){
    int A; // cost
    int B; // Money
    int C; // times
    scanf("%d %d %d", &A, &B, &C);

    int sound = 0;
    while(sound < C){ 
        B = B-A;
        if(B < 0){ 
            //printf("%d", sound);
            break;
        }
        else if(sound == C){ 
            //printf("%d", sound);
            break;
        }
        sound++;
    }
    printf("%d\n", sound);

}