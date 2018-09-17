#include<stdio.h>
#include <time.h>
void lower1(char *s);
void lower2(char *s);
char* create_char(long size);

    void main()
    {
        time_t t_start, t_end;
        char *s;
        s = create_char(1000000);
        t_start = time(NULL);
        lower1(s);
        t_end = time(NULL);

        printf("%f\n", difftime(t_end, t_start));
    }

    void lower1(char *s)
    {
        long i;
        for (i = 0; i < strlen(s); i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                s[i] -= ('A' - 'a');
            }
        }
    }

    void lower2(char *s)
    {
        long i;
        long len = strlen(s);
        for (i = 0; i < len; i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                s[i] -= ('A' - 'a');
            }
        }
    }
    size_t strlen(const char *s)
    {
        long length = 0;
        while (*s != '\0')
        {
            s++;
            length++;
        }
        return length;
    }

    char* create_char(long size)
    {
        char ss[size];
        for (long i = 0; i < size; i++)
        {
            ss[i] = 'b';
    }
    return ss;
}
