#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int b[n];
	    int a=0;
	    for(int i=0;i<n;i++){
	        cin>>b[i];
	        a=a+b[i];
	    }
	    if(a%2==0){
	       cout<<"Yes"<<endl;
	        }
	    else{
	       cout<<"No"<<endl;
	        }
	}
	return 0;
}
