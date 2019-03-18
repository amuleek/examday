#include <stdio.h>
int main()
{
    int n, revint = 0, remainder, oriint;

    printf("Enter an integer: ");
    scanf("%d", &n);

    oriint = n;

     
    while( n!=0 )
    {
        remainder = n%10;
        revint = revint*10 + remainder;
        n /= 10;
    }

    
    if (oriint == revint)
        printf("%d is a palindrome.", oriint);
    else
        printf("%d is not a palindrome.", oriint);
    
    return 0;
}
