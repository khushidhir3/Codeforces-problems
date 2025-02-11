#include<iostream>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string w;
        cin>>w;
        w=w.substr(0,w.size()-2)+"i";
        cout<<w<<endl;
    }
}
