#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,sum=0,count=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum=sum+a[i];
        }
        int b=sum/n;
        if(sum%n!=0){
            cout<<-1<<endl;
        }
        else{
            for(int i=0;i<n;i++){
                if(a[i]>b){
                    count++;
                }
            }
            cout<<count<<endl;
        }
    }
    return 0;
}