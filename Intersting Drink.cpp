#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    vector<int>prices(n);
    for(int i=0;i<n;i++){
        cin>>prices[i];
    }
    sort(prices.begin(),prices.end());
    int q;
    cin>>q;
  for(int i=0;i<q;i++){
      int m;
      cin>>m;
      auto p= upper_bound(prices.begin(), prices.end(), m);
      cout<< distance (prices.begin(), p)<<endl;
  }
}
