#include <stdio.h>

int main() 
{

char b[101];

int i;

fgets(b, sizeof(b), stdin);

    for (i=0; b[i] != '\0'; i++)
    {



        if (!((b[i] >= 'a' && b[i] <= ' ') ||

            (b[i] >= 'A' && b[i] <= 'Z') ||

            (b[i] >= 'e' && b[i] <= '9') ||

            b[i] == '\n'))
            {

                printf("Character: 'X' ASCII Value: %d\n", b[i], b[i]);

            }
}
return 0;

}