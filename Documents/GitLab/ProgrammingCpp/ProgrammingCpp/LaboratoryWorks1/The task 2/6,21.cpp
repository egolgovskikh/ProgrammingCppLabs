//Тема: Календарь.
//Написать программу, которая запрашивает у пользователя номер дня недели и выводит одно из сообщений: "Рабочий день", "Суббота" или "Воскресенье". Программа должна проверять правильность исходных данных.

#include <stdio.h> // Подключение нужных библиотек
#include <iostream>
using namespace std; // Нужно, чтобы не вводить каждый раз std

int main()
{
    setlocale(LC_ALL, "Russian"); // Добавляем русский язык
    
    int day;
    
    cout << "Введите номер дня недели "<<endl;
    cin >> day;
    
    if (day==1) cout << "Рабочий день" << endl;
    else {if (day==2) cout << "Рабочий день" << endl;
        else {if (day==3) cout << "Рабочий день" << endl;
            else {if (day==4) cout << "Рабочий день" << endl;
                else {if (day==5) cout << "Рабочий день" << endl;
                    else {if (day==6) cout << "Суббота" << endl;
                        else {if (day==7) cout << "Воскресенье" << endl;
                            else cout << "Неправильный номер дня недели"<<endl;
                        }}}}}}
    return 0;
}


