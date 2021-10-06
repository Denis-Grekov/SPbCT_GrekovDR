// lr9-10.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
using namespace std;

class Time {
public:
    Time();
    void setTime(int, int, int);
    void printmilitary();
    void printstandard();
private:
    int hour;
    int minute;
    int second;
};

Time::Time() { hour = minute = second = 0; }
void Time::setTime(int h, int m, int s)
{
    hour = (h >= 0 && h < 24) ? h : 0;
    minute = (m >= 0 && m < 60) ? m : 0;
    second = (s >= 0 && s < 60) ? s : 0;
}

void Time::printmilitary()
{
    cout << (hour < 1 ? "0" : "") << hour << ":" << (minute < 1 ? "0" : "") << minute <<
        ":" << (second < 1 ? "0" : "") << second;
}

void Time::printstandard()
{
    cout << ((hour == 0 || hour == 12) ? 12 : hour % 12) << ":" << (minute < 1 ? "0"
        : "") << minute << ":" << (second < 1 ? "0" : "") << second << (hour < 12 ? "am" : " pm");
}


int main()
{
    setlocale(LC_ALL, "russian");
    Time t;
    cout << "начальное значение военного времени равно ";
    t.printmilitary();
    cout << endl << "начальное значение стандартного времени равно ";
    t.printstandard();
    t.setTime(13, 27, 6);
    cout << endl << endl << "военное время после settime равно ";
    t.printmilitary();
    cout << endl << "стандартное время после settime равно ";
    t.printstandard();
    t.setTime(99, 99, 99);
    cout << endl << endl << "после попытки неправильной установки: " << endl <<
        "военное время: ";
    t.printmilitary();
    cout << endl << "стандартное время: ";
    t.printstandard();
    cout << endl;
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
