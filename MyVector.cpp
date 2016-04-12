#include "stdafx.h"
#include "MyVector.h"

MyVector::MyVector()
{
	myCapacity = DEFAULT_CAPACITY;
	mySize = 0;
	vecArrayPoint = new int[myCapacity];
}

MyVector::MyVector(unsigned int cap)
{
	myCapacity = cap;
	mySize = 0;
	vecArrayPoint = new int[myCapacity];
}

MyVector::~MyVector()
{
	if (vecArrayPoint != NULL)
	{
		delete[] vecArrayPoint;
		vecArrayPoint = NULL;
		delete this; //?
	}
}

int MyVector::size()
{
	return mySize;
}

int MyVector::capacity()
{
	return myCapacity;
}

void MyVector::clear()
{
	delete[] vecArrayPoint;
	myCapacity = DEFAULT_CAPACITY;
	mySize = 0;
	vecArrayPoint = new int[myCapacity];
}

void MyVector::push_back(int value)
{
	if (mySize == myCapacity)
	{
		int *temp = vecArrayPoint;
		myCapacity = myCapacity * 2;
		vecArrayPoint = new int[myCapacity];
		for (int i = 0; i < mySize; i++)
		{
			vecArrayPoint[i] = temp[i];
		}
		delete temp;
	}
	vecArrayPoint[mySize] = value;
	mySize++;
}

int MyVector::at(int n)
{
	if (n > (mySize - 1))
	{
		throw ExceptionClass(OUT_OF_BOUNDS);
	}

	if (n < 0)
	{
		throw ExceptionClass(NEGATIVE_INDEX);
	}

	return vecArrayPoint[n];
}
