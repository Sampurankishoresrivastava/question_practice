#include<iostream>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int x,y,z;
        cin>>x>>y>>z;
        if(z%x==0 and z%y!=0){
            cout<<"CHICKEN"<<endl;
        }
        else if(z%y==0 and z%x!=0){
            cout<<"DUCK"<<endl;
        }
        else if(z%x==0 and z%y==0){
            cout<<"ANY"<<endl;
        }
        else{
            cout<<"NONE"<<endl;
        }
    }
    return 0;
}