#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>a(4);
    for(int i=0;i<4;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    int b=a[3]-a[2];
    int c=a[3]-a[1];
    int d=a[3]-a[0];
    cout<<b<<" "<<c<<" "<<d<<endl;
    
}
