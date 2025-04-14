#include<iostream>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int a=240-k;
    int b=0;
    int c=0;
    for(int i=1;i<=n;i++){
        b+=5*i;
        if(b<=a){
            c++;
        }
        else{
            break;
        }
    }
    cout<<c<<endl;
}
