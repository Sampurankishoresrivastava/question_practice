#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        int t1=x+y;
        int ans1a=500-(x*2);
        int ans1b=1000-(t1*4);
        int ans2a=500-(t1*2);
        int ans2b=1000-(y*4);
        int res1=ans1a+ans1b;
        int res2=ans2a+ans2b;
        if(res1>res2){
            cout<<res1<<endl;
        }
        else{
            cout<<res2<<endl;
        }
    }
    return 0;
}