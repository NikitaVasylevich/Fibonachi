#include <iostream>
using namespace std;
void main()

//#define Stepen
//#define ASCII_Table
//#define Fibonachi_1
//#define Fibonachi_2
//#define Simple_numbers
//#define Multiplication_table
//#define Pifagor_table
{
	setlocale(LC_ALL, "Rus");
	//TASK_1_Stepen
#ifdef Stepen
	int s = 1;
	int n, a;
	cout << "Введите основание: "; cin >> a;
	cout << "Введите показатель: "; cin >> n;
	for (int i = 1; i <= n; i++)
	{
		s *= a;
	}
	cout << a << "^" << n << "=";
	cout << s << endl;
#endif 

	//Task_2 (ASKII_Table)
#ifdef ASCII_Table

	for (int i = 0; i <= 255; i++)
	{
		cout << (char)i << "  ";
		if (i == 15)
			cout << endl;
		else if (i == 31)
			cout << endl;
		else if (i == 47)
			cout << endl;
		else if (i == 63)
			cout << endl;
		else if (i == 79)
			cout << endl;
		else if (i == 95)
			cout << endl;
		else if (i == 111)
			cout << endl;
		else if (i == 127)
			cout << endl;
		else if (i == 143)
			cout << endl;
		else if (i == 159)
			cout << endl;
		else if (i == 175)
			cout << endl;
		else if (i == 191)
			cout << endl;
		else if (i == 207)
			cout << endl;
		else if (i == 223)
			cout << endl;
		else if (i == 239)
			cout << endl;
		else if (i == 255)
			cout << endl;
	}
	cout << endl;
#endif // ASCII_Table

	//TASK_3_Fibonachi
#ifdef Fibonachi_1
	int a = 0;
	int b = 1;
	int n;
	int f = 0;
	cout << "Введите пороговое значение ряда Фибоначи: "; cin >> n;
	for (int i = 0; a + b <= n; i++)
	{
		if (i <= 1)
		{
			f = i;
			cout << f << "\t";
		}
		else
		{
			f = a + b;
			a = b;
			b = f;
			cout << f << "\t";
		}
	}

#endif // Fibonachi_1

	//TASK_4_Fibonachi
#ifdef Fibonachi_2
	int first_number = 0;
	int second_number = 1;
	int n;
	int f = 0;
	cout << "Введите количество выводимых чисел ряда Фибоначи:\n"; cin >> n;
	for (int i = 0; i < n; i++)
	{
		if (i <= 1)
		{
			f = i;
			cout << f << "\t";
		}
		else
		{
			f = first_number + second_number;
			first_number = second_number;
			second_number = f;
			cout << f << "\t";
		}
	}
#endif // Fibonachi_2

	//Task_5_Simple_numbers
#ifdef Simple_numbers
	int k;
	int x;
	int i = 2;
	cout << "Введите верхнее ограничение для поиска простых чисел:\n";
	cin >> k;
	for (int x = 2; x <= k; x++)
		//cin>>x;
	{
		while (x % i != 0)
		{
			i++;
		}
		if (x == i)
		{
			cout << x << " - простое число\n";
		}
		i = 2;
	}


#endif // Simple_numbers


	//TASK_6_Multiplication_table
#ifdef Multiplication_table
	int c;
	cout << "Таблица умножения:\n";
	for (int k = 1; k <= 9; k++)
	{
		for (int i = 1; i <= 9; i++)
		{
			c = k * i;
			cout << k << "*" << i << "=" << c << endl;
		}
		cout << endl;
	}
#endif // Multiplication_table

	//Task_7_Pifagor_table
#ifdef Pifagor_table
	int c;
	for (int k = 1; k <= 10; k++)
	{

		for (int i = 1; i <= 10; i++)
		{
			c = k * i;
			cout << c << "\t";
		}
		cout << endl;
	}
#endif // Pifagor_table
}