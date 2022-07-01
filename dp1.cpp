#include <vector>
#include <iostream>
#include <string>
#include <math.h>
#include <cmath>
using namespace std;

int main(){
    int n,temp;
    cin>>n;
    vector<int> vecdp(n+1,9999);
    vector<int> entrada(n,0);
    //entrada[0] = 0;
    for(int i = 0; i < n;i++){
        cin>>temp;
        entrada[i]=temp;
        //10 30 40 20
        // 0 inf inf inf inf
        //
    }
    vecdp[0] = 0;
    for(int i = 0; i < n ;i++){
        if(i+1<n) vecdp[i+1] = min(vecdp[i+1],(abs(entrada[i]-entrada[i+1])+vecdp[i]));
        if(i+2<n) vecdp[i+2] = min(vecdp[i+2],(abs(entrada[i]-entrada[i+2])+vecdp[i]));
        //cout<<vecdp[i+1]<<endl;
        //cout<<vecdp[i+2]<<endl;
    }
    cout<<vecdp[n-1];

}
