#include <stdio.h>
#include <string>
using namespace std;

int main(){
    char S;
    int tot = 0;

    for(int i = 0; i<4; i++){ 
        scanf("%c", &S);
        if(S == '+'){
            tot++;
        }
        else if(S == '-'){
            tot--;
        }
    }
    printf("%d\n",tot);
}