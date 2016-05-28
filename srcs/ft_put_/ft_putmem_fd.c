#include <string.h>
#include <unistd.h>
#include "libft.h"

void			ft_putmem_fd(void *content, size_t size, int fd)
{
	if (content)
	{
		if (size > 0)
			write(fd, (char *)content, size);
	}
	else
	{
		ft_putstr_fd("NULL", fd);
	}
}
