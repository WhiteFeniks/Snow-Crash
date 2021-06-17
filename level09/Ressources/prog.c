#include "unistd.h"
#include <fcntl.h>

int	main(int argc, char *argv[])
{
	char	str[100];
	int		i;
	char	c;
	int		j;
	int		fd;

	i = 0;
	j = 0;
	fd = open("token", O_RDONLY, 100);
	i = read(fd, str, 100);
	while (j <= i)
	{
		c = str[j] - j;
		write(1, &c, 1);
		j++;
	}
	return (0);
}
