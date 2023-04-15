#pragma once
#include <iostream>
#include <array>
#include <exception>

template<class T>
class CArray
{
private:
	T** arr_;
	int SizeRow_ = 0;
	int SizeCol_ = 0;
	int size_ = 0;

public:
	CArray(int SizeRow, int SizeCol) : SizeRow_{ SizeRow }, SizeCol_(SizeCol)
	{
		arr_ = new T * [SizeRow_] {};
		for (int i = 0; i < SizeRow_; i++)
		{
			arr_[i] = new T[SizeCol_]{};
		}
		std::cout << this << std::endl;
	};

	T& operator()(int i, int j)
	{
		if (i >= SizeRow_ || i < 0) throw std::out_of_range("out_of_range index i(one)");
		if (j >= SizeCol_ || j < 0) throw std::out_of_range("out_of_range index j(one)");

		return arr_[i][j];
	};

	class ArrayRow
	{
	public:
		ArrayRow(T* arrayRow_, const int SizeCol) : arrayRow_(arrayRow_), SizeCol_(SizeCol) { }

		T& operator[](int i)
		{
			if (i >= SizeCol_ || i < 0) throw std::out_of_range("out_of_range index j(two)");
			return arrayRow_[i];
		}
	private:
		T* arrayRow_;
		int SizeCol_ = 0;
	};

	ArrayRow operator[](const int i) const
	{
		if (i >= SizeRow_ || i < 0) throw std::out_of_range("out_of_range index i(one)");

		return ArrayRow(arr_[i], SizeCol_);
	};

	CArray& operator=(CArray& other)
	{
		if (this != &other)
		{
			SizeCol_ = other.SizeCol_;
			SizeRow_ = other.SizeRow_;

			delete[] arr_;

			arr_ = new T * [SizeRow_] {};
			for (int i = 0; i < SizeRow_; i++)
			{
				arr_[i] = new T[SizeCol_]{};
			}
			std::cout << this << std::endl;

			for (size_t i = 0; i < SizeRow_; i++)
			{
				for (size_t j = 0; j < SizeCol_; j++)
				{
					arr_[i][j] = other.arr_[i][j];
				}
			}
			std::cout << this << " - SmartArray::operator=()\n\n";

			return *this;
		};
		return *this;
	};

	void getSize()
	{
		std::cout << "Size Of Array: " << SizeRow_ << " x " << SizeCol_ << std::endl;
	};

	void printArr()
	{
		for (size_t i = 0; i < SizeRow_; i++)
		{
			for (size_t j = 0; j < SizeCol_; j++)
			{
				std::cout << arr_[i][j] << '\t';
			}
			std::cout << std::endl;
		}
	};

	~CArray()
	{
		delete[] arr_;
		arr_ = nullptr;
		std::cout << this << std::endl;
	}
};


