#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
   int c=0;
    int d[]={100,20,10,5,1};
   for(int i=0;i<5;i++){
        c+=n/d[i];
        n%=d[i];       
    }
cout<<c<<endl;
}
