﻿// laboratorna1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
	double x; // вводимо значення x таке, що має цифри після коми
	cout << "Enter a number that has three digits in the integer and fractional part:"; //користувач вводить число очернене якому хоче отримати
	cin >> x;  // введення числа виду nnn.ddd
	cout << "The number is inverted to yours:"; //виводимо число виду ddd.nnn
	cout << (x = (int)x / 1000.0 + (x - (int)x) * 1000); // формула для знаходження оберненого, ціле число x ділимо на 1000(ддя отримання числа виду nnn), а x таке, що має цифри після коми віднамаємо від цілого x, мнодимо на 1000 та знаходимо знвчення виду ddd
	
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