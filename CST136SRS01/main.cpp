#include "stdafx.h"
#include <iostream>
#include <exception>
#include "RangeInt.h"

int main()
{
	try
	{
		RangeInt limitedRange{ 26, 3 };
	}
	catch (std::exception& msg)
	{
		std::cout << msg.what();
	}

	try
	{
		RangeInt limitedRange{ 7, 26 };
	
		try
		{
			limitedRange.setValue(30);
		}
		catch (std::exception& msg)
		{
			std::cout << msg.what();
		}

		try
		{
			limitedRange.setValue(15);
		}
		catch (std::exception& msg)
		{
			std::cout << msg.what();
		}

		try
		{
			limitedRange.setUpper(5);
		}
		catch (std::exception& msg)
		{
			std::cout << msg.what();
		}

		try
		{
			limitedRange.setUpper(60);
		}
		catch (std::exception& msg)
		{
			std::cout << msg.what();
		}

		try
		{
			limitedRange.setLower(100);
		}
		catch (std::exception& msg)
		{
			std::cout << msg.what();
		}

		try
		{
			limitedRange.setLower(0);
		}
		catch (std::exception& msg)
		{
			std::cout << msg.what();
		}
	}
	catch (std::exception& msg)
	{
		std::cout << msg.what();
	}

	RangeInt infRange;
	infRange.setValue(15246);


    return 0;
}