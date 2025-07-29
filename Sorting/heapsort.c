#include<stdio.h>
#include<stdlib.h>

void heapify(int a[],int n,int i)
{
    int largest=i;
    int l=2*i;
    int r=(2*i)+1;
    if(l<=n && a[l]>a[largest])
    {
        largest=l;
    }
    if(r<=n && a[r]>a[largest])
    {
        largest=r;
    }
    if(largest!=i)
    {
        int temp=a[i];
        a[i]=a[largest];
        a[largest]=temp;
        heapify(a,n,largest);
    }
}

//heap sort

void heapsort(int a[],int n)
{
    for(int i=n/2;i>=1;i--)
    {
        heapify(a,n,i);
    }
    int temp;
    for(int i=n;i>=1;i--)
    {
        temp=a[1];
        a[1]=a[i];
        a[i]=temp;
        heapify(a,n,1);
    }

    for(int j=1;j<=n;j++)
    {
        printf("%d\t",a[j]);
    }
}

int main()
{
    int a[]={2,45,1,66,4,3,44};
    heapsort(a,7);
}