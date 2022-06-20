#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,n;
	    cin>>x>>n;
	    int a=x/10;
	    int ans=a*n;
	    cout<<ans<<endl;
	}
	return 0;
}
