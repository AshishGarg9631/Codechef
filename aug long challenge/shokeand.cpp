#include<cmath>
#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    int t,n;
    long long min1,a[32][32];
     for(int i=0;i<=30;i++){
            for(int j=i+1;j<=30;j++){
                a[i][j]=pow(2,i)+ pow(2,j);
            }
        }
    cin>>t;
    while(t--){
        cin>>n;
        min1=pow(2,32);
        for(int i=0;i<=30;i++){
            for(int j=i+1;j<=30;j++){
                if(abs(n-a[i][j])<min1)
                    min1=abs(n-a[i][j]);
            }
        }
        cout<<min1<<"\n";
    }
    return 0;
}
