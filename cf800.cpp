#include<iostream>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        int x=0;
        if(n%3==0){
            x=n/3;
            cout<<x<<" "<<x<<endl;
        }
        else if(n%3==1){
            x=n/3;
            cout<<x+1<<" "<<x<<endl;
        }
        else{
            x=n/3;
            cout<<x<<" "<<x+1<<endl;
        }
    }
    return 0;
}