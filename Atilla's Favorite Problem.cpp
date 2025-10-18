#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n>>s;
        char maxc='a';
        for(char c:s){
            if(c>maxc){
                maxc=c;
                
            }
        }
        cout<<maxc-'a'+1<<endl;
    }
}
