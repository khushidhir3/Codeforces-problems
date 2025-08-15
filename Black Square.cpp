#include<iostream>
using namespace std;
int main(){
    int a1,a2,a3,a4;
    cin>>a1>>a2>>a3>>a4;
    string s;
    cin>>s;
    int total=0;
    for(char ch:s){
        if(ch=='1')total+=a1;
        else if(ch=='2')total+=a2;
        else if(ch=='3')total+=a3;
        else if(ch=='4')total+=a4;
    }
    cout<<total;
}
