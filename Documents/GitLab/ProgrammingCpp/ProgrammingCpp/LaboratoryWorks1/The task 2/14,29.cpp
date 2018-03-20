//Вводить с клавиатуры различные символы, если введены ; : , . & !  выводить надписи «точка с запятой», «двоеточие» и т.д. во всех остальных случаях – «не знак препинания»

#include <stdio.h> // Подключение нужных библиотек
#include <iostream>
using namespace std; // Нужно, чтобы не вводить каждый раз std

int main()
{
    setlocale(LC_ALL, "Russian"); // Добавляем русский язык
    char symbol; // Объявление переменных
    
    cout << "Введите символ"<<endl;
    cin >> symbol;
    int number = int(symbol);
    switch (number) {
        case 59: cout << "Точка с запятой" << endl; break;
        case 58: cout << "Двоеточие"<< endl;; break;
        case 44: cout << "Запятая"<< endl;; break;
        case 46: cout << "Точка"<< endl;; break;
        case 38: cout << "Амперсанд"<< endl;; break;
        case 33: cout << "Восклицательный знак"<< endl;; break;
        default: cout << "Не знак препинания"<<endl;
            break;
    }
    
    return 0;
}

