#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    bool yes=false;
for(int i=0;i<n;i++) {
        int a;
        cin>>a;
        if(a==1) {
            yes=true;
        }
    }
if(yes){
        cout<<"HARD"<<endl;
    } else{
        cout<<"EASY"<< endl;
    }

}
