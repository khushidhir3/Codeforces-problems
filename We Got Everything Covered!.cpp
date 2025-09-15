#include<iostream>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
    string a="abcdefghijklmnopqrstuvwxyz";
    while(t--){
        int n,k;
        cin>>n>>k;
        string s="";
        for(int i=0;i<n;i++){
            for(int j=0;j<k;j++){
                s+=a[j];
            }
        }
        cout<<s<<endl;
    }
}
