#include<iostream>
using namespace std;
int main(){
    string a;
    cin>>a;
    string b="heidi";
    int i=0;
    for(char c:a){
        if(c==b[i]){
            i++;
        }
        if(i==b.length()){
            cout<<"YES"<<endl;
            return 0;
        }
        
    }
    cout<<"NO"<<endl;
}
