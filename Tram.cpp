#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int current=0;
    int maxca=0;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
      current-=a;
      current+= b;
      maxca=max(maxca,current);
     
    }
     cout<<maxca<<endl;
}
