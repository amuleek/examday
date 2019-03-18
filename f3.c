#include <stdio.h>
int main()
{
    int no, oriNo, rem, res = 0;

    printf("Enter a three digit integer: ");
    scanf("%d", &no);

    oriNo = no;

    while (oriNo != 0)
    {
        rem = oriNo%10;
        res += rem*rem*rem;
        oriNo /= 10;
    }

    if(result == no)
        printf("%d is an Armstrong number.",no);
    else
        printf("%d is not an Armstrong number.",no);

    return 0;
}

