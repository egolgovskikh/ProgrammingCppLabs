//Ввести число от 2 до 5, вывести оценку в виде слова: 5 - отлично, 4 - хорошо, 3 - удовлетворительно, 2 – неудовлетворительно. Программа должна проверять правильность исходных данных и выводить сообщение об ошибке.

#include <stdio.h> // Подключение нужных библиотек
#include <iostream>
using namespace std; // Нужно, чтобы не вводить каждый раз std

int main()
{
    setlocale(LC_ALL, "Russian"); // Добавляем русский язык
    int rating; // Объявление переменных
    
    cout << "Введите оценку"<<endl;
    cin >> rating;
    
    if (rating>=2 && rating<=5) {
        if (rating == 3) cout << "Удовлетворительно"<< endl;
        else {if (rating == 4) cout << "Хорошо"<< endl;
            else {if (rating == 5) cout << "Отлично"<< endl;
                else {if (rating == 2) cout << "Неудовлетворительно"<< endl;
                }}}
    } else cout << "Ошибка ввода"<<endl;
    return 0;
}
