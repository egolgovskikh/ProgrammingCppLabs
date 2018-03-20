//Определить название числа от 0 до 10, например, при вводе числа 5
//писать «пять», если число >10, писать «число должно быть меньше 10»

#include <stdio.h> // Подключение нужных библиотек
#include <iostream>
using namespace std; // Нужно, чтобы не вводить каждый раз std

int main()
{
    setlocale(LC_ALL, "Russian"); // Добавляем русский язык
    
    int number; // Объявление переменной
    
    cout << "Введите число "<<endl; // Подсказка
    cin >> number; // Ввод числа
    if (number < 11 && number >= 0){ // Проверка на правильность введенного числа
        if (number==0) cout << "Ноль"<<endl; // Проверка на условия
        else {if (number==1) cout << "Один"<<endl;
            else {if (number==2) cout << "Два"<<endl;
                else {if (number==3) cout << "Три"<<endl;
                    else {if (number==4) cout << "Четыре"<<endl;
                        else {if (number==5) cout << "Пять"<<endl;
                            else {if (number==6) cout << "Шесть"<<endl;
                                else {if (number==7) cout << "Семь"<<endl;
                                    else {if (number==8) cout << "Восемь"<<endl;
                                        else {if (number==9) cout << "Девять"<<endl;
                                            else {if (number==10) cout << "Десять"<<endl;
                                            }}}}}}}}}}}
    else cout << "Неправильное число"<<endl;
    return 0;
}


