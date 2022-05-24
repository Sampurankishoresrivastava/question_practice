#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x,k;       
        cin>>n>>x>>k;
        int a=n*x;
        if(a<=k){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}