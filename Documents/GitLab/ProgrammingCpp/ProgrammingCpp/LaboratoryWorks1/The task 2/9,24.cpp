//Реализовать «калькулятор». При вводе с клавиатуры символа:
// + вывести сообщение "сложение",
// - вывести сообщение  "вычитание",
// * вывести сообщение "умножение",
// / вывести сообщение "деление"
//с указанием формулы и примера с конкретными значениями, введенными с клавиатуры. Программа должна проверять правильность исходных данных при выполнении команды "деление".

#include <stdio.h> // Подключение нужных библиотек
#include <iostream>
using namespace std; // Нужно, чтобы не вводить каждый раз std

int main()
{
    setlocale(LC_ALL, "Russian"); // Добавляем русский язык
    char symbol; // Объявление переменных
    double division, number1, number2;
    cout << "Введите операцию "<<endl; // Подсказка
    cin >> symbol; // Ввод
    cout << "Введите первое число "<<endl;
    cin >> number1;
    cout << "Введите второе число "<<endl;
    cin >> number2;
    int operation = int(symbol); // Преобразуем символ в число
    if (operation == 43)  // Условие
        cout << "Сложение:" << endl << number1 <<" "<< symbol<<" "<< number2 <<" = "<<number1+number2<<endl;
         else {if (operation == 45)
            cout << "Вычитание:" << endl << number1 <<" "<< symbol<<" "<< number2 <<" = "<<number1-number2<<endl;
             else {if (operation == 42)
                cout << "Умножение:" << endl << number1 <<" "<< symbol<<" "<< number2 <<" = "<<number1*number2<<endl;
                else {if (operation == 47) {
                    if (number2 != 0) {
                        division = number1/number2;
                        cout << "Деление:" << endl << number1 <<" "<< symbol<<" "<< number2 <<" = "<<division<<endl;
                    }
                    else cout << "Деление на 0 невозможно" <<endl; }
                    else cout << "Такой операции нет"<< endl;
                }}}
    
    return 0;
}


