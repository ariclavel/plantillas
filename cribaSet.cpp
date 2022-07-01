#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <queue>
#include <map>
#include <vector>
#include <iostream>
#include <cmath>
#include <set>
using namespace std;
set<int> midiv;
vector<int> makeCriba(long long int n){
    vector<bool> criba(n, true);
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
            midiv.insert(i);
        }
    }
    
    map<int,int> mymap;
    vector<int> res;
    //cout<<"TAMANIO"<<primes.size()<<endl;
    for(int j = 0; j< primes.size(); j++){
        for(int i = 1; i<= n; i++){
            if(midiv.count(i)) continue;
            if(i%primes[j] == 0){
                if(mymap.find(i) == mymap.end()) mymap[i] = 1;
                else mymap[i] = mymap[i]+1;
            }
            //cout<<"MAP"<<mymap[i]<<endl;
            if(j==primes.size()-1 && mymap[i] == 2) res.push_back(i);
        }
        
    }
       
    cout<<res.size();
    return primes;
}
int main(){
    long long int n; 
    cin>>n;
    makeCriba(n);
    
    
}
