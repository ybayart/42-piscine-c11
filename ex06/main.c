#include <stdio.h>

void	ft_sort_string_tab(char **tab);

int		main(int argc, char **argv)
{
	int		i;

	ft_sort_string_tab(argv);
	i = -1;
	while (++i < argc)
		printf("%s\n", argv[i]);
}
