#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n1,n2,n3;       
        cin>>n1>>n2>>n3;
        int a=n2+n3;
        int b=n1+n3;
        int c=n1+n2;
        if(n1>a || n2>b ||n3>c){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}