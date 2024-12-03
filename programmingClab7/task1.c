#include <stdio.h>
#include <string.h>

void main()
{
    char strNew[256] = {0};
    char strOld[] = "People are strange, when you a stranger uiopihhg";
    char strTemp[256] = " ";
    int terminate = strlen(strOld);
    int continuous = strlen(strOld);
    int s = 0;

    strcat(strTemp, strOld);

    for (int i = strlen(strTemp); i != -1; i--)
    {
        if (strTemp[i] == ' ')
        {
            continuous = terminate;
            terminate = i;
            //printf("%d - %d, ", terminate, continuous);
            for (int j = terminate; j < continuous; j++, s++)
            {
                strNew[s] = strTemp[j];
            }
        }

    }
    printf("%s", strNew);
}
