#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long r,b,d;
        cin>>r>>b>>d;
        if(r>b){
            swap(r,b);
        }
        if(b<=r*(d+1)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
