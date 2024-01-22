// itog2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int readNumber(std::string text)
{
    int a;
    std::cout << text;
    std::cin >> a;

    return a;
}

char readLiteral(std::string text)
{
    char a;
    std::cout << text;
    std::cin >> a;
    return a;
}

double math(double a, char b, double c)
{
    switch (b)
    {
    case '+':
        return  a + c;
    case '-':
        return a - c;
    case '*':
        return a * c;
    case '/':
        return a / c;
    default:
        return  0.0;
    }
}

void writeAnswer(double a, char b, double c)
{
    std::cout << "Результат: " << math(a, b, c) << std::endl;
    return;
}

int main()
{
    setlocale(LC_ALL, "RU");
    double a = readNumber("Ввод 1 числа: ");
    char b = readLiteral("Ввод символа по типу +, -, *, / : ");
    double c = readNumber("Ввод 2 числа: ");
    char e = readLiteral("Ввод символа по типу +, -, *, / : ");
    double d = readNumber("Ввод 2 числа: ");
    if (b == '*' || b == '/' || e == '+' || e == '-') {
        double g = math(a, b, c);
        writeAnswer(g, e, d);
    }
    else {
        double g = math(c, e, d);
        writeAnswer(a, b, g);
    }

    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
