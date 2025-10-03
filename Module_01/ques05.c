#include <stdio.h>

int main()

{

    char sentence [101];

    int i;

    fgets(sentence, sizeof(sentence), stdin); for(i=0; sentence[i]!= '\0';i++)

{

    if(sentence[i]=='.')

    {

        printf(".\n");

        if(sentence[i+1]==' '){i++; }

    }

    else

    {

        printf("%c", sentence[i]);

    }

}

    return 0;

}