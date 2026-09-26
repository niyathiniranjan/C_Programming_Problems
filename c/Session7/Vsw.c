#include<stdio.h>
void windowsummax(int arr[],int n,int k)
{
    int left=0;
    int right=k-1;
    int sum=0;
    for(int i=0;i<=right;i++)
    {
        sum+=arr[i];
    }
    printf("%d\n",sum);
    while(right<n-1)
    {
        sum=sum-arr[left];
        left++;
        right++;
        sum=sum+arr[right];
        printf("%d\n",sum);

    }
    {
        /* code */
    }
    
}
int main()
{
    int arr[]={2,1,5,1,3,2};
    int n=6;
    int k=3;
    windowsummax(arr,n,k);

}