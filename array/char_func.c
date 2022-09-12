//
// Created by Acyco on 2022/09/11.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * strlen & sizeof
 * strcpy & strncpy
 * strcat & strncat
 * strcmp & strncmp
 */

#if 0
int main ()
{

    char str[] = "hello";
    // 由于在macOS系统上 strlen() 返回的数据是unsigned long类型 ，sizet_t 这个
    printf("%lu\n", strlen(str));
    printf("%lu\n", sizeof(str)); // sizeof 占用内存字节的个数

    char str2[32] = "hello\0abc";
    strcpy(str2, "abcde");
    puts(str2);

    exit(0);
}
#endif

#define STRSIZE 32

int main()
{

    char str[STRSIZE] = "hello";
    char str1[STRSIZE] = "helloa";

    // strcpy(str, "abcde"); // 可是 strcpy 根本没有检测你有多大空间
    //   strncpy(str, "abcde", STRSIZE); // 防止数组越界
    // strncpy(str,"abcde", sizeof(str));

    //  strcat(str," ");
    //  strcat(str,"world!");

    // strncat(str, " ", STRSIZE);
    // strncat(str, "world!",STRSIZE);

  //   puts(str);

   // printf("%d\n", strcmp(str,str1));
    printf("%d\n", strncmp(str,str1,5)); // 前5个字符进行比较



}