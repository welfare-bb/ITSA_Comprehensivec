#include <stdio.h>

int main()
{
    char *Name[] = {"Person", "Fairy", "Dwarf"};

    int num;
    scanf("%d", &num);

    switch (num)
    {
        case 1:
            printf("%s\n", Name[0]);
            break;
        case 2:
            printf("%s\n", Name[1]);
            break;
        default:
            printf("%s\n", Name[2]);
            break;
    }
}