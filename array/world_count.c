//
// Created by Acyco on 2022/09/13.
//
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[128];
    int count = 0, flag = 0, i;

    gets(str);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ' || str[i]=='\t')
            flag=0;
        else // str[i] is a char
            if (flag ==0){
                count ++;
                flag =1;
            }
    }

    printf("count = %d\n", count);

    exit(0);
}