#include <stdio.h>

void	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      printf("%c", i);
      i = i + 1;
    }
}
