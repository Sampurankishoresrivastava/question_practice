#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int p,q;
	    cin>>p>>q;
	    int sum=(p+q)/2;
	    if (sum%2==0){
	        std::cout << "Alice" << std::endl;
	    }
	    else{
	        cout<<"Bob"<<endl;
	    }
	    
	}
	return 0;
}
