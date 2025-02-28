#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    for(int i=0;i<a;i++){
        int n;
       cin>>n;
       int arr[100];
       for(int j=0;j<n;j++){
           cin>>arr[j];
       }
       int odd = arr[0]%2;
      bool v = true;
       for(int j=0;j<n;j+=2){
           if(arr[j]%2!=odd){
               v=false;
               break;
           }
       }
       if(n>1){
           int even=arr[1]%2;
       for(int j=1;j<n;j+=2){
           if(arr[j]%2!=even){
               v=false;
               break;
           }
       }
       }
       cout<<(v?"YES":"NO")<<endl;
    }

}
