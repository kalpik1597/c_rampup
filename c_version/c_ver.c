# include <stdio.h>

int main()
{
    #if defined(__STDC__)
    #if defined(__STDC_VERSION__)
        printf("Version %ld\n", __STDC_VERSION__);
    #else
        puts("Standard C - certainly 1989");
    #endif
    #else
    puts("Pre 1989 or non-compliant C");
    #endif

}