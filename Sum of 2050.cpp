#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        if(n%2050!=0){
            cout<<-1<<endl;
            continue;
        }
        long long x=n/2050;
        long long a=0;
        while(x>0){
            a+=x%10;
            x/=10;
        }
        cout<<a<<endl;
    }
}
