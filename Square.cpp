#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        vector<int>x(4),y(4);
        for(int i=0;i<4;i++){
            cin>>x[i]>>y[i];
        }
        int side=max(*max_element(x.begin(),x.end())-*min_element(x.begin(),x.end()),*max_element(y.begin(),y.end())-*min_element(y.begin(),y.end()));
        cout<<side*side<<endl;
    }
}
