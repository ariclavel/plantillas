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
void binarySearch(float a, float b, float c){
    float p1 = 1;
    float p2 = c;
    float mid;
    while(p1 != p2){
        mid = p1+(p2-p1)/2;
        if(a*mid+b*sin(mid)==c) cout<<setprecision(1000)<<mid;
        if(a*mid+b*sin(mid)>c) p2 = mid-1;
        else p1 = mid+1;
    }

}
int main(){
    float n,a,b,c; 
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>a;
        cin>>b;
        cin>>c;
        binarySearch(a,b,c);
    }
}
