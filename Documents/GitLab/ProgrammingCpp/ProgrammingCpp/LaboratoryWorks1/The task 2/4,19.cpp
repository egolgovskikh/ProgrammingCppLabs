//Тема: Определение времени года
//Написать программу, которая запрашивает у пользователя
//номер месяца и выдает на экран сообщение о времени года и названии введенного месяца. Например: 1 - январь, зима. Программа должна проверять правильность исходных данных.

#include <stdio.h> // Подключение нужных библиотек
#include <iostream>
using namespace std; // Нужно, чтобы не вводить каждый раз std

int main()
{
    setlocale(LC_ALL, "Russian"); // Добавляем русский язык
    
    int month; // Объявление переменных типа integer
    cout << "Введите номер месяца" << endl; // Подсказка
    cin >> month; // Ввод числа
    if (month==1) cout << "Январь, Зима"<<endl; // Проверка всех условий
    else {if (month==2) cout << "Февраль, Зима"<<endl;
        else {if (month==3) cout << "Март, Весна"<<endl;
            else {if (month==4) cout << "Апрель, Весна"<<endl;
                else {if (month==5) cout << "Май, Весна"<<endl;
                    else {if (month==6) cout << "Июнь, Лето"<<endl;
                        else {if (month==7) cout << "Июль, Лето"<<endl;
                            else {if (month==8) cout << "Август, Лето"<<endl;
                                else {if (month==9) cout << "Сентябрь, Осень"<<endl;
                                    else {if (month==10) cout << "Октябрь, Осень"<<endl;
                                        else {if (month==11) cout << "Ноябрь, Осень"<<endl;
                                            else {if (month==12) cout << "Декабрь, Зима"<<endl;
                                                else cout << "Неправильное число"<<endl;
    }}}}}}}}}}}
    
    return 0;
}

