#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <queue>
#include <map>
#include <vector>
#include <iostream>
#include <cmath>
#include <set>
#include <iomanip>
using namespace std;

int main(){
    set<int>res;
    map<int, vector<int>> t;
    map<int, queue<int>> adj;
    int n,c,temp,cats,node; 
    cin>>n;
    cin>>c;
    
    for(int i = 0; i <n; i++){
        cin>>temp;
        t[i+1].push_back(temp);
        t[i+1].push_back(0);
    }
    for(int i = 0; i <n-1; i++){
        cin>>temp;
        cin>>node;
        adj[temp].push(node);
    }
   
    queue<int> intq;
    queue<int> gatos;
    //inicializas con los valores de uno
    while(adj[1].size()>=1){
        int el = adj[1].front();
        intq.push(el);
        gatos.push(t[1][0]);
        adj[1].pop();
    }
    while(intq.size()>=1){
        int i = intq.front();
        //cout<<"VALOR QUEUE"<<i<<endl;
        //mark it as visited
        t[i][1] = 1;
        int cat = gatos.front();
        intq.pop();
        gatos.pop();
        if(adj.find(i) != adj.end() && adj[i].size()!=0){
            if(cat == 0 || cat+t[i][0]<=c){
                int tam = adj[i].size();
                for(int j = 0; j <tam; j++){
                    int el = adj[i].front();
                    adj[i].pop();
                    intq.push(el);
                    if(t[i][0] == 0) gatos.push(0);
                    else gatos.push(cat+t[i][0]);
                    
                }

            }
            else{
                int tam = adj[i].size();
                for(int j = 0; j <tam; j++){
                    adj[i].pop();
                }

            }
        }

        //it ends here
        else{
            //cout<<"VALOR AGREGADO"<<i<<endl;
            //cout<<"GATOOOS"<<cat<<" "<<t[i][0] <<endl;
            if(cat+t[i][0] <= c || t[i][0]==0){
                res.insert(i);
                //cout<<"VALOR C"<<i<<endl;
            }
        }

    }
   
    /*for(int i = 0; i < res.size(); i++){
        cout<<res[i]<<endl;
    }*/
    cout<<res.size();
    
    
}