#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--) {
        long long a,n;
        cin>>a>>n;
         int b=n%4;
       if(a%2==0) {
            if(b==0)
                cout<<a<<endl;
            else if(b==1)
                cout <<a-n<< endl;
            else if(b==2)
                cout<<a+1<< endl;
            else
                cout<<a+n+1<< endl;
        } else {
            if (b==0)
                cout<<a<<endl;
            else if(b==1)
                cout <<a+n<<endl;
            else if(b==2)
                cout <<a-1 <<endl;
            else
                cout <<a-n-1 <<endl;
        }
    }

    
}
