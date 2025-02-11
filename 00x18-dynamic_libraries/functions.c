#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"

int _putchar(char c)
{
    return write(1, &c, 1);
}

int _islower(int c)
{
    return (c >= 'a' && c <= 'z');
}

int _isalpha(int c)
{
    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

int _abs(int n)
{
    return (n < 0) ? -n : n;
}

int _isupper(int c)
{
    return (c >= 'A' && c <= 'Z');
}

int _isdigit(int c)
{
    return (c >= '0' && c <= '9');
}

int _strlen(char *s)
{
    int len = 0;
    while (s[len])
        len++;
    return len;
}

void _puts(char *s)
{
    while (*s)
        _putchar(*s++);
}

char *_strcpy(char *dest, char *src)
{
    char *temp = dest;
    while (*src)
        *dest++ = *src++;
    *dest = '\0';
    return temp;
}

int _atoi(char *s)
{
    int num = 0, sign = 1;
    while (*s == ' ' || (*s >= 9 && *s <= 13)) 
        s++;
    if (*s == '-')
    {
        sign = -1;
        s++;
    }
    while (*s >= '0' && *s <= '9')
    {
        num = num * 10 + (*s - '0');
        s++;
    }
    return sign * num;
}

char *_strcat(char *dest, char *src)
{
    char *temp = dest;
    while (*dest)
        dest++;
    while (*src)
        *dest++ = *src++;
    *dest = '\0';
    return temp;
}

char *_strncat(char *dest, char *src, int n)
{
    char *temp = dest;
    while (*dest)
        dest++;
    for (int i = 0; i < n && src[i] != '\0'; i++)
        *dest++ = src[i];
    *dest = '\0';
    return temp;
}

char *_strncpy(char *dest, char *src, int n)
{
    char *temp = dest;
    for (int i = 0; i < n && src[i] != '\0'; i++)
        *dest++ = src[i];
    while (n-- > 0)
        *dest++ = '\0';
    return temp;
}

int _strcmp(char *s1, char *s2)
{
    while (*s1 && (*s1 == *s2))
    {
        s1++;
        s2++;
    }
    return (unsigned char)*s1 - (unsigned char)*s2;
}

char *_memset(char *s, char b, unsigned int n)
{
    for (unsigned int i = 0; i < n; i++)
        s[i] = b;
    return s;
}

char *_memcpy(char *dest, char *src, unsigned int n)
{
    for (unsigned int i = 0; i < n; i++)
        dest[i] = src[i];
    return dest;
}

char *_strchr(char *s, char c)
{
    while (*s)
    {
        if (*s == c)
            return s;
        s++;
    }
    return NULL;
}

unsigned int _strspn(char *s, char *accept)
{
    unsigned int len = 0;
    while (*s)
    {
        char *temp = accept;
        while (*temp)
        {
            if (*s == *temp)
            {
                len++;
                break;
            }
            temp++;
        }
        if (*temp == '\0')
            break;
        s++;
    }
    return len;
}

char *_strpbrk(char *s, char *accept)
{
    while (*s)
    {
        char *temp = accept;
        while (*temp)
        {
            if (*s == *temp)
                return s;
            temp++;
        }
        s++;
    }
    return NULL;
}

char *_strstr(char *haystack, char *needle)
{
    if (*needle == '\0')
        return haystack;
    while (*haystack)
    {
        char *h = haystack, *n = needle;
        while (*h && *n && *h == *n)
        {
            h++;
            n++;
        }
        if (*n == '\0')
            return haystack;
        haystack++;
    }
    return NULL;
}
