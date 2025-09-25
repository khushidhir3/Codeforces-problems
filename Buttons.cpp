#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b,c;
        cin>>a>>b>>c;
        if(a>b){
            cout<<"First"<<endl;
        }
        else if(a<b){
            cout<<"Second"<<endl;
        }
        else{
            cout<<(c%2?"First\n":"Second\n");
        }
    }
}
