#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
#include "get_next_line.h"


int main(int ac, char **av)
{
	char *str;
	int fd;

	fd = open(av[1], O_RDONLY);
	while ((str = get_next_line(fd)))
	{
		//write(1, str, strlen(str));
		printf("%s", str);
		free(str);
	}
	close(fd);
}
