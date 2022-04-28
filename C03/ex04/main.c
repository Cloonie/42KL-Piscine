#include <stdio.h>
char	*ft_strstr(char *str, char *to_find);

int main () 
{
   char string[] = "abcdefghijklHellomnopqrstuvwxyz";

   printf("%s", ft_strstr(string, "p"));
}