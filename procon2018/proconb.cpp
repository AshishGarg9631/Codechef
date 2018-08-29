#include<iostream>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int ans=0,ans1=0;
        if(n%2==0){
            for(int i=1;i<=n;i++){
                if(i%2==0){
                    ans=ans+(i*i);
                }
            }
        }
        else
        for(int i=1;i<=n;i++){
            if(i%2!=0){
                ans1=ans1+(i*i);
            }
        }
        if(n%2==0)
            cout<<ans<<"\n";
        else
            cout<<ans1<<"\n";
    }
    return 0;
}
