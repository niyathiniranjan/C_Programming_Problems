#include<stdio.h>
void product(int arr[],int n)
{
   int product=1;
    int i;
    for(i=0;i<n;i++)
    {
        if(arr[i]==1)
        continue;
        product=product*arr[i];
    }
    printf("%d\n",product);
    int s=1;
     for(i=0;i<n;i++)
    {
        if(arr[i]==2)
        continue;
        s=s*arr[i];
        
    }
    printf("%d\n",s);
    int k=1;
     for(i=0;i<n;i++)
    {
        if(arr[i]==3)
        continue;
        k=k*arr[i];
    }
    printf("%d\n",k);
    int d=1;
     for(i=0;i<n;i++)
    {
        if(arr[i]==4)
        continue;
        d=d*arr[i];
    }
    printf("%d\n",d);
    
}
int main()
{
    int arr[]={1,2,3,4};
    int n=4;
    product(arr,n);
}