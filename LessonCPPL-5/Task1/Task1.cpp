// Task1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>
#include<string>

template <class T>
T square (T num)
{
	return num * num;
};

template <>
std::string square (std::string num)
{
	return num;
};

template <class T>
//void square (T* v)
std::vector<T>& square(std::vector<T>& v)
{
	for (size_t i = 0; i < v->size(); i++)
	{
		v->at(i) *= v->at(i);
	};
};

void printVector(std::vector<int>* v)
{
	for (size_t i = 0; i < v->size(); i++)
	{
		std::cout << v->at(i) << "\t";
	};
};

int main() {
	setlocale(LC_ALL, "ru");
	int x = 5;
	int y = square(x);
	std::cout << "Square x = " << y << std::endl;

	std::vector <int> v{ 2, 3, 5, 6, 8 };
	printVector(&v);

	std::vector<int>s =	square (v);
	std::cout << std::endl;
	printVector(&v);
};