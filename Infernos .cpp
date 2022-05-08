#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[0] < a[i]){
                a[0] = a[i];
            }
        }
        cout<<a[0];
        if(a[0]>n){
            cout<<n<<endl;
        }
        else if (a[0]<n){
            cout<<a[0]<<endl;
        }
        else{
            cout<<n<<endl;
        }
    }
    return 0;
}