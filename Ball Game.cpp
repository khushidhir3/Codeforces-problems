#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    int p=1;
    for(int i=1;i<t;i++){
      p=(p+i)%t;
      if(p==0)p=t;
      cout<<p<<" ";
    }
}
