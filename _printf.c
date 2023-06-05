#include "main.h"
#include <stdarg.h>
#include <stdio.h>

//betty

int _printf(const char *format, ...)
{
    va_list arg;c
    va_start(arg, format);
    int t

    for (t = 0; format[t]; t++)
    {
        if ( fomart[i] = "%")
        {
            t++;
        }
        switch(format[t])
        {
            case 'd':
            int d = va_arg(arg, format);
            putchar("%d", d);

            case 'i':
            int i = va_arg(arg, format);
            putchar("%i", i);

        }
    }
    
}