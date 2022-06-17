#include<stdio.h>
int main(){
    int a,b,c,d;
    printf("ENTER 4 VALUE'S TO FIND OUT THE GREATEST ONE\n");
    scanf("%d""%d""%d""%d",&a,&b,&c,&d);
    
    if (a>b && a>c && a>d)
    {
       printf("A IS THE BIGGEST NUMBER %d\n",a);
    }
    else if (b>c && b>d)
    {
        printf("B IS THE BIGGEST NUMBER %d\n",b);
    }
    else if (c>d)
    {
        printf("C IS THE BIGGEST NUMBER %d\n",c);
    }
    else
    {
        printf("D IS THE BIGGEST NUMBER %d\n",d);
    }
    
    
    
    
}