#include "get_next_line.h"

// You can use this main to test your gnl function

int main(void)
{
	int fd;
	char *line;

	fd = open("text.txt", O_RDONLY);
	if (fd < 0)
		return (printf("Fd cant be openned\n"), 1);

	while ((line = get_next_line(fd)))
	{
		printf("%s", line);
		free(line);
	}
	close(fd);
	return (0);
}
