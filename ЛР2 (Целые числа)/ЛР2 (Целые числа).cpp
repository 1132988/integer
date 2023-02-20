# include <iostream>
using namespace std;
int main() 
{
	setlocale(LC_ALL, "Russian");
	int ab;
	cout << "Введите двузначное число: ";
	cin >> ab;
	cout << "Число при перестановке цифр: " << ab / 10 + ab % 10 * 10 << endl;
	return 0;
}