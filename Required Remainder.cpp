#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b,c;
        cin>>a>>b>>c;
        long long d=c-(c-b)%a;
        cout<<d<<endl;
        
    }
}
