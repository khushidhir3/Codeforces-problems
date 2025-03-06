#include<iostream>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
     while(t--){
        string a,b;
        cin>>a>>b;
        string c=b[0]+a.substr(1);
        string d= a[0]+b.substr(1);
        cout <<c<<" "<<d<< endl;
    }
}
    


