#include<iostream>
using namespace std;
int main(){
    int t,n,a,k,x,y=1,sum,d;
    cin>>t;
    while(t--){
        cin>>n>>a>>k;
        sum=(n-2)*180;
        d=(((2*sum)/n)-(2*a))/(n-1);
        x=a+(k-1)*d;
        cout<<x<<" "<<y<<"\n";
    }
    return 0;
}
