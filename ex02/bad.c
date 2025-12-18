#include <stdio.h>

int lenght(char *s)
{
    int i = 0;
    
    for (; s[i] != '\0'; i += 1)
        return i;
}

int main()
{
    char *msg = "hello";
    
    printf("len = %d\n", lenght(msg));
    return 0;
}

