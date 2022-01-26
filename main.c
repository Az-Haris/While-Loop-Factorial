#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

main()
{
    int a, n, fact=1;

    printf("Enter a value for Calculating Factorial = ");
    scanf("%d",&n);

    a=1;

    while(a<=n)
    {
        fact=fact*a;
        a++;
    }


    printf("\n\t%d Factorial (%d!) = %d", n, n, fact);


    getch();
    return 0;
}
