#include<iostream>
#include<algorithm>
#include<vector>
#include<utility>
using namespace std;
int main(){
    int p,s;
    cin>>p>>s;
    pair<int, int> kns[s];
    int k[s],ns[s],d[p],h;
    for(int i=1;i<=p;i++) {
        for(int j=0;j<s;j++)
            cin>>k[j];
         for(int j=0;j<s;j++)
            cin>>ns[j];
    }

    for(int i=0;i<s;i++){
      kns[i].first=k[i];
      kns[i].second=ns[i];
    }
    sort(kns,kns+s);
    for( int i=0;i<s;i++)
    {
      k[i]=kns[i].first;
      ns[i]=kns[i].second;
    }
    for(int i=1;i<=p;i++){
        for(int j=0;j<s-1;j++){
            if(ns[j]>ns[j+1])
                d[i]+=1;
        }
    }
    vector<pair<int,int> >a;
    for (int i = 1 ;i <=p ; i++) {
        h=d[i];
        a.push_back (make_pair (h,i));
    }
    sort (a.begin(),a.end());
    for (int i = 1 ; i <=p; i++){
        cout<<a[i].second<<"\n";
    }
    return 0;
}
