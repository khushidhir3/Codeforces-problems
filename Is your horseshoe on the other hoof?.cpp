#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int>hs;
    int s1,s2,s3,s4;
    cin>>s1>>s2>>s3>>s4;
    hs.insert(s1);
     hs.insert(s2);
      hs.insert(s3);
       hs.insert(s4);
       int res=4-hs.size();
       cout<<res<<endl;
}
