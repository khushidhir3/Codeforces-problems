#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int s1=max(2*a,b);
        int s2=max(2*b,a);
        int s3=a+b;
        int side=min({s1,s2,s3});
        cout<<side*side<<endl;
    }
}
