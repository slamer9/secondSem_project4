#include "stdafx.h"
#include "ExceptionClass.h"

ExceptionClass::ExceptionClass(int e)
{
	errorCode = e;
}

void ExceptionClass::dealWithError()
{
	switch (errorCode)
	{
	case OUT_OF_BOUNDS: std::cout << "That index is out of bounds, try a smaller number." << std::endl;
		break;
	case NEGATIVE_INDEX: std::cout << "There are no negative index cells. Try a positive index." << std::endl;
		break;

	default: std::cout << "Default!?" << std::endl;
		break;
	}
}

