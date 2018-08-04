#include<iostream>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
            int ans=0;
        cin>>n;
        while(n>0){
        ans=ans+(n%10);
        n=n/10;
        }
    cout<<ans<<endl;
    }
    return 0;
}
