#include<iostream>
using namespace std;
int main(){
    long long int n,m;
    cin>>n>>m;
    if(m==1){
        cout<<n-1<<endl;
        return 0;
    }
    else{
        cout<<n*(m-1);
    }
}
