#include "ClassBlock.h"

ClassBlock::ClassBlock(int size) :
	_size{ size },
	_arr{ new int[_size] {} }
{}

ClassBlock::ClassBlock(const ClassBlock& block):
	_size{ block._size },
	_arr{ new int[_size] }
{
	for (int i{}; i < block._size; ++i)
		this->_arr[i] = block._arr[i];
}

ClassBlock::~ClassBlock()
{
	delete[] this->_arr;
}

void ClassBlock::setArr(const ClassBlock& temp)
{
	for (int i{}; i < temp._size; ++i)
		this->_arr[i] = temp._arr[i];
}

int ClassBlock::getSize() const
{
	return this->_size;
}

void ClassBlock::pushBack(int value)
{
	const ClassBlock temp{ *this };
	++this->_size;
	this->_arr = new int[_size];
	this->setArr(temp);
	this->_arr[_size - 1] = value;
}

int ClassBlock::getValueByIndex(int index) const
{
	return this->_arr[index];
}

void ClassBlock::setValueByIndex(int index, int valueForArr)
{
	this->_arr[index] = valueForArr;
}

void ClassBlock::show() const
{
	for (int i{}; i < this->_size; ++i)
		std::cout << _arr[i] << '\t';

	std::cout << "\n\n";
}

int ClassBlock::searchValue(int value) const
{
	for (int i{}; i < this->_size; ++i)
	{
		if (this->_arr[i] == value)
		{
			return i;
		}
	}
}

ClassBlock& ClassBlock::operator++()
{
	for (int i{}; i < this->_size; ++i)
		this->_arr[i]++;

	return *this;
}

ClassBlock ClassBlock::operator++(int)
{
	ClassBlock temp = *this;
	
	for (int i{}; i < this->_size; ++i)
		this->_arr[i]++;

	return temp;
}

ClassBlock& ClassBlock::operator--()
{
	for (int i{}; i < this->_size; ++i)
		this->_arr[i]--;

	return *this;
}

ClassBlock ClassBlock::operator--(int)
{
	ClassBlock temp = *this;

	for (int i{}; i < this->_size; ++i)
		this->_arr[i]--;

	return temp;
}
