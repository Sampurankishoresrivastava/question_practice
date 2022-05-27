#include<iostream>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int A ,B;
        cin>>A>>B;
        if(A==1 && B==1){
            cout<<"No"<<endl;
        }
        else if (A==B && A!=1){
            cout<<"Yes"<<endl;
            cout<<A<<" "<<2*A*B-A<<" "<<2*A*B<<endl;
        }
        else if (A==1){
            cout<<"Yes"<<endl;
            cout<<A<<" "<<2*B-A<<" "<<2*B<<endl;
        }
        else if(B==1){
            cout<<"No"<<endl;
        }
        else if (A>B){
            cout<<"Yes"<<endl;
            cout<<A<<" "<<2*A*B-A<<" "<<2*A*B<<endl;
        }
        else if (B>A){
            cout<<"Yes"<<endl;
            cout<<A<<" "<<A*B-A<<" "<<A*B<<endl;
        }
    }
}