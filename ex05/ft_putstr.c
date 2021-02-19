void ft_putstr(char *str)
{
	for (long unsigned int i=0;i<=sizeof(str)/2;i++)
	{	
		write(1,&str[i],1);
	}
}
