//По введенному числу (от 3 до 8) определить название фигуры: треугольник, квадрат,
//пятиугольник и т.д., если число < 3 или >8 писать «неизвестная фигура»


#include <stdio.h> // Подключение нужных библиотек
#include <iostream>
using namespace std; // Нужно, чтобы не вводить каждый раз std

int main()
{
    setlocale(LC_ALL, "Russian"); // Добавляем русский язык
    int figure; // Объявление переменной
    
    cout << "Введите число "<<endl; // Подсказка
    cin >> figure; // Ввод числа
    if (figure < 9 && figure >= 3){ // Проверка на правильность введенного числа
        if (figure==3) cout << "Треугольник"<<endl; // Проверка на условия
        else {if (figure==4) cout << "Квадрат"<<endl;
            else {if (figure==5) cout << "Пятиугольник"<<endl;
                else {if (figure==6) cout << "Шестиугольник"<<endl;
                    else {if (figure==7) cout << "Семиугольник"<<endl;
                        else {if (figure==8) cout << "Восьмиугольник"<<endl;
                        }}}}}}
    else cout << "Неизвестная фигура"<<endl;
    return 0;
}


