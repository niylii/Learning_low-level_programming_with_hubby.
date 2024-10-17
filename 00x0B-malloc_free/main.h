#ifndef MAIN_H
#define MAIN_H
#include <stddef.h>
#include <stdlib.h>
int	_putchar(char c);
int	**alloc_grid(int width, int height);
char	*create_array(unsigned int size, char c);
char	*_strdup(char *str);
char	*str_concat(char *s1, char *s2);
char	*argstostr(int ac, char **av);
void	free_grid(int **grid, int height);
#endif
