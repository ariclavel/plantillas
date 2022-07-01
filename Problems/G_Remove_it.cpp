#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <queue>
#include <map>
#include <vector>
#include <iostream>
using namespace std;

int main(){
    int n,temp,m;
    scanf("%d %d", &n, &m);
    vector<int>res;
    for(int i = 0; i < n; i++){
        scanf("%d", &temp);
        if(temp != m) res.push_back(temp);
        
    }
    for(int j = 0; j < res.size(); j++){
        if(j == res.size()-1) cout<<res[j];
        else cout<<res[j]<<" ";
    }
    

}