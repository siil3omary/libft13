#include <libft.h>

char *ft_strtrim(char const *s1, char const *set){
	size_t start;
	size_t end;
	char *str;
	
	start = 0;
	end = ft_strlen(s1);

	while (ft_strchr(set, s1[start]) && start <= end)
		start++;
	while (ft_strchr(set, s1[end]) && end >= 0)
		end--;
	
}