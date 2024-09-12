#include <iostream.h>
#include <conio.h>

void main()
{
	clrscr();

	int side;
	int perimeter;
	int area;

	cout << "Enter the side of the square: ";
	cin >> side;

	perimeter = 4 * side;
	area = side * side;

	cout << "The Perimeter of The Square is " << perimeter << endl;
	cout << "The Area of the Square is " << area << endl;

	getch();
}