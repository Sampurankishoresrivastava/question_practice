#include<iostream>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int n,odd,even;
        cin >> n;
        int k=2*n;
        int arr[k];
        for( int i=0;i<=k;i++){
	        cin>>arr[i];
	    }
        for(int i=0;i<=k;i++){
            if(arr[i]%2==0){
                even++;
            }
            else{
                odd++;
            }
        }
        if(even==odd){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}