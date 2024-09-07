#include <stdio.h>
isConsonant(char ch) 
{
	
    return (ch >= 'a' && ch <= 'z' && !(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'));
}

void countConsonants(char sentence[], int consonantCount[]) 
{
    for (int i = 0; sentence[i] != '\0'; i++) 
	{
        char ch = tolower(sentence[i]);
        if (isConsonant(ch)) 
		{
            consonantCount[ch - 'a']++;
        }
    }
}

void displayConsonantCounts(int consonantCount[]) 

    printf("Consonant counts:\n");
    for (char ch = 'a'; ch <= 'z'; ch++) 
	{
        if (isConsonant(ch) && consonantCount[ch - 'a'] > 0) {
            printf("%c: %d\n", ch, consonantCount[ch - 'a']);
        }
    }
}

int main()
{
	char MAX_LEN;
    char sentence[MAX_LEN];
    int consonantCount[26] = {0}; 

    printf("Enter a sentence: ");
    fgets(sentence, MAX_LEN, stdin);  
    countConsonants(sentence, consonantCount);

    displayConsonantCounts(consonantCount);

}

