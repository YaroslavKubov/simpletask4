
#include <iostream>

int main()
{
    int a, b, c;

    std::cout << "enter A:";
    std::cin >> a;

    std::cout << "enter B:";
    std::cin >> b;

    std::cout << "enter C:";
    std::cin >> c;


    int S = 2 * (a * b + b * c + a * c);

    int V = a * b * c;

    std::cout << "S = " << S << std::endl;
    std::cout << "V = " << V;


    return 0;
}