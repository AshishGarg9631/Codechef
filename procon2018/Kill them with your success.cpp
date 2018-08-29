#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>
using namespace std;
int main(){
    int t,n;
    double res=0;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a.begin(),a.end());
        res=a[n-1];
        for(int i=n-2;i>=0;i--){
            res=(res+a[i])/2;
        }
        cout<<fixed<<setprecision(8)<<res<<"\n";
    }
    return 0;
}
