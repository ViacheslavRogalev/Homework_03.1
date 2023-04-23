#include <iostream>
#include <Windows.h>

class Calculator
{
private:
	double Num1 = 1;
	double Num2 = 1;

public:
	double add()
	{
		return Num1 + Num2;
	};

	double multiply()
	{
		return Num1 * Num2;
	};

	double subtract_1_2()
	{
		return Num1 - Num2;
	};

	double subtract_2_1()
	{
		return Num2 - Num1;
	};

	double divide_1_2()
	{
		return Num1 / Num2;
	};

	double divide_2_1()
	{
		return Num2 / Num1;
	};

	bool set_num1(double num1)
	{
		if (num1 != 0)
		{
			Num1 = num1;
			return true;
		}

		else
		{
			return false;
		}
	}

	bool set_num2(double num2)
	{
		if (num2 != 0)
		{
			Num2 = num2;
			return true;
		}

		else
		{
			return false;
		}
	}

};

void print_Result(double result)
{
	std::cout << result << std::endl;
}

int main(int argc, char** argv)
{
	SetConsoleCP(1251);
	setlocale(LC_ALL, "Russian");

	double num1 = 0;
	double num2 = 0;

	Calculator result;

	while (true)
	{
		do
		{
			std::cout << "Введите num1: ";
			std::cin >> num1;

			if (!result.set_num1(num1))
			{
				std::cout << "Неверный ввод! " << std::endl;
			};
		}

			while (!result.set_num1(num1));

			do
			{
				std::cout << "Введите num2: ";
				std::cin >> num2;

				if (!result.set_num2(num2))
				{
					std::cout << "Неверный ввод! " << std::endl;
				};
			}
			
			while (!result.set_num2(num2));

		result.add();
		std::cout << "num1 + num2 = ";
		print_Result(result.add());

		result.subtract_1_2();
		std::cout << "num1 - num2 = ";
		print_Result(result.subtract_1_2());

		result.subtract_2_1();
		std::cout << "num2 - num1 = ";
		print_Result(result.subtract_2_1());

		result.multiply();
		std::cout << "num1 * num2 = ";
		print_Result(result.multiply());

		result.divide_1_2();
		std::cout << "num1 / num2 = ";
		print_Result(result.divide_1_2());

		result.divide_2_1();
		std::cout << "num2 / num1 = ";
		print_Result(result.divide_2_1());
	}
return 0;
}