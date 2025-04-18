#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        int a,b;
        
        cin>>s>>a>>b;
        if(a>=2400){
            if(b>a){
                cout<<"YES"<<endl;
                return 0;
            }
        }
        
    }
    cout<<"NO"<<endl;
    return 0;
}
