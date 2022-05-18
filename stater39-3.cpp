#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s; 
        int start=0,lime=0;
        for(int i=0;i<n;i++){
            cin>>s;
            if(s=="START38"){
                start++;
            }
            else if(s=="LTIME108"){
                lime++;
            }
        }  
        cout<<start<<" "<<lime<<endl;
    }
    return 0;
}