#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,x,y;
        cin>>a>>x>>y;
        int dax=abs(a-x);
        int day=abs(a-y);
        bool found=false;
        for(int b=1;b<=100;b++){
            if(b==a)continue;
            int dbx=abs(b-x);
            int dby=abs(b-y);
            if(dbx<dax&&dby<day){
                found=true;
                break;
            }
        }
        cout<<(found?"YES":"NO")<<endl;
    }
}
