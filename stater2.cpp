#include <iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
        int n, x;
        cin>>n>>x;
        if(n>x){
            cout<<"No"<<endl;
        }   
        else{
            if(x%n==0){
                cout<<"Yes"<<endl;
            }
            else{
                cout<<"No"<<endl;
            }
        }
    }
    return 0;
}
