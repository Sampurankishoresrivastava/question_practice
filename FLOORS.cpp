#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    int f1=0,f2=0;
	    if(x%10!=0){
	        f1=(x+10)/10;
	    }
	    else{
	        f1=((x+10)/10)-1;
	    }
	    if(y%10!=0){
	        f2=(y+10)/10;
	    }
	    else{
	        f2=((y+10)/10)-1;
	    }
	    cout<<abs(f1-f2)<<endl;
	}
	return 0;
}
