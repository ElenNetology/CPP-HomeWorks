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

	CArray(const CArray& other)
	{
		this->SizeRow_ = other.SizeRow_;
		this->SizeCol_ = other.SizeCol_;
		arr_ = new T * [this->SizeRow_] {};
		for (int i = 0; i < this->SizeRow_; i++)
		{
			arr_[i] = new T[this->SizeCol_]{};
		}
		std::cout << this << std::endl;

		for (size_t i = 0; i < other.SizeRow_; i++)
		{
			for (size_t j = 0; j < other.SizeCol_; j++)
			{
				this->arr_[i][j] = other.arr_[i][j];
			}
		}
		std::cout << this << std::endl;
	};


	T& operator()(int i, int j)
	{
		if (i >= SizeRow_ || i < 0) throw std::out_of_range("out_of_range index i(one)");
		if (j >= SizeCol_ || j < 0) throw std::out_of_range("out_of_range index j(one)");

		return arr_[i][j];
	};

	class ArrRow
	{
	public:
		ArrRow(T* arrRow_, const int SizeCol) : arrRow_(arrRow_), SizeCol_(SizeCol) { }

		T& operator[](int i)
		{
			if (i >= SizeCol_ || i < 0) throw std::out_of_range("out_of_range index j(two)");
			return arrRow_[i];
		}
	private:
		T* arrRow_;
		int SizeCol_ = 0;
	};

	ArrRow operator[](const int i) const
	{
		if (i >= SizeRow_ || i < 0) throw std::out_of_range("out_of_range index i(one)");

		return ArrRow(arr_[i], SizeCol_);
	};

	CArray& operator=(const CArray& other)
	{
		if (this != &other)
		{
			SizeCol_ = other.SizeCol_;
			SizeRow_ = other.SizeRow_;

			this->~CArray();

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
					this->arr_[i][j] = other.arr_[i][j];
				}
			}
			std::cout << this;

			return *this;
		};
		return *this;
	};

	void getSize()
	{
		std::cout << "Размер матрицы: " << SizeRow_ << " x " << SizeCol_ << std::endl;
	};

	void printArr()
	{
		for (size_t i = 0; i < SizeRow_; i++)
		{
			for (size_t j = 0; j < SizeCol_; j++)
			{
				std::cout <<arr_[i][j]<< '\t';
			}
			std::cout << std::endl;
		}
	};

	~CArray()
	{
		for (size_t j = 0; j < this->SizeRow_; j++)
		{
			delete[] this->arr_[j];
		}
		delete[] this->arr_;
		this->arr_ = nullptr;
		std::cout << this << std::endl;
	}
};


