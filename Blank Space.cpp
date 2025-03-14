#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) {
            cin>>a[i];
        }
int b= 0, c= 0;
        for(int i=0;i<n;i++) {
            if (a[i] == 0) {
               b++;
            } else {
                c= max(c,b);
                b= 0;
            }
        }
        
        c= max(c,b);
        
        cout <<c<< endl;
    }

   
}
