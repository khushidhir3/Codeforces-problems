#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    int t=0;
    string p;
    for(int i=0;i<n;i++){
        cin>>p;
        if(p=="Tetrahedron"){
            t+=4;
        }
        else if(p=="Cube"){
            t+=6;
        }
        else if(p=="Octahedron"){
            t+=8;
        }
        else if(p=="Dodecahedron"){
            t+=12;
        }
        else if(p=="Icosahedron"){
            t+=20;
        }
    }
    cout<<t<<endl;
}
