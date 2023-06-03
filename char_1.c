#include<stdio.h>
int main()
{
    char value;

    printf("value:-");
    scanf("%c",&value);

    if(value == 'a' || value == 'e' || value == 'i' || value == 'o' || value == 'u' || value == 'A' || value == 'E' || value == 'I' || value == 'O' || value == 'U')
    {
        printf("vowel");
    }
    else{
        printf("constent");
    }
}