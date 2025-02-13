#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    char pixel;
    bool iscolor = false;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>pixel;
            if(pixel=='C'||pixel=='M'||pixel=='Y'){
                iscolor=true;
            }
        }
    }
    if(iscolor){
        cout<<"#Color"<<endl;
    }
    else{
        cout<<"#Black&White"<<endl;
    }
}
