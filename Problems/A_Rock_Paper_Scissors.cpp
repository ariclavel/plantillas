#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <queue>
#include <map>
#include <vector>
#include <iostream>
using namespace std;

int main(){
    int m[2];
    bool check = false;
    scanf("%d %d", &m[0], &m[1]);
    if(m[0] == m[1]) cout<<m[0];
    else{
        for(int i = 0; i < 3; i++){
            check = false;
            for(int j = 0; j < 2; j++){
                if(m[j] == i) check=true;
                   
            }
            if(!check){
                printf("%d", i);
                //cout<<i;
                return 0;
            }
        }
    }
}
