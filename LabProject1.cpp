// MineLabProject.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
/*
Примечание.
Многие решения ниже будут закомментированы, дабы избежать искожение названий различных параметров.
при проверке решений, раскомментируйте фрагмент, чтобы протестить его. Затем закомментируйте снова,
чтобы продолжить проверку следующих.
*/

int main()
{
    setlocale(LC_ALL, "Rus");
    /*
    Задача #1 Вывести последнюю цифру.
    Решение:

    int number;
    std::cout << "Enter a number: " << "\n";
    std::cin >> number;
    int result;
    result = number % 10;
    std::cout << result << "\n";
    */
    /*Задача #2: Нахождение десятков в числе
    * Решение
   
    int number;
    std::cout << "Enter a num: " << "\n";
    std::cin >> number;
    if (number >= 100) {
        std::cout << "err" << "\n";
    }
    else
    {
        int result;
        result = (number / 10) % 10;
        std::cout << "Result: " << result << "\n";
    }
    */
    /*Задача #3 
    * Решение
    * 
    int number;
    std::cout << "Enter a int: " << "\n";
    std::cin >> number;

    if (number < 10) {
    int result1 = 0;
    std::cout << "This int no more than 10: " << result1 << "\n";
    }
    else {
        int result2, integer;
        result2 = (number / 10) % 10;
        std::cout << "Ther is result: " <<result2<< "\n";
    }
    */
    /*Задание #4. Сумма всех цифр разряда.
     * Решение
     * 
    int number;
    int result;
    std::cout << "Press a number button. Integer >1000" << "\n";
    std::cin >> number;
    if (number >= 1000 && number<=9999) {
        result = (number % 10) + ((number / 10) % 10) + ((number / 100) % 10) + (number / 1000);
        std::cout << "Have a result, summ: " << result;
    }
    else {
        std::cout << "Oh no! The integer <1000 or >9999, warning, warning. Err" << "\n";

    }
    */
    /* Задача #5 
    int N;
    int hours;
    int minutes;
    std::cout << "Enter a minutes after  00:00: " << "\n";
    std::cin >> N;
    hours = N % (60 * 24) / 60;
    minutes = N % 60;
   
    std::cout << "Time Now: " << hours << " " << minutes << "\n";
    */
    /* другие задачи
    * 
    
    int i;
    std::cin >> i;
    int result;
    result = (i - 1) * (-1);// меняем число и его знак соответсвенно
    std::cout << "Your interger is now:  " <<result<< "\n";
*/
    /*Таблица умножения
    * Решение
    */
    /*int integerA, integerB, result, yourResult;
    int attempts = 3;
    std::cout << "Проверка таблицы умножения. Введите 2 числа: " << "\n";
    std::cin >> integerA >> integerB;
    std::cout << "Введите результат:  " << "\n";
    std::cin >> yourResult;
    result = integerA * integerB;
    while(result!=yourResult)
    {
        std::cout << "Accept your result:" << "\n";
        std::cin >> yourResult;
        if (yourResult == result) {
            std::cout << "Congrats: " << result;
            break;
        }
        if (attempts == 0) {
            std::cout << "You loose,oof: " << result << "\n";
            break; }
           
            else {
            std::cout << "Oops! try again!" << "\n";
            attempts--;
            std::cout << "Your attempts left: " << attempts << "\n";   
            }
         
           }
    return 0;
    */
// задача с четным числом
/*
int N, result;
std::cin >> N;
result = ((N / 2) + 1)*2;
std::cout << result << "\n";
*/
int Num, deistv;
std::cin >> Num;
deistv = (Num * 100)*Num;
std::cout << "Thing is: " << deistv << "\n";



}
   

    

   




