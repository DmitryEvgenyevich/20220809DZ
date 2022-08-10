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

	// ������� ���������� ������� ���������� �� ������� ������� (temp)
	void setArr(const ClassBlock& temp);
	// ������� ���������� ������ �������
	int getSize() const;
	// �������� ������� (value) � ����� �������
	void pushBack(int value);
	// ������� ������� ��� �������� (index)
	int getValueByIndex(int index) const;
	// ��������� ������� (valueForArr) �� ������� (index)
	void setValueByIndex(int index, int valueForArr);
	// ������ �������
	void show() const;
	// ���������� ����� �������� �������� (value) � �������
	int searchValue(int value) const;

	// ��������� � ������� �������� ������� 1 (����������)
	ClassBlock& operator++();
	// ��������� � ������� �������� ������� 1 (�����������)
	ClassBlock operator++(int);
	// �������� � ������� �������� ������� 1 (����������)
	ClassBlock& operator--();
	// �������� � ������� �������� ������� 1 (�����������)
	ClassBlock operator--(int);

};
