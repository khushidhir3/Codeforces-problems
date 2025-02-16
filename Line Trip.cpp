#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int arr[a];
        for(int i=0;i<a;i++){
            cin>>arr[i];
        }
        int maxdi=0;
        int j=0;
       
        for(int i=0;i<a;i++){
            int k = arr[i]-j;
            maxdi = max(k, maxdi);
            j = arr[i];
        }
        int p=((b-arr[a-1])*2);
        maxdi=max(maxdi,p);
        cout<<maxdi<<endl;
    }
}
