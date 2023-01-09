#include <stdio.h>

int main()
{
    char *Response[] = {"ByeBye", "Male", "Female"};

    char gender;
    scanf("%c", &gender);

    switch (gender)
    {
        case 'E':
            printf("%s\n", Response[0]);
            break;
        case 'M':
            printf("%s\n", Response[1]);
            break;
        default:
            printf("%s\n", Response[2]);
            break;
    }
}