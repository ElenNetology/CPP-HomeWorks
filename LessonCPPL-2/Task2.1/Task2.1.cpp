// Task2.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

struct Point {
	Point(double x, double y) : m_x(x), m_y(y) {}
	double m_x;
	double m_y;

};

void print_point(const Point& point) {
	std::cout << "x:" << point.m_x << ", y: "
		<< point.m_y << std::endl;
}

int main()
{
	int i;
	
	for (i = 0; i < 5; i++)
	{
		Point my_point(i, 2 * i);
		print_point(my_point);
	}
	return 0;
}

// void print_point (const point& point_object) {
// 	std::cout << "x:" << point_object.m_x << ", y: "
// 		<< point_object.m_y << std::endl;
