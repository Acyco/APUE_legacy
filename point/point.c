//
// Created by Acyco on 2022/09/13.
//

#include <stdio.h>
#include <stdlib.h>

int main()
{

#if 0
    int i = 1;
    int *p;
    p = &i;

    printf("%lu\n", sizeof(i)); // 4
    printf("%lu\n", sizeof(p)); // 8


    printf("i = %d\n", i);
    printf("&i = %p\n", &i);
    printf("p = %p\n", p); // p == &i
    printf("&p = %p\n", &p);
    printf("*p = %d\n", *p); // i == *p
#endif


#if 0
    int *p;
    //*p = 1; // 不可以这样做， 在macos 报bus error

    printf("%d\n", *p);
    //printf("%p ---> %d\n", p ,*p);

#endif

    int *p = NULL;
    void *q = NULL;




    exit(0);
}