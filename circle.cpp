#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//This program prompts user to enter circle raduis
//Then the circle area is displayed

int main()
{
    setiosflags(ios_base::fixed);
	const double PI = 3.142;
	double radius;
	double circumferenceOfCircle;
	cout << "Enter radius" << endl;
	cin >> radius;
	//Add code to read user input and store in variable radius
	cout << "The area of a circle with radius " << radius << " is " <<endl;
	//Calculate the area of the circle
	double area ;
	area = PI * pow(radius, 2);
	cout << setprecision(3) <<area;

	circumferenceOfCircle = 2 * PI * radius;

	cout << "The circumference of a circle is: " << circumferenceOfCircle << endl;

	return 0;
}
