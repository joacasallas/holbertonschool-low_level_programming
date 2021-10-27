#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>

/*0x02-functions_nested_loops*/
int _putchar(char c);
int _islower(int c);
int _isalpha(int c);
int _abs(int num);


/*0x04-more_functions_nested_loops*/
int _isupper(int c);
int _isdigit(int c);

/*0x05. C - Pointers, arrays and strings*/
int _strlen(char *s);
void _puts(char *str);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);

/*0x06. C - Más punteros, matrices y cadenas*/
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);

/*0x07-pointers_arrays_strings*/
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);


#endif /*MAIN_H*/
