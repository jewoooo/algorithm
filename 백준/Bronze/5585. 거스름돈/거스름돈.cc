/*
N -> 큰거부터 나누고 카운트 ++ 500, 100 * 4, 10 * 4, 5 * 1, 1 * 4, 50 * 1
N -> N %= 해당
*/
#include <iostream>

int    main(void)
{
    int    coin_types[] = {500, 100, 50, 10, 5, 1};
    int    N;
    int    count = 0;
    
    std::cin >> N;
    N = 1000 - N;
    for (int i = 0; i < 6; i++)
    {
        int    coin = coin_types[i];
        count += (N / coin);
        N %= coin;
        
    }
    std::cout << count << '\n';
    return (0);
}