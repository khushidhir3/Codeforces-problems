#include<iostream>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    string s;
    cin>>s;
    
    int l=-1;
    int r=-1;
    for(int i=0;i<n;i++){
        if(s[i]=='B'){
            if(l==-1)l=i;
            r=i;
        }
    }
    cout<<r-l+1<<endl;
}
}
