#include <string>
#include <math.h>
#include <cmath>
using namespace std;

int main(){
    int n,t;
    cin>>n;
    
    vector<vector<int>> entrada;
    vector<vector<int>> dp;
    for(int i = 0; i < n; i++){
        vector<int> temp;
        vector<int> cero;
        for(int j = 0; j < 3; j++){
            cin>>t;
            temp.push_back(t);
            cero.push_back(0);
        }
        if(i!=0) dp.push_back(cero);
        else dp.push_back(temp);
        entrada.push_back(temp);
    }
    if(n==1){
        int a;
        a = max(entrada[0][0],entrada[0][1]);
        a = max(a,entrada[0][2]);
        cout<<a;
        return 0;
    }
    for(int i = 1; i < n; i++){
        for(int j = 0; j < 3; j++){
            //A
            if(j == 0){
                dp[i][1] = max(dp[i][1],entrada[i][1]+dp[i-1][0]);
                dp[i][2] = max(dp[i][2],entrada[i][2]+dp[i-1][0]);
            }
            //B
            if(j == 1){
                dp[i][0] = max(dp[i][0],entrada[i][0]+dp[i-1][1]);
                dp[i][2] = max(dp[i][2],entrada[i][2]+dp[i-1][1]);
            }
            //C
            if(j == 2){
                dp[i][0] = max(dp[i][0],entrada[i][0]+dp[i-1][2]);
                dp[i][1] = max(dp[i][1],entrada[i][1]+dp[i-1][2]);
            }
        }

    }
    int a;
    a = max(dp[n-1][0],dp[n-1][1]);
    a = max(a,dp[n-1][2]);
    cout<<a;
    return 0;

}
