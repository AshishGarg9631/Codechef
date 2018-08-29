#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t,n,x;
    cin>>t;
    while(t--){
        cin>>n>>x;
        vector<int> a(n);
        int c=0;
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n;i++){
            if(a[i]>=x)
                c++;
        }
        if(c>=1)
            cout<<"YES"<<"\n";
        else
            cout<<"NO"<<"\n";
    }
    return 0;
}
