#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        int diff=y-x;
        if(diff==0){
            cout<<0<<endl;
        }
        else if(diff<=8 and diff!=0){
            cout<<1<<endl;
        }
        else if(diff%8==0 and diff>8){
            cout<<diff/8<<endl;
        }
        else if(diff%8!=0 and diff>8){
            cout<<(diff/8)+1<<endl;
        }
    }
    return 0;
}