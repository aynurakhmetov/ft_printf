int	ft_prpr(int pr, int k, const char *fmt, int i)
{
	if (k > 1)
		pr = pr * 10;
	pr = pr + (fmt[i] - '0');
	return (pr);
}

int	ft_precision(const char *fmt, int i, char type)
{
	int pr;
	int k;

	pr = 0;
	k = 0;
	i++;
	while (fmt[i] != type)
	{
		if (fmt[i] == '.')
		{
			while (fmt[i] != type)
			{
				if ((fmt[i] > '0') && (fmt[i] <= '9'))
				{
					k++;
					pr = ft_prpr(pr, k, fmt, i);
				}
				i++;
			}
			break ;
		}
		i++;
	}
	return (pr);
}
