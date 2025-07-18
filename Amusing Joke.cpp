#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;
int main(){
    string g,h,p;
    cin>>g>>h>>p;
    unordered_map<char,int>cf,pf;
    for(char ch:g+h){
        cf[ch]++;
    }
    for(char ch:p){
        pf[ch]++;
    }
    if(cf==pf)
    cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    
}
