#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        int count=0;
        int a =1;
  while(a<= n) {
            for(int i = 1;i<=9;i++) {
                if(i*a<= n) {
                    count++;
                }
            }
            a*= 10;
        }
        cout<<count<<endl;
    }
 
}
