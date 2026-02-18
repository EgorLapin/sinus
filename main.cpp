#include <iostream>
#include <cmath>
#include <memory>

const int SIZE = 10'000'000;

template <typename T>
constexpr T PI_T = static_cast<T>(3.14159265358979323846);

#ifndef USE_DOUBLE
using value_t = float;
#else
using value_t = double;
#endif

template <typename T>
T fill_and_sum(int size)
{
    auto arr = std::make_unique<T[]>(size);

    T sum = 0;
    for (int i = 0; i < size; i++)
    {
        T arg = static_cast<T>(2) * PI_T<T> * static_cast<T>(i) / static_cast<T>(size);
        arr[i] = std::sin(arg);
        sum += arr[i];
    }
    return sum;
}

int main()
{
#ifdef USE_DOUBLE
    std::cout << "Array type: double\n";
#else
    std::cout << "Array type: float\n";
#endif

    value_t sum = fill_and_sum<value_t>(SIZE);

    std::cout << "Sum: " << sum << '\n';

    return 0;
}
