#include<iostream>
#include<vector>
using namespace std;
void heapsort(int arr[], int l);
void heapsort(int arr[],int n, int i);
int main()
{
    int arr[]={10,9,8,7,6,5,4,3,2,1};
    heapsort(arr,10,0);
    for(int i=0;i<10;++i)
     cout<<arr[i]<<endl;

}
void heapsort(int arr[],int n, int i)
{
    for(int i=n/2;i>=0;--i)
    {
        heapfy(arr,n,i);
    }
    for(int  i=n-1;i>=0;i--)
    {
        int t=arr[i];
        arr[i]=arr[largest];
        arr[largest]=t;
    }
}
void heapfy(int arr[],int n,int i)
{
    int largest=i;
    l=2*i;
    r=2*i+1;
    if(arr[largest]< arr[l] && l<n)
        largest=l;
    if(arr[largest]< arr[r] && r<n)
        largest=r;
    if(largest!=i)
    {
        int t=arr[i];
        arr[i]=arr[largest];
        arr[largest]=t;
        heapfy(arr[],n,largest);
    }
}
