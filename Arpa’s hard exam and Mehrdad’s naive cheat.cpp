#include<iostream>
using namespace std;
int main(){
    long long n;
    cin>>n;
    if(n==0){
        cout<<1<<endl;
    }
    else{
        long long a[]={8,4,2,6};
        cout << a[(n % 4) - 1 < 0 ? 3 : (n % 4) - 1] << endl; 
    }
}
