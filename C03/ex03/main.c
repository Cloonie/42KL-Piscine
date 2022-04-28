#include <stdio.h>
char	*ft_strncat(char *dest, char *src, unsigned int nb);

int main () 
{
   char dest[] = ".Hello";

   printf("%s", ft_strncat(dest, "-World.", 2));
}