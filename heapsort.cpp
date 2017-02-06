#include<iostream>
using namespace std;
int buildheap(int arr[],int n);
void heapsort(int arr[],int n);
int main(){
    cout<<"Enter No of values: ";
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    heapsort(arr,n);
     for(int i=0;i<n;++i){
        cout<<arr[i]<<"\t";
    }
}
void heapsort(int arr[],int n){
    int f=1;
    while(f){
        f=buildheap(arr,n-1);
    }
    while(n){
        int s=arr[0];
        arr[0]=arr[n-1];
        arr[n-1]=s;
        int f=1;
        //cout<<"adsaf";
        while(f){
            f=buildheap(arr,n-1);
        }
        n--;
    }
}
int buildheap(int arr[],int n)
{
    int f=0;
     for(int i=n-1;i>=0;--i){
         int r=int((i-1)/2);
         if(arr[r]<arr[i]){
            int s=arr[r];
            arr[r]=arr[i];
            arr[i]=s;
            f=1;
         }
    }
    return f;
}
