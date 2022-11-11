void	ft_putchar(char c);

void	FirstLine(int wid)
{
	int	count_wid;

	ft_putchar(111);
	count_wid = 1;
	while (count_wid < wid -1)
	{
		ft_putchar(45);
		count_wid++;
	}
	if (wid > 1)
	{
		ft_putchar(111);
	}
	ft_putchar(10);
}

void	MiddleLine (int wid)
{
	int	count_wid;

	ft_putchar(124);
	count_wid = 1;
	while (count_wid < wid -1)
	{
		ft_putchar(32);
		count_wid++;
	}
	if (wid > 1)
	{
		ft_putchar(124);
	}
	ft_putchar(10);
}

void	LastLine(int wid)
{
	int	count_wid;

	ft_putchar(111);
	count_wid = 1;
	while (count_wid < wid -1)
	{
		ft_putchar(45);
		count_wid++;
	}
	if (wid > 1)
	{
		ft_putchar(111);
	}
	ft_putchar(10);
}

void	rush (int wid, int lon)

{
	int	count_lon;

	if (wid < 1 || lon < 1)
	{
		return ;
	}
	FirstLine(wid);
	count_lon = 2;
	while (count_lon < lon && lon > 2)
	{
		MiddleLine(wid);
		count_lon++;
	}	
	if( lon > 1)
	{
		LastLine(wid);
	}
}
