#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int mi=0,ch=0;
    for(int i=0;i<n;i++){
        int m,c;
        cin>>m>>c;
        if(m>c){
            mi++;
        }
        else if(m<c){
            ch++;
        }
    }
    if(mi>ch){
        cout<<"Mishika"<<endl;
    }
    else if(mi<ch){
        cout<<"Chris"<<endl;
    }
    else{
        cout<<"Friendship is magic!^^"<<endl;
    }
}
