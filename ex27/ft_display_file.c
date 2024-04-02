#include <fcntl.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>

#define BUF_SIZE 1024
#define STANDARD_OUTPUT 1
#define STANDARD_ERR 2

void	ft_putchar(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putstr(char *str, int fd)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i], fd);
		i++;
	}
}

int		main(int argc, char **argv)
{
	int		file_open;
	int		buf_rec;
	char	buffer[BUF_SIZE + 1];

	if (argc > 2)
		ft_putstr("Too many arguments.\n", STANDARD_ERR);
	else if (argc == 1)
		ft_putstr("File name missing.\n", STANDARD_ERR);
	else
	{
		file_open = open(argv[1], O_RDONLY);
		if (file_open == -1)
			ft_putstr("Cannot read file.\n", STANDARD_ERR);
		else
		{
			while ((buf_rec = read(file_open, buffer, BUF_SIZE)))
			{
				buffer[buf_rec] = '\0';
				ft_putstr(buffer, STANDARD_OUTPUT);
			}
		}
	}
	return (0);
}
