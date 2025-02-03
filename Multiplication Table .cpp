#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n,x;
    cin>>n>>x;
    int count=0;
    for(int i=1;i<=min(n,static_cast<int>(sqrt(x)));i++){
        if(x%i==0){
            int j=x/i;
            if(i<=n&&j<=n){
                count++;
                if(i!=j){
                    count++;
                }
            }
        }
    }
    cout<<count<<endl;
}
