#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
   vector<long long>a(n);
   for(int i=0;i<n;i++){
       cin>>a[i];
   }
   long long maxp=0;
   for(int i=0;i<n-1;i++){
       long long pr=a[i]*a[i+1];
       maxp=max(maxp,pr);
   }
    cout<<maxp<<endl;    
    
    }
}
