#include<bits/stdc++.h>
using namespace std;
int main(){
    string a;
    cin>>a;
    int n=a.length();
    for(int i=0;i<n;i++){
        int digit=a[i]-'0';
        int inverted=9-digit;
        if(inverted<digit&&!(i==0&&inverted==0)){
            a[i]=inverted+'0';
        }
    }
    cout<<a<<endl;
}
