#include<iostream>
using namespace std;
int main(){
    int t;
    char a[100];
    cin>>t;
    while(t--){
        int count=0;
        cin>>a;
        for(int i=0;a[i]!='\0';i++){
            if(a[i]=='B'){
                count+=2;
            }
            if(a[i]=='A' || a[i]=='O' || a[i]=='D' || a[i]=='P' || a[i]=='Q' || a[i]=='R'){
                count++;
            }
        }
    cout<<count<<endl;
    }
    return 0;
}
