#include<iostream>
using namespace std;
int main(){
    long long a,b;
    cin>>a>>b;
    int m=min(a,b);
    long long ans=1;
    for(int i=2;i<=m;i++){
    ans*=i;
    }
    cout<<ans<<endl;
    
}
