#include<iostream>
#include<string>
using namespace std;
int main(){
    string a,b;
    cin>>a>>b;
    string c= "";
    for(int i=0;i<a.size();i++) {
       if(a[i]==b[i]) {
            c+='0';
        }else{
            c+='1';
        }
    }
cout<<c<<endl;
}
