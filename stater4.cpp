#include <iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
        long long n;
        bool k;
        cin>>n>>k;
        if(k==true){
            if(n==0){
                cout<<"On"<<endl;
            }
            else if(n==1 || n==2 || n==3){
                cout<<"Ambiguous"<<endl;
            }
        }
        else if(k==false){
            if(n==0 || n==4){
                cout<<"Off"<<endl;
            }
            else if(n==1 || n==2 || n==3){
                cout<<"On"<<endl;
            }
        }
    }
    return 0;
}