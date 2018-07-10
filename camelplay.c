#include<stdio.h>
int main()
{
    char b[100];
    int i,j=0,k[100];
    scanf("%[^\n]s",&b);
    for(i=0;b[i]!='\0';i++)
    {
        if(i==0)
        {
            if(b[i]>='a' && b[i]<='z')
            {
            b[i]=b[i]-32;
            }
        }
        else
        {
            if(b[i]==' ')
            {
                k[j]=i+1;
                j++;
            }
            else if(b[i]>='A' && b[i]<='Z')
            {
            b[i]=b[i]+32;
            }
        }
    }
    for(i=0;b[i]!='\0';i++,j=0)
    {
        
        if(k[j]==i)
        {
            if(b[i]>='a' && b[i]<='z')
            {
            b[i]=b[i]-32;
            }
        }
        j++;
    }
    
    for(i=0;b[i]!='\0';i++)
    {
        if(b[i]==' ')
        {
            printf("\t");
        }
        else
        {
            printf("%c",b[i]);
        }
    }
    return 0;
}
