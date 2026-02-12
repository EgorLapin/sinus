#include <iostream>
#include <cmath>
#include <memory>

const int SIZE = 10000000;
template <typename T>
constexpr T PI_T = static_cast<T>(3.1415926536);

template <typename T>
T fill_and_sum(int size)
{
    auto arr = std::make_unique<T[]>(size);

    T sum = 0;
    for (int i = 0; i < size; i++)
    {
        T arg = static_cast<T>(2 * PI_T<T> * i / size);
        arr[i] = std::sin(arg);
        sum += arr[i];
    }
    return sum;
}

int main()
{
    char df;
    std::cout << "Choose type: f (float) or d (double)\n";
    std::cin >> df;

    while (df != 'f' && df != 'd')
    {
        std::cout << "Enter f or d\n";
        std::cin >> df;
    }

    if (df == 'f')
    {
        float sum = fill_and_sum<float>(SIZE);
        std::cout << "Array type: float\n";
        std::cout << "Sum: " << sum << '\n';
    }
    else
    {
        double sum = fill_and_sum<double>(SIZE);
        std::cout << "Array type: double\n";
        std::cout << "Sum: " << sum << '\n';
    }

    return 0;
}
