#include<stdio.h>
    int minSpeed(int bunches[], int n, int h)
    {
        int left=1;
        int right=0;
        for(int i=0;i<n;i++)
        {
            if(bunches[i]>right)
            {
                right=bunches[i];
            }
            int speed=right;
            while(left<=right)
            {
                int mid=left+(right-left)/2;
                int totHours=0;
                // totHours=bunches[i]/mid;
                //a/b=(a+b-1)/b
                for(int i=0;i<n;i++)
                {
                    totHours+=(bunches[i]+mid-1)/mid;
                }
                if(totHours<=h)
                {
                    speed=mid;
                    right=mid-1;
                }
                else{
                    left=mid+1;
                }


            }
            return speed;
        }
    }
        int main()
        {
            int bunches[]={3,6,7,11};
            int h=8;
            printf("%d",minSpeed(bunches,4,h));
    }
