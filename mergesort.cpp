#include<iostream>
using namespace std;
void mergesort(int arr[],int p,int q);
void mergee(int arr[],int p,int n,int q);
int main()
{
    cout<<"\nEnter no of test cases";
    int n;
    cin>>n;
    int arr[10];
    for(int i=0;i<n;++i)
    {
        cin>>arr[i];
    }
    int a1=0;
    mergesort(arr,0,n);
    for(int i=0;i<n;++i)
    {
        cout<<arr[i]<<endl;
    }
}
void mergesort(int arr[],int p,int q)
{
   if(p<q)
   {
       int n=(p+q)/2;
       mergesort(arr,p,n);
       mergesort(arr,n+1,q);
       mergee(arr,p,n,q);
   }
}
void mergee(int c[],int p,int n,int q)
{
     int n1=n-p+1;
     int n2=q-n;
     int l[n1+1], r[n2+1];
     for(int i=0;i<n1;++i)
            l[i]=c[p+i];
     for(int i=0;i<n2;++i)
            r[i]=c[n+i+1];
     int i=0,j=0;
     int k=p;
     while(i<n1 && j<n2)
     {
         if(l[i]<=r[j])
         {
             c[k++]=l[i++];
         }
         else
         {
             c[k++]=r[j++];
         }
     }
    while(j<n2)
         c[k++]=r[j++];
    while(i<n1)
         c[k++]=l[i++];
}
