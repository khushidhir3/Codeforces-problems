#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int prev,curr;
        cin>>prev;
        bool a=true;
        for(int i=1;i<n;i++){
            cin>>curr;
            int diff=abs(curr-prev);
            if(diff!=5&&diff!=7){
                a=false;
            }
            prev=curr;
        }
        if(a)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
