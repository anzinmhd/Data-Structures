#include<stdio.h>

int partition(int a[],int lb,int ub)
{
    int pivot,end,start,temp;
    pivot=a[lb];
    start=lb;
    end=ub;
    while(start<end)
    {
        while(a[start]<=pivot)
        {
            start++;
        }
        while(a[end]>pivot)
        {
            end--;
        }
        if(start<end)
        {
            temp=a[start];
            a[start]=a[end];
            a[end]=temp;
        }
        temp=a[lb];
        a[lb]=a[end];
        a[end]=temp;
        return end;
    }

}

void quicksort(int a[],int lb,int ub)
{
    int piv_loc;
    if(lb<ub)
    {
        piv_loc=partition(a,lb,ub);
        quicksort(a,lb,piv_loc-1);
        quicksort(a,piv_loc+1,ub);
    }
}

int main()
{
    int a[10],n,i,lb,ub;
    printf("Enter size ?");
    scanf("%d",&n);
    printf("Enter elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    lb=0;
    ub=n-1;
    quicksort(a,lb,ub);
    printf("\nSorted is ");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}