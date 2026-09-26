#include<stdio.h>
#include<math.h>
int lus(char *s)
{
    int set[127]={0};
    int l=0;
    int r=0;
    int maxLen=0;
    for(r=0;s[r]!='\0';r++)
    {
        char current=s[r];
        if(set[current]==1)
        {
          l++;
        }
        set[current]=1;
        maxLen=fmax(r-l+1,maxLen);
    }
    return maxLen;

    }


int main()
{
    char s[]="abcabc";
    printf("%d\n",lus(s));
}