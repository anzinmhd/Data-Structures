#include<stdio.h>
#include<stdlib.h>

int b[10];
void merge(int a[],int lb,int mid,int ub)
{

    int i=lb,j=mid+1,k=lb;
    while(i<=mid && j<=ub)
    {
        if(a[i]<a[j])
        {
            b[k]=a[i];
            i++;
        }
        else{
            b[k]=a[j];
            j++;
        }
        k++;
    }
    while(i<=mid)
    {
        b[k]=a[i];
        i++;k++;
    }
    while(j<=ub)
    {
        b[k]=a[j];
        k++;j++;
    }
    for(k=lb;k<ub;k++)
    {
        a[k]=b[k];
    }
}

void mergesort(int a[],int lb,int ub)
{
    int mid=(lb+ub)/2;
    if(lb<ub)
    {
        mergesort(a,lb,mid);
        mergesort(a,mid+1,ub);
        merge(a,lb,mid,ub);
    }
}

int main()
{
    int a[]={45,2,6,77,8,9},i;
    printf("elements : ");
    for(i=0;i<=5;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");
    mergesort(a,0,5);

    printf("Sorted array is\n");
    for(i=0;i<=5;i++)
    {
        printf("%d\t",a[i]);
    }
}
