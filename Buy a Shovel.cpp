#include<iostream>
using namespace std;
int main(){
    int k,r;
    cin>>k>>r;
    for(int n=1;n<=10;n++){
        int cost=n*k;
        if(cost%10==0||cost%10==r){
            cout<<n<<endl;
            break;
        }
    }
}
