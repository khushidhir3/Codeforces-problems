#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,a,b;
    cin>>n>>a>>b;
    vector<int>t(n),p(n);
    for(int i=0;i<n;i++){
        cin>>t[i]>>p[i];
    }
    if(n==0){
        cout<<a/b<<"\n";
        return 0;
    }
    int ans=0;
    ans+=t[0]/b;
    for(int i=0;i<n-1;i++){
        int g=t[i+1]-(t[i]+p[i]);
        if(g>0)
        ans+=g/b;
        }
    ans+=(a-(t[n-1]+p[n-1]))/b;
    cout<<ans<<"\n";
}
