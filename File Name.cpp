#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    string s;
    cin>>n>>s;
    int ans=0,cnt=0;
    for(char c:s){
        if(c=='x'){
        cnt++;
        if(cnt>2)ans++;
        }
        else{
            cnt=0;
        }
    }
    cout<<ans<<endl;
}
