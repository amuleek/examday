#include <stdio.h>
int main()
{
    int no, originalNo, rem, res = 0;

    printf("Enter a three digit integer: ");
    scanf("%d", &no);

    originalNo = no;

    while (originalNo != 0)
    {
        rem = originalNo%10;
        res += rem*rem*rem;
        originalNo /= 10;
    }

    if(result == no)
        printf("%d is an Armstrong number.",no);
    else
        printf("%d is not an Armstrong number.",no);

    return 0;
}

