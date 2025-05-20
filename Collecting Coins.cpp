#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int e=max(a,max(b,c));
        int f=(e-a)+(e-b)+(e-c);
        int g=d-f;
        if(g<0||g%3!=0){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
        }
    }
}
