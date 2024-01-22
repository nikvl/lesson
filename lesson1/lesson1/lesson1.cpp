// lesson1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
#include <Windows.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

void square(float c, float x, float a, float b, float s)
{
    c = a * sin(b);
    x = a * cos(b);
    s = c * x;
    printf("\n Результаты: a =%7.2f b =%7.2f s =%7.2f", c, x, s);
    return;
}

double test1(double a, double b)
{
    // x=4y^2/(4z-2t^3) где t === a, z === b
    double y = sin(a);
    return pow(4 * y, 2) / (4 * b - pow(2 * a, 3));
    // Результат: x =  -0,00
}

double test2(double a, double b)
{
    // x = 4y^3-z/t где t === a, z === b
    double y = cos(a - b);
    return pow(4 * y, 3) - b / a;
    // Результат: x =53687091,33
}

double test3(double a, double b)
{
    // x = 6t^2-(z+1)/y^2 где y === a, z === b
    double t = sin(2 + b);
    return pow(6 * t, 2) - (b+1) / pow(a, 2);
    // Результат: x =26843547,53
}

double test4(double a, double b)
{
    // x = (8z^2+1)/(y+t^2) где t === a, z === b
    double y = a + b;   
    return (pow(8 * b, 2)+1) / (y + pow(a, 2));
    // Результат: x =-6871947392,00
}

double test5(double a, double b)
{
    // x = 8z/(e^t+2)-y^2 где t === a, y === b
    double z = 1 / tan(a + 2);
    return 8 * z / (exp(a) + 2) - pow(b, 2);
    // Результат: x =-11529213671678976,00
}

double test6(double a, double b)
{
    // x = 8z/(e^t+2)-y^2 где t === a, y === b
    double z = a + 2;
    return 8 * z / (exp(a) + 2) - pow(b, 2);
    // Результат: x =-11529213671678970,00
}

double test7(double a, double b)
{
    // x = 2y+3 sh t-z где y === a, z === b
    double t = 5 / (1+pow(a, 2));
    return 2*a+3*sinh(t) - b;
    // Результат: x =107374183,53
}

double test8(double a, double b)
{
    // x = 3y^2 / (4 tg z-2t^2) где t === a, z === b
    double y = a + 2 * (1/tan(b));
    return pow(3 * y, 2) / (4 * tan(b-pow(2 * a,2)));
    // Результат: x = -67,86
}

double test9(double a, double b)
{
    // x = 4y^2 / (4y e^z-2t^3) где t === a, z === b
    double y = sin(a);
    return pow(4 * y, 2) / (4 * y * exp(b) - pow(2 * a, 3));
    //  Результат: x =  -1,42
}

double test10(double a, double b)
{
    // x = 4 ln y^3 - z / t где t === a, z === b
    double y = cos(a + b);
    return 4 * pow(log(y), 3) - b / a;
    //  Результат: x =-nan(ind)
}

double test11(double a, double b)
{
    // x = 6t^2-(ctg z + 1)/y^2 где y === a, z === b
    double t = sin(2+b);
    return 6*pow(t, 2)-(1/tan(b+1))/pow(a, 2);
    //  Результат: x =   0,69
}

double test12(double a, double b)
{
    // x = (8z^2+1)/(y e^t+t^2) где z === a, t === b
    double y = 1/tan(b + a);
    return (8*pow(a, 2)+1)/(y*exp(b)+pow(b, 2));
    //  Результат: x =   0,00
}

int main()
{
    setlocale(LC_ALL, "RU");
    float a, b;
    printf("\n Введите два параметра ");
    scanf_s("%f, %f", &a, &b);
    double x = test10(a, b);
    printf("\n Результат: x =%7.2f", x);
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
