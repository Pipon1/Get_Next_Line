#include	<unistd.h>
#include	<stdio.h>
#include	<stdlib.h>
#include	"get_next_line.h"
#include	<fcntl.h>

int	main(void)
{
	int	fd;
	char	*test;
	int	i;

	i = 0;
	fd = open("test.txt", O_RDONLY);
	while (i < 30)
	{
		test = get_next_line(fd);
		printf("%s", test);
		i++;
	}
	return (0);
}
