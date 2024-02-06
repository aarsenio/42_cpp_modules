void	mini_exit(t_data *data, int i)
{
	int args;
	int i;

	args = ft_str_count(data->argve[id]);
	i = 1;
	while (i < args)
	{
		if (!isdigitstr(data->argve[id][i]))
			exit_minishell(data,255);
		i++
	}
	if (args > 2)
		print(too many arguments);
	else
	{
		if (data->number_of_pipes < 1)
			print (exit);
		if (args == 1)
			exit(data, 0)
		else if(args == 2)
			tal tal tal
	}
}