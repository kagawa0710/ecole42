
#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

# define SUCESS 1
# define END 0
# define ERROR -1

int			get_next_line(int fd, char **line);

#endif
