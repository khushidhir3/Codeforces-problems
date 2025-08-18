#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        
    }
    int maxs=a[0];
    int mins=a[0];
    int k=0;
     for(int i=1;i<n;i++){
         if(a[i]>maxs){
           k++;
           maxs=a[i];
         }
         else if(a[i]<mins){
             k++;
             mins=a[i];
         }
     }
     cout<<k<<endl;
}
