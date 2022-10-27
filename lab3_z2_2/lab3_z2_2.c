#include <stdio.h>

// 1 CHe 2 Lviv 3 Київ 4 odesa 5 harkiv 6 франківськ 7 chernihiv 8 donezk 9 dnipro 10 herson
int main()
{
 
    printf("List of working indexes: 58000, 79000, 01001, 65000, 61000, 76000, 14000, 83000, 49000, 73000\n");
 
    int i;
    printf("insert index: ");
    scanf_s("%d", &i);

    if (i == 01001) {
        i = 1001;
    }


    switch (i)
    {
    case 58000:
        printf("Chernivtsi");
        break;

    case 79000:
        printf("Lviv");
        break;

    case 1001:
        printf("Kyiv");
        break;

    case 65000:
        printf("Odesa");
        break;

    case 61000:
        printf("Harkiv");
        break;

    case 76000:
        printf("Ivano-Frankivsk");
        break;

    case 14000:
        printf("Chernihiv");
        break;

    case 83000:
        printf("Donezk");
        break;

    case 49000:
        printf("Dnipropetrovsk");
        break;

    case 73000:
        printf("Herson");
        break;

    default:
        printf("none");
        break;
    }
}
