#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long res=1;
    int total=2*n-2;
    int r=n-1;
    if(r>total-r)
    r=total-r;
    for(int i=0;i<r;i++){
        res*=(total-i);
        res/=(i+1);
    }
    cout<<res<<endl;
}
