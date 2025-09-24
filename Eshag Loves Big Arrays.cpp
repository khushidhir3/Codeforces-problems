#include<bits.+/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
            
        }
        int minv=*min_element(a.begin(),a.end());
        int countm=count(a.begin(),a.end(),minv);
        cout<<(n-countm)<<endl;
    }
}
