#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <queue>
#include <map>
#include <vector>
using namespace std;

int main(){
    int n, m, L, ini, fin;
    int pos;
    scanf("%d %d %d %d %d", &n, &m, &L, &ini, &fin);

    //queue<int> myqueue;
    //queue<int> level;

    // matrix hash
    //map<int, vector<vector<int> > > mymap;
    map<int, vector<int>> weight;
    map<int, vector<int>> node;

    /*
    int mat[n][2];
    for(int i = 0; i<n; i++){
        // ini fin weight
        scanf("%d %d %d", &mat[i][0], &mat[i][1], &mat[i][2]);
        if(mat[i][2] == 0){
            pos = i;
        }
        node[mat[i][0]].push_back(mat[i][1]);
        weight[mat[i][0]].push_back(mat[i][2]);
    }

    myqueue.push(ini);
    level.push(0);
    while(myqueue.size() > 0){
        int curr = myqueue.back();
        int l = level.back();
        if(curr == fin){
            printf("YES\n");
            mat[pos][2] = L-l;
            // print matrix
            for(int i = 0; i<n; i++){
                printf("%d %d %d\n", mat[i][0], mat[i][1], mat[i][2]);
            }
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
    }
    */
}