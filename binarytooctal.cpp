#include<iostream>
using namespace std;
int main()
{
	cout << "\t\t\tBinary to Octal Converter" << endl << endl;
	unsigned int n, digit;
	double i, decimal = 0, octal = 0;
	cout << "Enter Binary Number : "; cin >> n;
	for (i = 0; n > 0; ++i)
	{
		digit = n % 10;
		decimal += (digit*pow(2.0, i));
		n /= 10;
	}
	int d = static_cast<int>(decimal);
	for (i = 0; d > 0;i++)
	{
		digit = d % 8;
		octal += (digit*pow(10.0, i));
		d -= digit;
		d /= 8; 
	}
	cout << "Octal number: " << octal;
	system("pause>0");
}
