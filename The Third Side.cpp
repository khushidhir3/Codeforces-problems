#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int x;
        long long sum=0;
        for(int i=0;i<n;i++){
            cin>>x;
            sum+=x;
            
        }
        cout<<sum-(n-1)<<endl;
    }
}
