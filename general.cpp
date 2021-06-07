// Find the Area and Perimeter of a Rectangle : A = w*l and P = 2(w+l)
#include <iostream>

using namespace std;

rectArea(int w, int l)
{
	cout << "Area of rectangle is" << endl << w * l;
}

rectPerimeter(int w, int l)
{
	cout << "Perimeter of rectangle is" << endl << 2 * (w + l);
}

int main()
{
	int w, l;
	cout << "Find area of rectangle" << endl;
	cout << "Please enter width of rectangle" << endl;
	cin >> w;
	cout << "Please enter length of rectangle" << endl;
	cin >> l;
	rectArea(w, l);
	cout << endl;
	
	cout << "Find perimeter of rectangle" << endl;
	cout << "Please enter the width of rectangle" << endl;
	cin >> w;
	cout << "Please enter the length of rectangle" << endl;
	cin >> l;
	rectPerimeter(w, l);
}
