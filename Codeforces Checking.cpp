#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    unordered_set<char>c={'c','o','d','e','f','r','s'};
    int t;
    cin>>t;
    while(t--){
        char a;
        cin>>a;
        if(c.find(a)!=c.end()){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}
