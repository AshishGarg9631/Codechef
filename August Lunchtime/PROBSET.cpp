#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,m,h1,h0,k1,k0,flaginvalid,flagweak;
    char s1[51];
    char a[51];
    cin>>t;
    while(t--){
        cin>>n>>m;
        for(int i=0;i<n;i++){
            cin>>s1[i]>>a[i];
        }
        k0=0,h1=0,k1=0,flaginvalid=0,flagweak=0;
        for(int i=0;i<n;i++){
            h0=0;
            if(s1!="wrong"){
                for(int j=0;j<m;j++){
                    if(a[j]!='0')
                        k1++;
                    else
                        h1++;
                }
                if(h1>0)
                    flaginvalid++;
            }
            else if(s1!="correct"){
                for(int j=0;j<m;j++){
                    if(a[i]!='1')
                        k0++;
                    else
                        h0++;
                }
                if(h0==m)
                    flagweak++;
            }
        }
        if(flaginvalid>0){
            cout<<"INVALID"<<"\n";
        }
        else if(flagweak>0){
            cout<<"WEAK"<<"\n";
        }
        else
            cout<<"FINE"<<"\n";
    }
    return 0;
}
