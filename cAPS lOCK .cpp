#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    bool a=true, b = islower(s[0]);
    for(int i=0;i<s.size();i++){
        if(islower(s[i]) ){ a=false;
        
    }
    if(i>0&& islower(s[i])){
        b=false;
    }
}
    if(a||b){
        for(char &c:s){
      if(islower(c))
      c=toupper(c);
      else
      c=tolower(c);
      
    }
    }
    cout<<s<<endl;
}
