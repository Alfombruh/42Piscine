void	ft_putchar(char c);

void	FirstLine(int lon)
{
	int	count_lon;

	ft_putchar(65);
	count_lon = 1;
	while (count_lon < lon -1)
	{
		ft_putchar(66);
		count_lon++;
	}
	if (lon > 1)
	{
		ft_putchar(65);
	}
	ft_putchar(10);
}

void	MiddleLine (int lon)
{
	int	count_lon;

	ft_putchar(66);
	count_lon = 1;
	while (count_lon < lon -1)
	{
		ft_putchar(32);
		count_lon++;
	}
	if (lon > 1)
	{
		ft_putchar(66);
	}
	ft_putchar(10);
}

void	LastLine(int lon)
{
	int	count_lon;

	ft_putchar(67);
	count_lon = 1;
	while (count_lon < lon -1)
	{
		ft_putchar(66);
		count_lon++;
	}
	if (lon > 1)
	{
		ft_putchar(67);
	}
	ft_putchar(10);
}

void	rush (int wid, int lon)

{
	int	count_wid;

	if (wid < 1 && lon < 1)
	{
		return ;
	}
	FirstLine(lon);
	count_wid = 2;
	while (count_wid < lon && lon > 1)
	{
		MiddleLine(lon);
		count_wid++;
	}
	if (lon > 1)
	{
		LastLine(lon);
	}
	 return ;
}
