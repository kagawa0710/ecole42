#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int main(int argc, char **argv)
{
    int fd;
    int i;
    int l;
    char *line;

    if (argc > 1)
        printf("%s\n", *argv);

    fd = open("a.txt", O_RDONLY);
    // fd = open("test/bar.txt", O_RDONLY);
    //fd = open("test/normal.txt", O_RDONLY);
    //fd = open("test/only_newline.txt", O_RDONLY);
    //fd = open("test/fewchar_perline.txt", O_RDONLY);
    //fd = open("test/few.txt", O_RDONLY);
    //fd = open("test/long_line.txt", O_RDONLY);
    //fd = open("test/longtext.txt", O_RDONLY);
    //fd = open("test/64bit_paragraph.txt", O_RDONLY);
    //fd = open("test/64bit_line.txt", O_RDONLY);
    //fd = open("test/special.txt", O_RDONLY);
    //fd = open("test/empty.txt", O_RDONLY);
    //fd = 10;

    l = 0;
    //while (0 < (i = get_next_line(fd, &line)))
    while (l < 4)
    {
        i = get_next_line(fd, &line);
        printf("%d return flag : %d : '%s'\n", l, i, line);
        l++;
        free(line);
        line = NULL;
        i = 1;
    }
    printf("%d return flag : %d : '%s'\n", l, i, line);
    free(line);
    line = NULL;
    return 0;
}
