#include<stdio.h>
int main()
{
    int u;
    float uc,b,tb;
    scanf("%d",&u);
    //float uc,b,tb;
    
    if(u<=199)
    {
          uc=1.20;
    }
    else if(u>=200 && u<400)
    {
        uc=1.50;
    }
    else if(u>=400 && u<600)
    {
        uc=1.80;
    }
    else
    {
        uc=2.00;
    }
    b=u*uc;
    if(b>400)
    {
    tb=b+b*0.15;
    }
    else
    {
    tb=b+100;
    }
    
    {
     printf("%0.2f",tb);   
    }
    
}    