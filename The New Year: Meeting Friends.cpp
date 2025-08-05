#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int p[3]={a,b,c};
    sort(p,p+3);
    int m=p[1];
    int t=abs(a-m)+abs(b-m)+abs(c-m);
    cout<<t<<endl;
}
