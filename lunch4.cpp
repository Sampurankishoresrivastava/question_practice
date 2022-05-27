#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for (int i=0;i<n;i++){
            cin>>a[i];
        }
        int x=0;
        for(int i=0;i<n;i++){
            if(a[i]+a[i+1]>=a[i]*a[i+1]){
                x=x+1;
                cout<<x<<endl;
            }
        }
    }
    return 0;
}