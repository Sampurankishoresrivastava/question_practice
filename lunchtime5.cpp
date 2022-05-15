#include <iostream>
using namespace std;
int mod1( int a,int m){
    int negative=a%m;
    int aa=m+negative;
    return aa;
}
int mod2(int b,int m){
    int positive=b%m;
    return positive;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        int large=0, secondLarge=0;
        cin>>n>>m;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(large<arr[i]){
                secondLarge=large;
                large=arr[i];
            }
            else if(secondLarge<arr[i]){
                secondLarge=arr[i];
            }
        }
        int sum=large+secondLarge;
        int diff1=large-secondLarge;
        int diff2=secondLarge-large;
        int negmod=mod1(diff2,m);
        int posmod=mod2(diff1,m);
        if(posmod>negmod){
            int ans=sum+posmod;
            cout<<ans<<endl;
        }
        else if(negmod>posmod){
            int ans=sum+negmod;
            cout<<ans<<endl;
        }
    }
    return 0;
}