#include<stdio.h>
void main()
{
    int x;
    int notes[]={100,50,20,10,5,2,1};
    int size=sizeof(notes)/sizeof(int);
    int minNotes=0;
    printf("Enter the change amount given");
    scanf("%d",&x);
    for(int i=0;i<size;i++)
    {
        int count=x/notes[i];
        x=x%notes[i];
        minNotes=minNotes+count;
    }
    printf("Min notes are:%d",minNotes);
}