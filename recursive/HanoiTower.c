void	hanoi(int n, char from, char middle, char to)
{
	if (n == 1)
	{
		printf("%d 원판 %c -> %c", n, from, to);
		return ;
	}
	else
	{
		hanoi(n - 1, from, to, middle);
		printf("%d 원판 %c -> %c", n, from, to);
		hanoi(n - 1, to, from, middle);
	}
}
