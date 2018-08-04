#include<iostream>
#include<cstring>
using namespace std;
int main(){
    int t,l=0;
    char s[100001];
    cin>>t;
    while(t--){
        cin>>s;
        int j=0;
        l=strlen(s);
        for(int i=0;i<l;i++){
                if(s[i]=='1' && j==0){j=1;}
                if(s[i]=='0' && j==1){j=2;}
                if(s[i]=='1' && j==2){j=3;break;}
        }
        if(j==1 || j==2){cout<<"YES"<<endl;}
        else cout<<"NO"<<endl;
    }
    return 0;
}
