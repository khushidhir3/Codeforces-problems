#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int ans=0;
    for(int i=0;i*i<=n;i++){
        int j=n-i*i;
        if(j>=0&&i+j*j==m)ans++;
    }
    cout<<ans<<endl;
}
