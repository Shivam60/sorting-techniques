#include<iostream>
using namespace std;
void disp(int arr[]);
void bubsort(int arr[],int len);
int main()
{
    int arr[8]={50,28,62,23,69,34,100,24};
    disp(arr);
    cout<<"\nsorted\n";
    bubsort(arr,8);
    disp(arr);
}
void disp(int arr[])
{
    for(int i=0;i<7;++i)
        cout<<arr[i]<<'\t';
    cout<<endl;
}
void bubsort(int arr[],int len)
{
    for(int i=0;i<len;++i)
    {
        for(int j=0;j<len-1-i;++j)
        {
            if(arr[j]<arr[j+1])
            {
                int t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;
            }
    }
}
}
