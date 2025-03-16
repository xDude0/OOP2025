#include "Math.h"
#include <stdarg.h>
#include <cstring>

int Math::Add(int a, int b)
{
    return a + b;
}
int Math::Add(int a, int b, int c)
{
    return a + b + c;
}
int Math::Add(double a, double b)
{
    return a + b;
}
int Math::Add(double a, double b, double c)
{
    return a + b + c;
}


int Math::Mul(int a, int b)
{
    return a * b;
}
int Math::Mul(int a, int b, int c)
{
    return a * b * c;
}
int Math::Mul(double a, double b)
{
    return a * b;
}
int Math::Mul(double a, double b, double c)
{
    return a * b * c;
}
int Math::Add(int count, ...) 
{
    int sum = 0;
    va_list args;

    va_start(args, count);
    for (int i = 0; i < count; ++i)
        sum = sum+ va_arg(args, int);

    va_end(args);
    return sum;
}
char* Math::Add(const char* s1, const char* s2)
{
    if (!s1 || !s2)
        return nullptr;

    int len = strlen(s1) + strlen(s2) + 1;

    char* s3 = new char[len];

    strcpy(s3, s1);
    strcat(s3, s2);
    return s3;
}