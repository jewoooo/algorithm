#include <iostream>

int    time_types[3] = {300, 60, 10};
int    T;
int    res[3] = {0, };

int    main(void)
{
    std::cin >> T;
    
    for (int i = 0; i < 3; i++)
    {
        int    time = time_types[i];
        res[i] = T / time;
        T %= time;
    }
    if (T != 0)
        std::cout << "-1\n";
    else
    {
        for (int i = 0; i < 3; i++)
        {
            std::cout << res[i] << ' ';
        }
    }
    
    return (0);
}