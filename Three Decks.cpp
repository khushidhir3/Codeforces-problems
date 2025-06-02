#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b,c;
        cin>>a>>b>>c;
        long long d=a+b+c;
        if(d%3!=0){
            cout<<"NO\n";
            continue;
        }
        long long e=d/3;
        if(a>e||b>e||c<e){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
        }
        
    }
}
