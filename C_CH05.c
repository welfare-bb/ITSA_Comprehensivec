#include <stdio.h>

#define swap(x, y, t) ((t = x), (x = y), (y = t))

int main()
{
    int num[3];

    scanf("%d %d %d", &num[0], &num[1], &num[2]);

    int Cntri = 3;
    int temp;
    while (Cntri > 1)
    {
        Cntri--;
        for (int Cntrj = 0; Cntrj < Cntri; Cntrj++)
        {
            if (num[Cntrj] < num[Cntrj + 1])
            {

                swap(num[Cntrj], num[Cntrj + 1], temp);
            }
        }
    }

    printf("%d>%d>%d\n", num[0], num[1], num[2]);
}