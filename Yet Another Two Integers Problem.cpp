#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--) {
        int a,b;
        cin>>a>>b;
        int dif=abs(a-b);
        int m=(dif+9)/10; 
        cout <<m<< endl;
    }
   
}
