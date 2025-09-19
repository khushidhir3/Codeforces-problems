#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int tot=a+2*b;
        if(tot%2!=0){
            cout<<"No"<<endl;
        }
        else{
            int tar=tot/2;
            if(tar%2==1&&a==0)cout<<"No"<<endl;
            else cout<<"Yes"<<endl;
        }
    }
}
