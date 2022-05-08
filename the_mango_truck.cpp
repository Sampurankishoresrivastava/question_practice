#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,z;
        cin>>x>>y>>z;
        int n=(z-y)/x;
        cout<<n<<endl;
    }
    return 0;
}