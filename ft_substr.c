#include "push_swap.h"

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_memcpy(char	*dst, char *src, int	len)
{
	int	i;

	i = 0;
	while (len-- > 0)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

char	*ft_strdup(char *s1)
{
	int	len;
	char	*dst;

	len = ft_strlen(s1);
	dst = (char *)malloc(len + 1);
	if (!dst)
		return (NULL);
	ft_memcpy(dst, s1, len + 1);
	dst[len] = '\0';
	return (dst);
}

char	*ft_substr(char *s, unsigned int	start, int	len)
{
	char	*str;
	int	i;
	int	len_s;

	str = 0;
	if (s)
	{
		len_s = ft_strlen(s);
		if (start >= (unsigned int)len_s)
			return (ft_strdup(""));
		str = malloc((len + 1) * sizeof(char));
		if (!str)
			return (NULL);
		i = 0;
		while (s[start] != '\0' && i < len)
		{
			str[i] = s[start];
			i++;
			start++;
		}
		str[i] = '\0';
	}
	return (str);
}
