#include "libft.h"

static int		is_ifs(const char c, const char *ifs)
{
	size_t	i;

	i = 0;
	while (ifs[i])
	{
		if (c == ifs[i])
			return (1);
		i++;
	}
	return (0);
}

static int		get_next_entry(char *s, const char *ifs, size_t *begin, size_t *size)
{
	*begin = 0;
	*size = 0;
	while (*s && is_ifs(*s, ifs))
	{
		s++;
		(*begin)++;
	}
	while (*s && !is_ifs(*s, ifs))
	{
		s++;
		(*size)++;
	}
	return (*size ? 1 : 0);
}

static size_t	compute_entry_count(char *s, const char *ifs)
{
	size_t	entry_count;
	size_t	s_offset;
	size_t	entry_offset;
	size_t	entry_size;

	entry_count = 0;
	s_offset = 0;
	while (get_next_entry(s + s_offset, ifs, &entry_offset, &entry_size))
	{
		s_offset += entry_offset + entry_size;
		entry_count++;
	}
	return (entry_count);
}

static int		fill_array(char *s, const char *ifs, char **array)
{
	size_t	s_offset;
	size_t	array_index;
	char	*entry;
	size_t	entry_offset;
	size_t	entry_size;

	array_index = 0;
	s_offset = 0;
	while (get_next_entry(s + s_offset, ifs, &entry_offset, &entry_size))
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

char			**strsplit_ifs(char const *s, const char *ifs)
{
	size_t	entry_count;
	char	**array;

	if (s == NULL)
		return (NULL);
	if (!ifs)
		ifs = " \t\n";
	entry_count = compute_entry_count((char *)s, ifs);
	array = malloc(sizeof(char *) * (entry_count + 1));
	if (!array)
		return (NULL);
	array[entry_count] = 0;
	if (!fill_array((char *)s, ifs, array))
		return (NULL);
	return (array);
}

