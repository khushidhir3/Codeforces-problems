#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
    if(min(b,d)*2-1<min(a,c)*2){
        cout<<"Gellyfish"<<endl;
    }
    else{
        cout<<"Flower"<<endl;
    }
  } 
}
