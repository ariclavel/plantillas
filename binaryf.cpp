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

void binarySearch(int p, int nr, int nl){
    //n*(n+1)/2
    int p1 = 1;
    int p2 = p;
    int mid;
    string prev = "";
    int res_prev=0;
    int comp_prev = 0;
    int comp;
    while(p1 != p2){
        mid = p1+(p2-p1)/2;
        comp = mid;

        int vr = 0;
        int vl = 0;
        if(nr >= mid-1) vr = (mid*(mid+1)/2)-((mid-nr-1)*(mid-nr)/2) - mid;
        if(nl >= mid-1) vl = (mid*(mid+1)/2)-((mid-nl-1)*(mid-nl)/2) - mid;
        cout<<"compara "<<comp<<endl;
        if(comp == p){
            cout<<mid+1<<endl;
            return;
        }
        if(comp_prev <p && prev == "menor" || comp_prev>p && prev == "mayor" ){
            cout<<res_prev+1<<endl;
            return;
        }
        res_prev=mid;
        comp_prev = comp;
        if(comp>p){
            p2 = mid;
            prev = "mayor";
        } 
        else{
            p1 = mid;
            prev = "menor";
        }
    }
    if(comp<=p) cout<<mid+1<<endl;
    else cout<<res_prev+1<<endl;

}
int main(){
    double h,p,pos; 
    cin>>h;
    cin>>p;
    cin>>pos;
    int nl = pos-1;
    int nr = h-pos;
    p = p-h;
    if(p<0) cout<<0;
    cout<<"vecinos derecha "<<nr<<endl;
    cout<<"vecinos izq "<<nl<<endl;
    binarySearch(p,nr,nl);
}
