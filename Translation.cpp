#include<iostream>
using namespace std;
int main(){
    string s , t;
    cin>>s>>t;
    if(t==string(s.rbegin(),s.rend())){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
