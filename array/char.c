//
// Created by Acyco on 2022/09/11.
//

#include <stdio.h>
#include <stdlib.h>

#define N  32

int main()
{
#if 0
    int i;
    char str[N] = {'a','b','c'} ;

    scanf("%s", str);
    printf("%s", str);
    /*  for (i = 0; i < N; ++i)
    {
        printf("%c", str[i]);
    }*/

    printf("\n");
#endif

    char str[N], str1[N], str2[N];
    scanf("%s%s%s", str, str1, str2);
    printf("%s\n%s\n%s\n", str, str1, str2);

    exit(0);
}