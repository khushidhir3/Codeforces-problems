#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[55];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int rg=0,g=0;
        for(int i=0;i<n;i++){
            if(a[i]>=k){
                rg+=a[i];
                
            }
            else if(a[i]==0&&rg>0){
                rg--;
                g++;
            }
        }
        cout<<g<<endl;
    }
}
