// Lab_03_3.cpp
// ����� ������
// ����������� ������ � 3.3
// ������������, ������ �������� �������.
// ������ 13

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x;
	double R;
	double y;

	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;

	// ������������ � ����� ����
	if (x <= -R)
		y = R + x;
	else
		if (-R < x && x <= 0)
			y = sqrt(R * R - x * x);
		else
			if (0 <= x && x < 6)
				y = R - (R * x) / 6;
			else
				y = x - 6;

	cout << "y = " << y << endl;

	cin.get();
	return 0;

}