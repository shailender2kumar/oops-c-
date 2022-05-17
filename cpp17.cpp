// C++ program to show binary operator overloading
#include <iostream>

using namespace std;

class Distance {
public:
	// Member Object
	int feet, inch;
	// No Parameter Constructor
	Distance()
	{
		feet = 0;
		inch = 0;
	}

	// Constructor to initialize the object's value
	// Parameterized Constructor
	Distance(int f, int i)
	{
		feet = f;
		inch = i;
	}

	// Overloading (+) operator to perform division of
	// two distance object
	Distance operator+(Distance& d2) // Call by reference
	{
		// Create an object to return
		Distance d3;

		// Perform addition of feet and inches
		d3.feet = feet /d2.feet;
		d3.inch = inch / d2.inch;

		// Return the resulting object
		return d3;
	}
};

// Driver Code
int main()
{
	// Declaring and Initializing first object
	Distance d1(8, 9);

	// Declaring and Initializing second object
	Distance d2(10, 2);

	// Declaring third object
	Distance d3;

	// Use overloaded operator
	d3 = d1 + d2;

	// Display the result
	cout << "\nTotal Feet & Inches: " << d3.feet << "'" << d3.inch;
	return 0;
}
