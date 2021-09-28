#include<iostream>
using namespace std;
void heapify(int arr[],int n,int i)
{
    int c1=2*i+1,c2=2*i+2;
    int min=i;
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
void buildHeap(int arr[],int n)
{
    for(int i=n/2;i>=0;i--)
    {
        heapify(arr,n,i);
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
    buildHeap(arr,size);
    cout<<"Min Heap"<<endl;
    for(int i=0;i<size;i++)
    {
       cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}