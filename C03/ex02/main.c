#include <stdio.h>
char	*ft_strcat(char *dest, char *src);

int main () 
{
   char dest[] = ".HeLLo";

   printf("%s\n", ft_strcat(dest, "-WorLd."));
}