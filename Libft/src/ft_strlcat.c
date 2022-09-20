#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
  size_t	i;
  size_t	j;
  size_t	res_a;
  size_t	res_b;

  i = ft_strlen(dest);
  j = 0;
  res_a = ft_strlen(dest);
  res_b = ft_strlen(src);
  if (size < 1)
    return (res_b + size);
  while (src[j] != '\0' && i < size - 1)
    {
      dest[i] = src[j];
      i++;
      j++;
    }
  dest[i] = '\0';
  if (size < res_a)
    return (res_b + size);
  else
    return (res_a + res_b); 
}
