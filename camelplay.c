#include<stdio.h>
int main()
{
    char c[100];
    int i,j=0,k[100];
    scanf("%[^\n]s",&c);
    for(i=0;c[i]!='\0';i++)
    {
        if(i==0)
        {
            if(c[i]>='a' && c[i]<='z')
            {
            c[i]=c[i]-32;
            }
        }
        else
        {
            if(c[i]==' ')
            {
                k[j]=i+1;
                j++;
            }
            else if(c[i]>='A' && c[i]<='Z')
            {
            c[i]=c[i]+32;
            }
        }
    }
    for(i=0;c[i]!='\0';i++,j=0)
    {
        
        if(k[j]==i)
        {
            if(c[i]>='a' && c[i]<='z')
            {
           c[i]=c[i]-32;
            }
        }
        j++;
    }
    
    for(i=0;c[i]!='\0';i++)
    {
        if(c[i]==' ')
        {
            printf("\t");
        }
        else
        {
            printf("%c",c[i]);
        }
    }
    return 0;
}
