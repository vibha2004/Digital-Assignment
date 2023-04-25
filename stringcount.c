#include<stdio.h>
int main()
{
    char s[50];
    fgets(s,50,stdin);
    int i=0;
    int v=0,c=0,sp=0,x=0;
    while(s[i]!='\0')
    {
        
        if(s[i]=='a'|s[i]=='e'|s[i]=='i'|s[i]=='o'|s[i]=='u'|s[i]=='A'|s[i]=='E'|s[i]=='I'|s[i]=='O'|s[i]=='U')
        {
            v++;
        }
        else if(s[i]>='A'&&s[i]<='Z'|s[i]>='a'&&s[i]<='z')
        {
            c++;
        }
        else if(s[i]==' ')
        {
            x++;
        }
        else
        {
            sp++;
        }
        i++;

    }
    printf("Words=%d\n",x+1);
    printf("Vowels=%d\n",v);
    printf("Consonants=%d\n",c);
    printf("Space=%d\n",x);
    printf("Special Characters=%d\n",sp);

}