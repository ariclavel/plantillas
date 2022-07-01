#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <queue>
#include <map>
#include <vector>
#include <iostream>
using namespace std;

int main(){
    long long int n,temp;
    cin>>n;
    string nombre;
    priority_queue<int> altura;
    map<int, string> moun;
    for(int i = 0; i < n; i++){
        cin>>nombre;
        cin>>temp;
        
        altura.push(temp);
        moun[temp] = nombre;
    }
    int tam = altura.size();
    
    altura.pop();
    int a = altura.top();
    cout<<moun[a];

}