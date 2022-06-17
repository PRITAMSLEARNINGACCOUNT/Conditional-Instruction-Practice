#include <stdio.h>
int main()
{
    char lowercase_or_uppercase;
    printf("GIVE A CHARECTER\n");
    scanf("%c", &lowercase_or_uppercase);
    if (lowercase_or_uppercase >= 97 && lowercase_or_uppercase <= 122)
    {
        printf("THE CHARECTER IS LOWERCASE\n");
    }
    else if (lowercase_or_uppercase>=65 && lowercase_or_uppercase<=90)
  
   
    {
        printf("THE CHARECTER IS UPPERCASE\n");
    }
    
    else
    {
        printf("THE CHARECTER IS NOT VALID\n");
    }
    return 0;
}