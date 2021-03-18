// vsDataTypeConvert.cpp
// Olanipekun O.A.
// March 18, 2021.
//
/* Objective: Using the IEEE 754 Standard Protocol for 32 bit binary notation, this
phase of the program computes and displays equivalent decimal and hexadecimal values
of the +/- floating-point (fp) number entered. For example: -3.6 (in fp) =
1100 0000 0110 0110 0110 0110 0110 0110 (in 32 bit binary) and, using 2's complement,
this corresponds to = -1067030938 (in decimal) = 0xC0666666 (in hex).
*/
//
/* Strategy: Implements a user-defined data type using Union (C-style) data type.
*/

#include <iostream>
#include <iomanip>		// Output stream base (dec, hex, oct)

using std::cout;
using std::cin;
using std::endl;
using std::hex;

int main()
{
	union
	{
		// Assumes both variables are of the same sizeof(), decided by member
		// with largest data type size, in this case, 'float'.
		float fpNumber;
		int decNumber;
	}valueOf;

	// Get floating-point input from user
	cout << "\nPlease enter a floating point number: ";
	cin >> valueOf.fpNumber;	// Assign to union member variable, fpNumber
	// using member operator

	// Get and display corresponding integer value:
	cout << valueOf.fpNumber << " in decimal value is: "
		<< valueOf.decNumber << endl;

	// Reinterpret integer to hex and display result:
	cout << "And " << valueOf.decNumber << " in hexadecimal is: "
		<< hex << valueOf.decNumber << endl;

	return 0;
}

/*
Bibliography/Credits:
1.) Corbar, M., Montalvo, C., Buckner, C. (2021), 'Disaster Rsponse Fixed Wing UAV
for Gulf of Mexico Field Campaign', AIAA, DOI: 10.2514/6.2021-1408
2.) Horton, I. (2014), 'Beginnning Visual C++ 2013', John Wiley & Sons, IN
3.) Deitel, P.J. and Deitel, H.M. (2010), 'C++ How To Program',
Pearson Prentice Hall, NJ
4.) Stroustrup, B. (2014), 'Programming Principles and Practice Using C++', 2ed.
Addison-Wesley
5.) Sward, B. (2019), 'Signed Decimal to Hexadecimal Conversion and Vice-versa',
YouTube Channel: Bradley Sward, College of DuPage, IL, Accessed: March 2021
6.) Cain, J. (circa 2009), 'Programming Paradigms (CS 107 - Lecture 2)',
YouTube Channel: Standford Center for Professional Development,
Standford University, Accessed: March 2021

https://www.cplusplus.com/forum/general/63755/
https://www.stackoverflow.com/questions/474007/floating-point-to-binary-valuec
https://www.tutorialspoint.com/purpose-of-unions-in-c-cplusplus
https://www.w3resource.com/cpp-exercises/for-loop/cpp-for-loop-exercise-71.php
https://www.learncpp.com/cpp-tutorial/bitwise-operators/
*/