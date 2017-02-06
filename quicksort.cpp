#include<iostream>
#include<vector>
using namespace std;
void quicksort(int arr[],int l,int h);
int partition(int arr[],int h,int l);
int main()
{
    cout<<"\nenter tese cases";
    int n=6;
//    cin>>n;
    int arr[]={6,5,4,3,2,1};
/*    for(int i=0;i<n;++i)
    {
        int p=0;
        cin>>arr[i];
    }*/
    quicksort(arr,0,n);
    for(int i=0;i<n;++i)
    {
        cout<<arr[i]<<' ';
    }
}
void quicksort(int arr[],int l,int h)
{
    if(l<h)
    {
        int p=partition(arr,l,h);
        quicksort(arr,l,p-1);
        quicksort(arr,p+1,h);
    }
}
int partition(int arr[],int l,int h)
{
    int k=arr[h];
    int i=l;
    for(int j=l;j<h-1;++j)
    {
        if(k>=arr[j])
        {
            ++i;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[h]);
    return i+1;
}
