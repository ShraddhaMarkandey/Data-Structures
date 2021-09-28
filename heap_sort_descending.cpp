#include<iostream>
using namespace std;
void heapify(int arr[],int n,int i)
{
    int min=i;
    int c1=2*i+1,c2=2*i+2;
    if(c1<n&&arr[c1]<arr[min])
    {
        min=c1;
    }
    if(c2<n&&arr[c2]<arr[min])
    {
        min=c2;
    }
    if(min!=i)
    {
        swap(arr[i],arr[min]);
        heapify(arr,n,min);
    }
}
void heapSort(int arr[],int n)
{
    for(int i=n/2-1;i>=0;i--)
    {
        heapify(arr,n,i);
    }
    for(int i=n-1;i>=0;i--)
    {
        swap(arr[0],arr[i]);
        heapify(arr,i,0);
    }
}
int main()
{
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    heapSort(arr,size);
    cout<<"Sorted Array in ascending order"<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}