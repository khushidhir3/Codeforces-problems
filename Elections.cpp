#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b,c;
        cin>>a>>b>>c;
        long long d=max(0LL,max(b,c)-a+1);
        long long e=max(0LL,max(a,c)-b+1);
        long long f=max(0LL,max(a,b)-c+1);
        cout<<d<<" "<<e<<" "<<f<<endl;
    }
}
