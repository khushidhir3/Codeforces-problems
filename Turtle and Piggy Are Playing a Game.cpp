#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long l,r;
        cin>>l>>r;
        int a=0;
        long long x=r;
        while(x/2>=1){
            x/=2;
            a++;
        }
        cout<<a<<endl;
    }
}
