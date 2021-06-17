template<typename T>
void	iter(T*	array, int	size, void (*fct)(const T&))
{
	for (int i = 0; i < size; i++)
		(*fct)(array[i]);
}