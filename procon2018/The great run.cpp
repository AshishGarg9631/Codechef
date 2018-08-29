#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int t,n,k,max1;
    cin>>t;
    while(t--){
        cin>>n>>k;
        vector<int> a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
        max1=0;
    for (int i=0; i<k; i++)
       max1 += a[i];
    int curr_sum = max1;
    for (int i=k; i<n; i++)
    {
       curr_sum += a[i] - a[i-k];
       max1 = max(max1, curr_sum);
    }

        cout<<max1<<"\n";
    }
    //cout<<max1<<"\n";
    return 0;
}
