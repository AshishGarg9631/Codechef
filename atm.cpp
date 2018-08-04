#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int n;
    float m;
    cin>>n>>m;
    if(n%5==0 && n<m-0.50){
        cout<<fixed<<setprecision(2)<<m-n-0.50;
    }
    else
        cout<<fixed<<setprecision(2)<<m;

    return 0;

}
