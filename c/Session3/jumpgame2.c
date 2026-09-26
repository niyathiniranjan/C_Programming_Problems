#include<stdio.h>

int canballreach(int nums[],int n){
    int maxreach=0;
    int jumps=0;
    int currentend=0;
    for(int i=0;i<n;i++){
        if(i+nums[i]>maxreach){
            maxreach=i+nums[i];
        }
        if(i==currentend){
            jumps++;
            currentend=maxreach;
        }
    }
    return jumps;

}
int main(){
    int nums[]={2,3,4,1,1,4};
    int n=sizeof(nums)/sizeof(nums[0]);
    printf("%d",canballreach(nums,n));
}