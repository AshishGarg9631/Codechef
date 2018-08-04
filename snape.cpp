#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int t,ls,rs,b;
    cin>>t;
    while(t--){
        cin>>b>>ls;
        cout<<pow(((ls*ls)-(b*b)),0.5)<<" ";
        cout<<pow(((ls*ls)+(b*b)),0.5)<<" ";
    }
    return 0;
}
