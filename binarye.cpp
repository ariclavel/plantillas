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
void binarySearch(double a, double b, double c){
    double p1 = 1;
    double p2 = c;
    double mid;
    while(p1 != p2){
        mid = p1+(p2-p1)/2;
        cout<<mid<<endl;
        /*double xDegrees = 90.0;
  
        // converting degrees to radians
        mid = xDegrees*3.14159/180;*/
        if(a*mid+b*sin(mid)<c && a*(mid+0.00001)+b*sin(mid+0.00001)>c){
            cout<<"igual"<<endl;
            cout<<mid;
            return;
        } 
        if(a*mid+b*sin(mid)>c) p2 = mid-0.00001;
        else p1 = mid+0.00001;
    }

}
int main(){
    double n,a,b,c; 
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>a;
        cin>>b;
        cin>>c;
        binarySearch(a,b,c);
    }
}
