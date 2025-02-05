#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    int mincost=n*a;
    for(int k=0;k<=(n+m-1/m);k++){
        int cost=k*b+max(0,n-k*m)*a;
        mincost=min(mincost,cost);
    }
    cout<<mincost<<endl;
}
