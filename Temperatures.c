#include<stdio.h>
int main()
{
    int t1[7],t2[7],t3[7],t4[7];
    int i;
    for(i=0;i<7;i++)
    {
        jump:
        scanf("%d",&t1[i]);
    if(t1[i]>=28&&t1[i]<=33)
    {
        t2[i]=t1[i]-1;
        t3[i]=t1[i]+5;
        t4[i]=t3[i]-t2[i];
        
    }
    else
    {
        printf("Wrong temperature entered");
        goto jump;
        break;
    }
    }
    for(i=0;i<7;i++)
    {
        printf("Day %d temperature:%d\n",i+1,t4[i]);
    }
    
    
    
    
}