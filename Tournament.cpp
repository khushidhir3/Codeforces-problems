#include<iostream>
#include<vector>
#include<algorithm> 
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, j, k;
        cin >> n >> j >> k;
        vector<int> a(n);
        for(int i = 0; i < n; i++)
            cin >> a[i];

        int target = a[j - 1];
        int maxe = *max_element(a.begin(), a.end());

        if(k == 1){
            if(target == maxe){
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        } else {
            cout << "YES" << endl;
        }
    }
   
}
