#include<iostream>
#include<queue>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<int>a(n) ;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    queue<int>q;
    for(int i=0;i<n;i++){
        q.push(i);
    }
    int last=-1;
    while(!q.empty()){
        int current=q.front();
        q.pop();
        a[current]-=m;
        if(a[current]>0){
            q.push(current);
        }
        else{
            last=current+1;
        }
    }
    cout<<last<<endl;
}
