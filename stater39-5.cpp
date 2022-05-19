#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int count=n;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i-1]==a[i]){
                count=count-1;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}