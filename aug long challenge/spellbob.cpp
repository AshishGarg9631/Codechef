#include<iostream>
using namespace std;
int main(){
    int t;
    char s[3],s1[3];
    cin>>t;
    while(t--){
        cin>>s>>s1;
        if(s[0]=='b' || s1[0]=='b'){
            if(s[1]=='b' || s1[1]=='b'){
                if(s[2]=='o' || s1[2]=='o'){
                    cout<<"yes"<<"\n";
                    continue;
                }
            }
            if(s[1]=='o' || s1[1]=='o'){
                if(s[2]=='b' || s1[2]=='b'){
                    cout<<"yes"<<"\n";
                    continue;
                }
            }
        }

        if(s[0]=='o' || s1[0]=='o'){
             if(s[1]=='b' || s1[1]=='b'){
                if(s[2]=='b' || s1[2]=='b'){
                    cout<<"yes"<<"\n";
                    continue;
                }
           }
       }
       cout<<"no"<<"\n";
    }
    return 0;
}
