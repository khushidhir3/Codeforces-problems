#include<bits/stdc++.h>
using namespace std;
int main(){
    int s,n;
    cin>>s>>n;
    vector<pair<int,int>>d(n);
    for(int i=0;i<n;i++){
        cin>>d[i].first>>d[i].second;
        }
        sort(d.begin(),d.end());
        for(int i=0;i<n;i++){
            int ds=d[i].first;
            int b=d[i].second;
            if(s<=ds){
                cout<<"NO"<<endl;
                return 0;
            }
            s+=b;
        }
        cout<<"YES"<<endl;
        return 0;
}
