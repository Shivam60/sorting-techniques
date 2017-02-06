#include<iostream>
#include<vector>
using namespace std;
void insertsort(vector<int> &a);
int main()
{
    cout<<"\nenter tese cases";
    int n;
    cin>>n;
    vector<int> a;
    for(int i=0;i<n;++i)
    {
        int p=0;
        cin>>p;
        a.push_back(p);
    }
    insertsort(a);
    for(int i=0;i<n;++i)
    {
        cout<<a[i];
    }
}
void insertsort(vector<int> &a)
{
    for(int i=1;i<a.size();++i)
    {
        int key=a[i];
        int j=i-1;
        while(key<a[j] && j>=0)
        {
            a[j+1]=a[j];
            --j;
        }
        a[j+1]=key;
    }
}
