#include <stdio.h>

struct Mobiles{
    char company_name[100];
    char color[50];
    char model[100];
    int price;
};

main() {
    int n;
        printf("Enter the number of Mobile's: ");
    scanf("%d", &n);

    struct Mobiles mob[n];

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for Mobile's %d\n", i + 1);

        printf("Enter number of company_name: ");
        scanf("%s",&mob[i].company_name);

        printf("Enter year of color: ");
        scanf("%s",&mob[i].color);

        printf("Enter model: ");
        scanf("%s",&mob[i].model);
        
        printf("Enter price: ");
        scanf("%s",&mob[i].price);
    }

    printf("\n--- mobile's Details ---\n");
    for (int i = 0; i < n; i++) {
        printf("\ncompany_ %d details:\n", i + 1);
        printf("company_name: %d\n",mob[i].company_name);
        printf("color: %d\n", mob[i].color);
        printf("model: %s\n",mob[i].model);
        printf("price: %s\n", mob[i].price);
    }

}

