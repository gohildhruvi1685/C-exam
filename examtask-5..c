#include <stdio.h>

void sumarrays(int *array1, int *array2, int *sumarray, int size) {
    for (int i = 0; i < size; i++) {
        *(sumarray + i) = *(array1 + i) + *(array2 + i);
    }
}

int main() {
    int size;

    printf("Enter the size of the arrays: ");
    scanf("%d", &size);

    int array1[size], array2[size], sumarray[size];

    printf("Enter elements of the first array = \n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &array1[i]);
    }

    printf("Enter elements of the second array = \n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &array2[i]);
    }

    sumarrays(array1, array2, sumarray, size);

    printf("Sum of the two arrays:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", sumarray[i]);
    }
    printf("\n");
}
