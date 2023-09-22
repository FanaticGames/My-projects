// Lab2_strings.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include<iostream>
#include <string>
using namespace std;
	int main()
	{
		/*
		* Вывод строки
		*/
		std::string str = "qwereerrqwty";
		std::cout << " " << str << "\n";
		for (unsigned i = 0; i < str.size(); i++) {
			std::cout << " " << str[i] << "\n";
			
		}
		/*
		Счет заданного символа в строке
		*/
		int count = 0;
		char symbol;
		cin >> symbol;
		for (auto item : str) {
			if (item == symbol) {
				count++;
			}
		}
		cout << "This symbol counts: " << count << "times" << "\n";
		/*
		Счет заданного символа по строке, вводимого пользователем
		*/
		string pol;
		int counter_= 0;
		char res;
		cout << ">>>Enter string: " << "\n";
		cin >> pol;
		cin >> res;
		for (auto item : pol) {
			if (item == res) {
				counter_++;
			}
		}
		std::cout << "This symbol repeats:  " << counter_ << "  times" << "\n";
		
		
		return 0;
	}





