#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int arr[20],num,count=0;
    srand(time(0));
    FILE *fp=NULL;
    fp=fopen("r.txt","w+");
    for(int i=0;i<20;i++)
    {
        num=rand()%10;
        fprintf(fp,"%d ",num);
    }
    rewind(fp);
    for(int i=0;i<20;i++)
    {
        fscanf(fp,"%d ",&arr[i]);
    }
    printf("The array elements are\n");
    for(int i=0;i<20;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("The frequency of occurences of elements are\n");
    for(int i=0;i<20;i++)
    {
        if(arr[i]==500000)
        {
            continue;
        }
        num=arr[i];
        count=0;
        for(int j=0;j<20;j++)
        {
           if(arr[j]==num)
           {
            arr[j]=500000;
            count++;
           }
        }
        printf("%d's occurences is %d\n",num,count);
    }
}