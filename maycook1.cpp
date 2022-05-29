#include<iostream>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int x,y,z;
        cin>>x>>y>>z;
        int a=x+y;
        if(a<=z){
            cout<<2<<endl;
        }
        else if(a>z && x<=z){
            cout<<1<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }
    return 0;
}