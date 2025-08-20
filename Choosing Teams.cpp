#include<iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int val,eligible=0;
    for(int i=0;i<n;i++){
        cin>>val;
        if(val<=5-k){
            eligible++;
        }
    }
    cout<<eligible/3<<endl;
}
