#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t,i;
    cin>>t;
    while(t--){
      int arr[4];
      for (int i=0;i<=4;i++){
        cin>>arr[i];  
      }
      for(i=0;i<4;i++){
        if(arr[0] < arr[i])
            arr[0] = arr[i];
    }
      arr[i]=arr[i]-arr[0];
      for(i=0;i<3;i++){
          if(arr[0] < arr[i])
            arr[0] = arr[i];
      }
      int fair=k+p, a,b;
      for(int i =0;i<2;i++){
          a=max(arr[i]);
      }
      for(int i=2;i<4;i++){
          b=max(arr[i]);
      }
      int sum=a+b;
      if(sum==fair){
          cout<<"Yes"<<endl;
      }
      else{
          cout<<"No"<<endl;
      }
    }
    return 0;
}