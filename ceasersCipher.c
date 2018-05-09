//A cipher program

#include <ctype.h>
#iclude <stdio.h>
#include < string.h>

int main(void)
{
    char *input_text = "Hello";
    int given_key = 1;

    if(given_key < 0)
    {
        return 1;
    }

    printf("Plain text : %s", input_text);
    printf("Cipher text: \n");

    
}

