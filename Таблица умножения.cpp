#include<iomanip> //библиотека ввода-вывода, контроль внешнего вида вывода данных на экран, в файл.
#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "");
    int multiplication[9][9];

    for (int i = 0; i < 9; i++) //первая переменная
    {
        for (int k = 0; k < 9; k++) // вторая переменная
        {
            multiplication[i][k] = (i+1) * (k+1); // "+1" - для того, чтобы счёт в таблице был с 1, а не с 0
        }
    }

    for (int i = 0; i < 9; i++)
    {
        for (int k = 0; k < 9; k++)
        {
            cout << setw(2) << multiplication[i][k] << " "; // показывает итог, setw(4) - установление ширины между значениями
        }
        cout << endl;
    }

    return 0;


}