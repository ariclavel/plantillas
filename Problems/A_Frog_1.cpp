#include <stdio.h>
#include <vector>
#include <iostream>
using namespace std;

#define vi vector<int>

int n;
vi stones;
vi dp;

// f(n) = min(f(n+1) + abs(stones[i] - stones[i-1]), f(n+2) + abs(stones[i] - stones[i-2])) 
// cost per jump = abs(stones[i] - stones[i+1])
int f(){
    dp[0] = 0;
    dp[1] = abs(stones[0] - stones[1]);
    for(int i = 2; i < n; i++){
        dp[i] = min(
            dp[i-1] +  abs(stones[i] - stones[i-1]), 
            dp[i-2] + abs(stones[i] - stones[i-2])
            );
    }
    return dp[n-1];
}

int main(){
    scanf("%d", &n);
    stones = vi(n);
    dp = vi(n+1, INFINITY);
    for(int i = 0; i < n; i++){
        scanf("%d", &stones[i]);
    }

    int cost = f();
    printf("%d\n", cost);
}