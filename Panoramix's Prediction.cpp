#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a=n+1;
    while(true){
        bool isprime =true;
        for(int i=2;i*i<=a;i++){
            if(a%i==0){
                isprime=false;
                break;
            }
        }

        if (isprime) {
            break; 
        }
       a++;
    
        }
        if(a==m){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
