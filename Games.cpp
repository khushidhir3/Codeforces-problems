#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>a(n),b(n);
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i];
    }
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i!=j&&a[i]==b[j]){
                count++;
            }
        }
    }
    cout<<count<<"\n";
}
