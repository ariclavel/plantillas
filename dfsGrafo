#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <queue>
#include <map>
#include <vector>
#include <iostream>
using namespace std;

int main(){
    long long int n, m, L, ini, fin;
    long long int pos;
    scanf("%llu %llu %llu %llu %llu", &n, &m, &L, &ini, &fin);

    queue<long long int> myqueue;
    queue<long long int> level;

    // matrix hash
    //map<int, vector<vector<int> > > mymap;
    map<long long int, vector<long long int>> weight;
    map<long long int, vector<long long int>> node;
    vector<vector<long long int>>mat;

    //cout<<L<<endl;
    //int mat[n][2];
   
    for(int i = 0; i<m; i++){
        // ini fin weight
        vector<long long int>temp;
        long long int a,b,c;
        scanf("%lli %lli %lli", &a, &b, &c);
        temp.push_back(a);
        temp.push_back(b);
        temp.push_back(c);
        if(c == 0){
            pos = i;
        }
        node[a].push_back(b);
        weight[a].push_back(c);
        mat.push_back(temp);
    }
    myqueue.push(ini);
    level.push(0);
    while(!myqueue.empty()){
        
        int curr = myqueue.back();
        int l = level.back();
        printf("%llu\n",curr);
        if(curr == fin){
                
                printf("YES\n");
                mat[pos][2] = L-l;
                // print matrix
                for(int i = 0; i<m; i++){
                    printf("%llu %llu %llu\n", mat[i][0], mat[i][1], mat[i][2]);
                }
                return 0;
            }
            for(int k = 0; k<node[curr].size(); k++){ 
                if(l+weight[curr][k] > L){
                    continue;
                }
                else{ 
                    myqueue.push(node[curr][k]);
                    level.push(l+weight[curr][k]);
                }
                
            }
        
        if(node.find(curr) != node.end()){
            cout<<"entre!"<<endl;
            

        }
        
    }
    printf("NO\n");
}
