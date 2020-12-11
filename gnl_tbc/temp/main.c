#include <stdio.h>

int main()
{
    char *test;
    void *str = "abc";

    printf("str:  %p\n", str);
    test = (char*)str;
    printf("test: %p", test);
    return(0);
}
