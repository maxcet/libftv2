#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t i;
	char *substr;
	i = 0;

	if (!s || start + len > ft_strlen(s))
		return(NULL);
	substr = ft_strnew(len);
	if (!substr)
		return(NULL);
	while (len)
	{
		substr[i++] = s [start++];
		len--;
	}
	substr[i] = 0;
	return(substr);
}