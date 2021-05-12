#include "libft.h"
char *ft_strjoin(char const *s1, char const *s2)
{
	char *dest;
	
	if (s1 && s2)
	{
		dest = ft_strnew(ft_strlen(s1)+ft_strlen(s2));
		if (dest == NULL)
			return(NULL);
		ft_strcpy(dest,s1);
		ft_strcat(dest,s2);
		return(dest);
	}
	else 
		return(NULL)
}