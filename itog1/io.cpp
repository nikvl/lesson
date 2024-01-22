#include <iostream>

int readNumber(std::string text)
{
    int a;
    std::cout << text;
    std::cin >> a;

    return a;
}

void writeAnswer(int a)
{
    std::cout << "Результат: " << a << std::endl;
    return;
}