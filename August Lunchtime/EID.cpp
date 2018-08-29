#include<bits/stdc++.h>
using namespace std;
//typedef long long ll;
int main(){
    int t,n;
    long long low;
    cin>>t;
    while(t--){
            cin>>n;
        vector<long long> a(n);
        for(long long i=0;i<n;i++)
            cin>>a[i];
        sort(a.begin(),a.end());
        low=a[0]+a[1];
        for(long long i=0;i<n-1;i++)
            if(low>abs(a[i]-a[i+1]))
                low=abs(a[i]-a[i+1]);
        cout<<low<<"\n";
    }
    return 0;
}
