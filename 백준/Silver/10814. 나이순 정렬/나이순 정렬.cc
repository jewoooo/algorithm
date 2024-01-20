#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

int	N;
std::pair<int, std::string>	tmp;
std::vector<std::pair<int, std::string> >	v;

bool	compare(std::pair<int, std::string> a, std::pair<int, std::string> b)
{
	return (a.first < b.first);
}

int	main(void)
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	std::cin >> N;
	for (int i = 0; i < N; i++)
	{
		std::cin >> tmp.first >> tmp.second;
		v.push_back(tmp);
	}
	std::stable_sort(v.begin(), v.end(), compare);

	for (int i = 0; i < N; i++)
	{
		std::cout << v[i].first << ' ' << v[i].second << '\n';
	}
	return (0);
}
