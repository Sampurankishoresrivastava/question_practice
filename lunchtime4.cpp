#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int w,x,y,z;
        cin>>w>>x>>y>>z;
        int diff=x-w;
        int mul=y*z;
        if(mul>diff){
            cout<<"overflow"<<endl;
        }
        else if(mul==diff){
            cout<<"filled"<<endl;
        }
        else if(mul<diff){
            cout<<"Unfilled"<<endl;
        }
    }
    return 0;
}