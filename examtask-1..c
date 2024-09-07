#include<stdio.h>

main()
{
    int num, firstDigit, lastDigit;
    
    printf("Enter a  3 digit's positive integer: ");
    scanf("%d", &num);
    
    if (num < 0)
	{
        printf("Please enter a positive integer.\n");
    }

    lastDigit = num % 10;

    firstDigit = num;
    while (firstDigit >= 10)
	{
        firstDigit /= 10;
    }

    int sum = firstDigit + lastDigit;

    printf("The sum of the first and last digit is: %d\n", sum);

}
