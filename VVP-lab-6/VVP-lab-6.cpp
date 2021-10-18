#include <iostream>
#include <math.h>
using namespace std;

int main(){
	setlocale(LC_ALL, "ru");
	cout << "Задача 1." << endl;
	double A, B;
	cout << "Введите значение для А: "; cin >> A;
	cout << "Введите значение для В: "; cin >> B;
	swap(A, B);
	cout << "Обмен значений переменных A и B:" << endl;
	cout << "A = " << A << endl;
	cout << "B = " << B << endl;

	cout << "\nЗадача 2." << endl;
	double a, b, c, dop;
	cout << "Введите значение для А: "; cin >> a;
	cout << "Введите значение для В: "; cin >> b;
	cout << "Введите значение для C: "; cin >> c;
	dop = c;
	c = b;
	b = a;
	a = dop;
	cout << "Cодержимое A в B, B — в C, C — в A:" << endl;
	cout << "A = " << a << endl;
	cout << "B = " << b << endl;
	cout << "C = " << c << endl;

	cout << "\nЗадача 3." << endl;
	double x, y, z, zap;
	cout << "Введите значение для A: "; cin >> x;
	cout << "Введите значение для B: "; cin >> y;
	cout << "Введите значение для C: "; cin >> z;
	zap = x;
	x = y;
	y = z;
	z = zap;
	cout << "Cодержимое A в C, C — в B, B — в A:" << endl;
	cout << "A = " << x << endl;
	cout << "B = " << y << endl;
	cout << "C = " << z << endl; 

	cout << "\nЗадача 4." << endl;
	double X, Y;
	cout << "Задайте значение для x: "; cin >> X;
	Y = 3 * pow(X, 6) - 6 * pow(X, 2) - 7;
	cout << "y = " << Y << endl; 

	cout << "\nЗадача 5." << endl;
	double r, t;
	cout << "Задайте значение для x: "; cin >> r;
	r = r - 3;
	t = 4 * pow(r, 6) - 7 * pow(r, 3) + 2;
	cout << "y = " << t << endl;

	cout << "\nЗадача 6." << endl;
	double AA, q;
	cout << "Введите значение для А: "; cin >> AA;
	q = pow(AA, 5); 
	AA =q * AA * AA * AA;
	cout << "A^8 = " << AA << endl;

	cout << "\nЗадача 7." << endl;
	double aa, s, f;
	cout << "Введите значение для A: "; cin >> aa;
	s = pow(aa, 6);
	f = pow(aa, 5);
	aa = s * f * aa * aa * aa * aa;
	cout << "A^15 = " << aa << endl;

}
