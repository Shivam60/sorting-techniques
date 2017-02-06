#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> c,v;
    for(int i=0;i<n;++i){
        int t;
        cin>>t;
        v.push_back(t);
        c.push_back(0);
     c.push_back(0);
    }
    for(int i=0;i<n;++i){
        c[v[i]]+=1;
    }
    for(int i=0;i<n+1;++i){
        if(c[i]!=0){
            for(int j=0;j<c[i];++j){
                cout<<i<<'\t';
            }
        }
    }


}
