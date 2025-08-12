#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    char pos='a';
    int r=0;
    for(char ch:s){
        int diff=abs(ch-pos);
        r+=min(diff,26-diff);
        pos=ch;
    }
    cout<<r<<endl;
}
