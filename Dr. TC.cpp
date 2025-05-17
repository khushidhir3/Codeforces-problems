#include<iostream>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        
        string s;
        cin>>n>>s;
        int a=0;
        for(char ch:s){
            if(ch=='1')a++;
        }
        int b=n*(a+1)-2*a;
        cout<<b<<endl;
    }
}
