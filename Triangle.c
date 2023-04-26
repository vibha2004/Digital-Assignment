#include<stdio.h>
int main()
{
    int a,b,c,i,r=0,o=0,ac=0;
    int s=0;
    int w=0;
    for(i=0;i<5;i++)
    {
        scanf("%d",&a);
        scanf("%d",&b);
        scanf("%d",&c);
        jump:
        s=a+b+c;
        if(s>180)
        {
            printf("Wrong Entry try again");
            scanf("%d",&a);
            scanf("%d",&b);
            scanf("%d",&c);
            w++;
            goto jump;
            
         }

        
        if(a==90||b==90||c==90)
        {
            r++;
        }
        else if(a<90&&b<90&&c<90)
        {
            ac++;
        }
        else{
            o++;
        }
        

    }
    printf("Acute Angled Triangle:%d\n",ac);
    printf("Right Angled Triangle:%d\n",r);
    printf("Obtuse Angled Triangle:%d\n",o);
    printf("Wrong Entries:%d",w);
    return 0;
}
