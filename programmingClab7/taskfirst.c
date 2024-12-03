#include <stdio.h>
#include <string.h>

int main()
{
    char strNew[256];
    char strOld[] = "one two three four";
    int terminate = 0;
    int contunuing = 0;

    // Находим последнее слово
    for (int i = strlen(strOld) - 1; i >= 0; i--)
    {
        if (strOld[i] == ' ')
        {
            terminate = i + 1;
            break;
        }
    }

    // Копируем последнее слово в strNew
    /*while (strOld[terminate] != '\0')
    {
        strNew[contunuing++] = strOld[terminate++];
    }*/
    
    // Копируем предыдущие слова в strNew
    for (int i = strlen(strOld) - 2; i >= 0; i--)
    {
        if (strOld[i] == ' ')
        {
            terminate = i + 1;
            while (strOld[terminate] != ' ' && strOld[terminate] != '\0')
            {
                strNew[contunuing++] = strOld[terminate++];
            }
            strNew[contunuing++] = ' ';
        }
    }
    
    printf("%s", strNew);
}