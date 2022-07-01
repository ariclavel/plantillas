#include <stdio.h> 
#include <vector>
#include <iostream>
using namespace std;

#define vi vector<int>
#define lli long long int

lli n = 100000;
vi criba(n, true);
vector<int> makeCriba(){
    criba[0] = criba[1] = false;
    for(int i = 2; i*i<n; i++){ 
        if(!criba[i]) continue;
        for(int j = i*i; j<n; j+=i){
            criba[j] = false;
        }
    }
    vector<int> primes;
    for(int i = 2; i<n; i++){ 
        if(criba[i]){
            primes.push_back(i);
        }
    }
    return primes;
}