#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
string a;
    cin >>a; 
    int g = 1;
for (int i=1;i<n;i++){
        string b;
        cin >>b;
      if (b!=a){
            g++;
            a=b;
        }
    }
cout <<g<< endl;
   
}
