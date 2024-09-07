#include <stdio.h>

main() 
{
    FILE *fptr1, *fptr2;
    char sentence[1000];

    fptr1 = fopen("input.txt", "w");
    if (fptr1 == NULL) 
	{
        printf("Error opening the file for writing.\n");
        return 1;
    }

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    fprintf(fptr1, "%s", sentence);
    fclose(fptr1); 

    fptr1 = fopen("input.txt", "r");
    if (fptr1 == NULL) 
	{
        printf("Error opening the file for reading.\n");
        return 1;
    }

    fptr2 = fopen("output.txt", "w");
    if (fptr2 == NULL) 
	{
        printf("Error opening the file for writing.\n");
        return 1;
    }

    while (fgets(sentence, sizeof(sentence), fptr1) != NULL) {
        fputs(sentence, fptr2);
    }

    fclose(fptr1);
    fclose(fptr2);

    printf("The sentence has been written into 'output.txt'.\n");

}
