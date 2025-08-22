#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n>>s;
        if(n!=5){
            cout<<"NO"<<endl;
            continue;
        }
        int T = 0, i = 0, m = 0, u = 0, r = 0;

        for (char c : s) {
            if (c == 'T') T++;
            else if (c == 'i') i++;
            else if (c == 'm') m++;
            else if (c == 'u') u++;
            else if (c == 'r') r++;
        }
        if (T == 1 && i == 1 && m == 1 && u == 1 && r == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    
}
