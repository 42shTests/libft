#include "libft.h"

static int		s_is_str(const char c, const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		if (c == str[i])
			return (1);
		i++;
	}
	return (0);
}

static int		s_get_next_entry(char *s, const char *str, size_t *begin,
					size_t *size)
{
	*begin = 0;
	*size = 0;
	while (*s && s_is_str(*s, str))
	{
		s++;
		(*begin)++;
	}
	while (*s && !s_is_str(*s, str))
	{
		s++;
		(*size)++;
	}
	return (*size ? 1 : 0);
}

static size_t	s_compute_entry_count(char *s, const char *str)
{
	size_t	entry_count;
	size_t	s_offset;
	size_t	entry_offset;
	size_t	entry_size;

	entry_count = 0;
	s_offset = 0;
	while (s_get_next_entry(s + s_offset, str, &entry_offset, &entry_size))
	{
		s_offset += entry_offset + entry_size;
		entry_count++;
	}
	return (entry_count);
}

static int		s_fill_array(char *s, const char *str, char **array)
{
	size_t	s_offset;
	size_t	array_index;
	char	*entry;
	size_t	entry_offset;
	size_t	entry_size;

	array_index = 0;
	s_offset = 0;
	while (s_get_next_entry(s + s_offset, str, &entry_offset, &entry_size))
	{
		entry = (char *)malloc(entry_size + 1);
		if (!entry)
			return (0);
		s_offset += entry_offset;
		ft_memcpy(entry, s + s_offset, entry_size);
		entry[entry_size] = '\0';
		s_offset += entry_size;
		array[array_index] = entry;
		array_index++;
	}
	return (1);
}

char			**ft_strsplit_str(char const *s, const char *str)
{
	size_t	entry_count;
	char	**array;

	if (s == NULL)
		return (NULL);
	if (!str)
		str = " \t\n";
	entry_count = s_compute_entry_count((char *)s, str);
	array = (char **)malloc(sizeof(char *) * (entry_count + 1));
	if (!array)
		return (NULL);
	array[entry_count] = 0;
	if (!s_fill_array((char *)s, str, array))
		return (NULL);
	return (array);
}
