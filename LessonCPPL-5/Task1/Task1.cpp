// Task1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include<iostream>

template<typename E>
E square(E x)
{
	return x * x;
}

template<typename T>
void print(T x, T(*fun)(T))
{
	std::cout << fun(x) << std::endl;
}

int main()
{
	int x{ 5 };
	print(x, square<int>);
	return 0;
}