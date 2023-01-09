#include <stdio.h>

int main()
{
    int Score, Assist, Rebound, Steal, Miss;
    scanf("%d %d %d %d %d", &Score, &Assist, &Rebound, &Steal, &Miss);

    int AvgScore = (Score * 1 + Assist * 2 + Rebound * 2 + Steal * 2) - (Miss * 2);

    if(AvgScore>=45)
        printf("A\n");
    else if(AvgScore<45 && AvgScore>=35)
        printf("B\n");
    else if(AvgScore<35 && AvgScore>=25)
        printf("C\n");
    else if(AvgScore<25)
        printf("D\n");
}