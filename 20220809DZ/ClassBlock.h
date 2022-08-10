#pragma once
#include <iostream>

class ClassBlock
{
private:
	int _size;
	int* _arr;

public:
	explicit ClassBlock(int size = 0);
	ClassBlock(const ClassBlock& block);
	~ClassBlock();

	// Функция заполнение массива значениями из другого массива (temp)
	void setArr(const ClassBlock& temp);
	// Функция возвращает размер массива
	int getSize() const;
	// Добавить элемент (value) в конец массива
	void pushBack(int value);
	// Вернуть элемент под индексом (index)
	int getValueByIndex(int index) const;
	// Присвоить элемент (valueForArr) по индексу (index)
	void setValueByIndex(int index, int valueForArr);
	// Ввывод массива
	void show() const;
	// возвращает индец искомого значение (value) в массиве
	int searchValue(int value) const;

	// Добовляет к каждому элементу массива 1 (Префиксный)
	ClassBlock& operator++();
	// Добовляет к каждому элементу массива 1 (Постфиксный)
	ClassBlock operator++(int);
	// Отнимает к каждому элементу массива 1 (Префиксный)
	ClassBlock& operator--();
	// Отнимает к каждому элементу массива 1 (Постфиксный)
	ClassBlock operator--(int);

};
