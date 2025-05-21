#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b,c,d;
        cin>>a>>b>>c>>d;
        long long sa=min(b,a);
        long long sb=min(c,a);
        long long rr=a-sa;
        long long rrt=a-sb;
        long long rs=rr+rrt;
        long long sc=min(d,rs);
        cout<<(sa+sb+sc)<<"\n";
    }
}
