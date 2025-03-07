#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--) {
        vector<string>a(8);
        for (int i=0;i<8;i++) {
            cin>>a[i];
        }
for (int j= 0;j<8;j++) {
            string word= "";
            for (int k=0;k<8;k++) {
                if(a[k][j]!='.') {
                    word+=a[k][j];
                }
            }
  if (!word.empty()) {
                cout <<word<< endl;
                break;
            }
        }
    }
}
