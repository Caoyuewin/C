#define _CRT_SECURE_NO_WARNINGS 1
#ifndef _MYSTRING_H_
#define _MYSTRING_H_

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

char* my_strstr(char* dst, char* src);
char* my_strchr(char ch, char* src);
int my_strcmp(char* str1, char* str2);
char* my_strncpy(char* dst, char* src, size_t n);
char* my_strncat(char* dst, char* src, size_t n);
int my_strncmp(char* dst, char* src, size_t n);

#endif // !1
