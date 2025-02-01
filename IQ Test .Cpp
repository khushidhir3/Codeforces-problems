#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int num[n],evencount=0,oddcount=0;
    int evenindex=-1,oddindex=-1;
    for(int i=0;i<n;i++){
        cin>>num[i];
        if(num[i]%2==0){
            evencount++;
            evenindex=i+1;
        }
        else{
            oddcount++;
            oddindex=i+1;
        }
    }
    cout<<(evencount==1 ? evenindex:oddindex)<<endl;
}
