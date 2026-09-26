#include<stdio.h>
#include<stdbool.h>
bool canballreach(int nums[],int n){
    int maxreach=0;
    for(int i=0;i<n;i++){
        if(i>maxreach){
        return false;
    }
    else{
        maxreach=i+nums[i];
    }
    if(i>maxreach){
        return true;
    }
}
return true;
}
int main(){
    int nums[]={2,3,4,1,1,4};
    int n=sizeof(nums)/sizeof(nums[0]);
    printf("%d",canballreach(nums,n));
}