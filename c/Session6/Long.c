#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int Long(int d[],int n,int k)
{
    int l=0;
    int r=0;
    int maxLen=0;

    for(r=0;r<n;r++)
    {
        if(d[r]-d[l]>k)
        {
            l++;
        }
        maxLen=fmax(r-l+1,maxLen);
    }
    return maxLen;
}
int main()
{
    int d[]={1,3,5,7,9};
    int n=sizeof(d)/sizeof(int);
    int k=4;
    printf("%d",Long(d,n,k));
}