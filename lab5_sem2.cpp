// lab5_sem2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
#include <iomanip>
using namespace std;
int* arr[3][4];

void PrintArr(int* array[3][4]);

int main(int argc, char *argv[]) 
{

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if ( i == 2 and (j == 0 || j == 3 || j == 2) )
				arr[i][j] = nullptr;
			else {
				arr[i][j] = new int;
				cin >> *arr[i][j];
			}
		}
	}
	cout << endl;
	PrintArr(arr);

	cout << "Enter value for changing: ";
	
	cin >> *arr[1][1];
	cout << endl;

	PrintArr(arr);

	arr[2][2] = new int;
	cout << "Enter new value: ";
	cin >> *arr[2][2];
	cout << endl;
	
	PrintArr(arr);

	cout << "Deleting an element.";
	delete arr[0][3];
	arr[0][3] = nullptr;

	PrintArr(arr);

	/*for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (arr[j][i] == nullptr)
				cout << setw(10) << "nullptr";
			else {
				cout << setw(10) << *arr[j][i];
			}
		}
		cout << endl;
	}*/


	return 0;
}

void PrintArr(int* array[3][4]) {
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (arr[j][i] == nullptr)
				cout << setw(10) << "nullptr";
			else {
				cout << setw(10) << *arr[j][i];
			}
		}
		cout << endl;
	}
	
	cout << endl;
}


// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
