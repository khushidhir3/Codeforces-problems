#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>res(n);
        for(int i=0;i<n;i++){
            string row;
            cin>>row;
            for(int j=0;j<4;j++){
                if(row[j]=='#'){
                    res[n-1-i]=j+1;
                    break;
                }
            }
        }
        for(int i=0;i<n;i++){
            cout<<res[i]<<" ";
        }
        cout<<endl;
    }
}
