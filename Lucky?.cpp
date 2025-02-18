#include<iostream>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string t;
        cin>>t;
        int a=(t[0]-'0')+(t[1]-'0')+(t[2]-'0');
           int b=(t[3]-'0')+(t[4]-'0')+(t[5]-'0');
           if(a==b){
               cout<<"YES"<<endl;
           }
           else{
               cout<<"NO"<<endl;
           }
    }
}
