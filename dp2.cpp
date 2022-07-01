#include <string>
#include <math.h>
#include <cmath>
using namespace std;

int main(){
    int n,numPiedras,menos,temp;
    menos = 10000;
    cin>>n;
    cin>>numPiedras;
    vector<int> vecdp(n+1,9999);
    vector<int> entrada(numPiedras,0);
    for(int i = 0; i < numPiedras;i++){
        cin>>temp;
        if(temp<menos) menos = temp;
        entrada[i]=temp;
    }
    vecdp[0] = 0;
    for(int i = 0; i < n ;i++){
        for(int j = 1; j<=saltos; j++){
            if((i+j)<n) vecdp[i+j] = min(vecdp[i+j],(abs(entrada[i]-entrada[i+j])+vecdp[i]));
            //if(i+2<n) vecdp[i+2] = min(vecdp[i+2],(abs(entrada[i]-entrada[i+2])+vecdp[i]));
            //cout<<vecdp[i+j]<<endl;

        }
        
        
        //cout<<vecdp[i+2]<<endl;
    }
    cout<<vecdp[n-1];

}
