#include <stdio.h>

int main()
{
    int height, gender;
    while (scanf("%d %d", &height, &gender) != EOF)
    {
        if (gender == 1)
        {
            double weight = (height - 80) * 0.7;
            int r_weight = (int)(weight * 10 + 0.5);
            printf("%.1f\n", (double)r_weight / 10);
        }
        else if (gender == 2)
        {
            double weight = (height - 70) * 0.6;
            int r_weight = (int)(weight * 10 + 0.5);
            printf("%.1f\n", (double)r_weight / 10);
        }
    }
}