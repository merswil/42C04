
int	char_to_num_and_sum(char *dest)
{
	int	i;
	int	a;

	i = 0;
	a = 0;
	while (dest[i] != '\0')
	{
		a = (a * 10) + (dest[i] - '0');
		i++;
	}
	return (a);
}

int	is_space(char *str)
{
	int	i;

	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	return (i);
}

int	ft_atoi(char *str)
{
	int		i;
	int		x;
	int		j;
	char	dest[50];

	j = 0;
	x = 0;
	i = 0;
	while (i < 50)
		dest[i++] = 0;
	i = is_space(str);
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			x++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
		dest[j++] = str[i++];
	dest[j] = '\0';
	if ((x % 2) == 0)
		return (char_to_num_and_sum(dest));
	return (-char_to_num_and_sum(dest));
}
