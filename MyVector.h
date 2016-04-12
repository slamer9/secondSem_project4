#pragma once
#pragma once
#include "ExceptionClass.h"

#define DEFAULT_CAPACITY 2

class MyVector
{
private:
	int myCapacity;
	//int vecArray[DEFAULT_CAPACITY];
	int *vecArrayPoint;// = vecArray;
	int mySize;
public:
	MyVector();
	MyVector(unsigned int);
	~MyVector();

	int size();
	int capacity();
	int at(int);

	void clear();
	void push_back(int);
};