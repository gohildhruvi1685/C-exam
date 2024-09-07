#include<stdio.h>

//10 9 8 7 6 
//   9 8 7 6
//     8 7 6
//       7 6 
//         6

main()
{
	int i,j,k;
	
	for(i=10;i>=6;i--)
	{
		for(k=i;k<10;k++)
		{
			printf("_ ");
		}
		for(j=i;j>=6;j--)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
}