#include "libft.h"

void ft_pustr_fd(char *s, int fd)
{
    write(fd, s, ft_strlen(s));
}