#include <stdio.h>
#include <stdarg.h>

double sumup(char const *format, ...);

int main(void)
{
    int i = 100;
    char c = 'w';
    short s = 88;
    float f = 3.14;

    double answer = sumup("#i#c#s#f", i, c, s, f);
    printf("answer: %lf\n", answer);

    return 0;
}

double sumup(char const *format, ...)
{
    va_list p;
    va_start(p, format);

    char args[10];
    int i, arg_num = 0;
    for(i=0; format[i]!='\0'; i++)
    {
        if(format[i] == '#')
        {
            args[arg_num] = format[++i];
            arg_num++;
        }
    }

    double ans = 0;

    int arg_int;
    double arg_double;

    for(i=0; i<arg_num; i++)
    {
        switch (args[i])
        {
            case 'i':
            case 'c':
            case 's':
                    arg_int = va_arg(p, int);
                    ans += arg_int;
                    break;
            
            case 'f':
                    arg_double = va_arg(p, double);
                    ans += arg_double;
                    break;

            default:
                    printf("format error!\n");
                    break;
        }
    }
    va_end(p);

    return ans;

}

