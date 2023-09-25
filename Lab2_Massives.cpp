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
void E_elem(vector<int>&elem_) {
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
int  f_elem(vector<int>& elem_) {
	/*
	Делаем счетчики по 0;
	с помощью циклов пробегаемся по вектору elem_, если символы вектора повторяются,
	то счет обновляем count++
	Если счет count>максимального, до максимальный обнволяем, а частый элемент - элемент вектора в данный момент
	*/
	int maxCount = 0;
	int mostFreqElem = elem_[0];
	for (int i = 0; i < elem_.size(); i++) {
		int count = 0;
		for (int j = 0; j < elem_.size(); j++) {
			if (elem_[j] = elem_[i]) {
				count++;
			}
		}
		if (count > maxCount) {
			maxCount = count;
			mostFreqElem = elem_[i];

		}
	}
	return mostFreqElem;
	
}
void bubbleSort(vector<int>&coll) {
	int s = coll.size();

	for (int i = 0; i < s - 1; i++) {

		for (int j = 0; j < s - i - 1; j++) {
			// сравниваем соседние элементы вектора
			if (coll[j] > coll[j + 1]) {

				swap(coll[j], coll[j + 1]);
			}
		}

	}
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
	int result_ = f_elem(elem_);
	cout << "\n";
	cout << "Самый частый элемент вектора:  " << result_ << endl;

	/*
	отсортировать заданный вектор по возрастанию
	- Данную задачу будем решать с помощью готового вектора. 
	- Сортировать будем с помощью пузырька.
	*/

	vector<int> coll = { 1,3,5,454,1212,234,45,3,2 };
	cout << "заданный вектор: " << "\n";
	for (int item : coll){
		cout << " " << item;
	   
	}
	
	cout << "\n";
	cout << "Отсортированный вектор" << "\n";
	
	bubbleSort(coll);
	for (int num : coll) {
		cout << "   " << num;
	}

    /*
	
	*/
}

