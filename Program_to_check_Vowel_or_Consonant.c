#include<stdio.h>
int vc(char ch)
{
    switch(ch)
    {
        case 'a': 
        case 'e': 
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U': 
            return 1;
            break;
       default:
       return 0;
    }
}
int main()
{
    int x;
    char ch;
    scanf("%c",&ch);
    x=vc(ch);
    if(x==1)
    {
        printf("Vowel");
    }
    else
    {
        printf("Consonant");
    }
}