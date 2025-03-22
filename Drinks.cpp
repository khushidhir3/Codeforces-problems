#include<iostream>
#include<vector>
#include<iomanip>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    double sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    double avg=sum/n;
    cout<<fixed<<setprecision(12)<<avg<<endl;
}
