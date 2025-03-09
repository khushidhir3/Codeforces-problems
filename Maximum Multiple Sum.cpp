include<iostream>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
 int n;
cin >> n;
int a=0;
int b= 0;
for (int x = 2; x <= n; ++x) {
int k = n / x; 
int c= x * (k * (k + 1)) / 2; 
            if (c>a) {
                a=c;
                b = x;
            }
        }
  cout <<b<< endl;
    }
    
 
}
