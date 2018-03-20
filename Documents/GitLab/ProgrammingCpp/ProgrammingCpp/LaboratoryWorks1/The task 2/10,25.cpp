//Ввести с клавиатуры номер месяца и вывести сообщение о номере квартала. Программа должна проверять правильность исходных данных. Выйти из программы при вводе 999.

#include <stdio.h> // Подключение нужных библиотек
#include <iostream>
using namespace std; // Нужно, чтобы не вводить каждый раз std

int main()
{
    setlocale(LC_ALL, "Russian"); // Добавляем русский язык
    int number; // Объявление переменных
    
    cout << "Введите номер месяца"<<endl; // Проверка всех условий
    cin >> number;
    if (number > 0 && number <= 12) {
    if (number>=1 && number<=3) cout << "Первый"<<endl;
    else {if (number>=4 && number<=6) cout << "Второй"<<endl;
        else {if (number>=7 && number<=9) cout << "Третий"<<endl;
            else cout << "Четвертый"<<endl;
            }}
        cout << "Ведите 999 чтобы выйти"<<endl;
        cin >> number;
        while (number != 999) {
            cout << "Введите 999 чтобы выйти"<<endl;
            cin >> number;
        }
    } else {if (number != 999)
        cout << "Неправильное число, Ведите 999 чтобы выйти"<<endl;
        cin >> number;
        while (number != 999) {
            cout << "Введите 999 чтобы выйти"<<endl;
            cin >> number;
        }
    }
    return 0;
}
