#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false)
    cin.tie(NULL);
    int t,n,k,count=0;
    cin>>t>>k;
    while(t--){
        cin>>n;
        if(n%k==0)
            count++;
        }
    cout<<count<<endl;
    return 0;
}
