//Определить и вывести на экран название дня недели по введенному номеру, если число >7, писать «число >7»

#include <stdio.h> // Подключение нужных библиотек
#include <iostream>
using namespace std; // Нужно, чтобы не вводить каждый раз std

int main()
{
    setlocale(LC_ALL, "Russian"); // Добавляем русский язык
    int number; // Объявление переменных
    
    cout << "Введите номер дня недели"<<endl;
    cin >> number;
    
    switch (number) {
        case 1: cout << "Понедельник" << endl; break;
        case 2: cout << "Вторник"<< endl;; break;
        case 3: cout << "Среда"<< endl;; break;
        case 4: cout << "Четверг"<< endl;; break;
        case 5: cout << "Пятница"<< endl;; break;
        case 6: cout << "Суббота"<< endl;; break;
        case 7: cout << "Воскресенье"<< endl;; break;
        default: cout << "Число >7"<<endl;
            break;
    }
    
    return 0;
}
