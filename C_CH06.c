#include <stdio.h>
#include <string.h>

int main()
{
    char str[20];
    gets(str);

    int len = strlen(str);

    // char or int
    if (len == 1)
    {
        // int : 48~57
        if (str[0] >= 48 && str[0] <= 57)
            printf("int\n");
        else
            printf("char\n");
    }
    // int float string
    else
    {
        // 負號開頭
        if (str[0] == 45)
        {
            int flagI = 0;
            int flagF = 0;
            int flagO = 0;
            for (int CntrLen = 1; CntrLen < len; CntrLen++)
            {
                if (str[CntrLen] >= 48 && str[CntrLen] <= 57)
                    flagI++;
                else if (str[CntrLen] == 46)
                    flagF++;
                else
                    flagO++;
            }
            if (flagI == len - 1)
                printf("int\n");
            else if ((flagF == 1) && (flagI == len - 2))
            {
                printf("float\n");
            }
            else
                printf("string\n");
        }

        //非負號開頭
        else
        {
            int flagI = 0;
            int flagF = 0;
            int flagO = 0;
            for (int CntrLen = 0; CntrLen < len; CntrLen++)
            {
                if (str[CntrLen] >= 48 && str[CntrLen] <= 57)
                    flagI++;
                else if (str[CntrLen] == 46)
                    flagF++;
                else
                    flagO++;
            }
            if (flagI == len )
                printf("int\n");
            else if ((flagF == 1) && (flagI == len - 1))
            {
                printf("float\n");
            }
            else
                printf("string\n");
        }
    }
}