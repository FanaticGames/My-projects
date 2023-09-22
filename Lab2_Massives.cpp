// Lab2_Massives.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include<iostream>
#include<string>
#include<vector>
using namespace std;

void Enter(vector<int>&arrays) {
	int a_;
	int b_ = 0;
	int c_ = 0;
	cout << "Введите размер вектора: " << "\n";
	cin >> a_;
	do {
		cout << "Вводите числа для вектора: " << "\n";
		cin >> c_;
		arrays.push_back(c_);
		b_++;
	} while (b_ != a_);
	
	if (b_ == a_) {
		for (int i = 0; i < arrays.size(); i++) {
			cout << "  " << arrays[i];
		}
	}
		
	

}
void revert(vector<int>& arrays, vector<int>& arr_) {
	int parr = 0;
	cout << "\n";
	cout << "Обратный вектор: " << endl;
	for (int i = arrays.size()-1; i >= 0; i--) {
		arr_.push_back(arrays[i]);
	}
	for (int j = 0; j < arr_.size(); j++) {
		cout << "  " << arr_[j];
	}
}
void E_elem(vector<int>& elem_) {
	int a_;
	int b_ = 0;
	int c_ = 0;
	cout << "\n";
	cout << "Введите размер вектора: " << "\n";
	cin >> a_;
	do {
		cout << "Вводите числа для вектора: " << "\n";
		cin >> c_;
		elem_.push_back(c_);
		b_++;
	} while (b_ != a_);

	if (b_ == a_) {
		for (int i = 0; i < elem_.size(); i++) {
			cout << "  " << elem_[i];
			cout << "\n";
		}
	}

}
void f_elem(vector<int>& elem_) {
	int e_memory=0;
	int var1 = 2;
	int var2 = 4;
	int var3 = 6;
	for (int i = 0; i < elem_.size(); i++) {
		if (elem_[i] >= var1 || elem_[i] >= var2 || elem_[i] >= var3) {
			elem_[i] = e_memory;

		}
		cout << "\n";
		cout << "Самый частый элемент: " << e_memory << "\n";
	break;}
}

int main()
{
	setlocale(LC_ALL, "Rus");
   // Найти разницу между максимальным и минимальным элементом в векторе
	vector<int> arr = {1,2,44,55,121,5};
	int max_value = arr[0];
	int min_value = arr[0];
	int result;
	for (int item = 0; item<arr.size();item++) {
		if (arr[item]>max_value) {
			max_value = arr[item];
		}
		if (arr[item] < min_value ) {
			min_value = arr[item];
		}
		
	}
	result = max_value - min_value;	
	cout << "Result: " << result << "\n";  
    
   //Расположить элементы вектора в обратном порядке
	vector<int> arrays;
	vector<int> arr_;
	Enter(arrays);
	revert(arrays, arr_);

/*
Вывести в консоль наиболее часто встречающийся элемент вектора
*/
	vector<int> elem_;
	E_elem(elem_);
	f_elem(elem_);
	return 0;
}

