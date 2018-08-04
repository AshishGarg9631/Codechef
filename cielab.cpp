#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b;
    c=a-b;
    if(c%10 >=0 && c%10 <=8){
        cout<<c+1<<endl;
    }else cout<<c-1<<endl;

    return 0;
}
