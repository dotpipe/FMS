/*
    FMS - Field Metric Scalar for Circles and Spheres to Squares and Cubes
    Copyright (C) 2018  Anthony David Pulse, Jr.
 
    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.
 
    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.
 
    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/

#include <math.h>
#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char * argv[]) {
	printf("Field Metric Scalar Calculator (c) 2018\nBy Anthony David Pulse, Jr.\n\n");
	float w = 0, z = 0.00000001, y = 0, x = 0, pi = 3.1415926536;
	x = 1.772453532;
	y = 2.1451307;
	if (argc == 1) {
		cout << "Missing width of Cube or Square";
		exit(0);
	}
	float h = 0;
	try {
		h = stof(argv[1]);
	} catch (...) {
		printf("Error: Not a number");
		exit(0);
	}
	
	z = 0;
	while (pow((h/pi)*x+z+0.0000000000025,2)*pi < pow(h + 0.00000000002,2))
		z += 0.00000000000025;
	cout << std::fixed << std::setprecision(20) << "Square: " << pow(h,2) << endl;
	cout << "\t\tCircle\t\t\t\tRadius\t\t\tDifferential\t\t\tOffset" << endl;

	float s = 0;
	w = z;

	while (pow(((h/pi)*x+w + s + 0.00000000000001),2)*pi > pow(h + 0.000000000000002,2))
		s -= 0.00000000000001;

	cout << "High\t" << pow(((h/pi)*x+w + s + 0.000000000000030),2)*pi << "\t" << (h/pi)*x+w + s + 0.00000000000030 << "\t\t" << abs(pow(h,2) - pow(((h/pi)*x+w + s + 0.000000000000030),2)*pi) << " ";
	cout << 0.0000000000003 << endl;
	cout << "Upper\t" << pow(((h/pi)*x+w + s + 0.000000000000015),2)*pi << "\t" << (h/pi)*x+w + s + 0.000000000000015 << "\t\t" << abs(pow(h,2) - pow(((h/pi)*x+w + s + 0.000000000000015),2)*pi) << " ";
	cout << 0.00000000000015 << endl;
	cout << "Middle\t" << pow(((h/pi)*x+w + s + 0.000000000000008),2)*pi << "\t" << (h/pi)*x+w + s + 0.00000000000008 << "\t\t" << abs(pow(h,2) - pow(((h/pi)*x+w + s + 0.000000000000008),2)*pi) << " ";
	cout << 0.00000000000008 << endl;
	cout << "Lower\t" << pow((h/pi)*x+w + s + 0.000000000000004,2)*pi << "\t" <<  (h/pi)*x+w + s + 0.00000000000004<< "\t\t" << abs(pow(h,2) - pow(((h/pi)*x+w + s + 0.00000000000004),2)*pi) << " ";
	cout << 0.00000000000004 << endl;
	cout << "Low\t" << pow((h/pi)*x+w + s + 0.000000000000002,2)*pi  << "\t" <<  (h/pi)*x+w + s + 0.000000000000002 << "\t\t" << abs(pow(h,2) - (pow((h/pi)*x+w + s + 0.000000000000002,2)*pi)) << " ";
	cout << 0.00000000000002 << endl << endl;

	z = 0;
	while (pow((h*0.6827844)+z-0.0000000000006,3)*pi >= pow(h,3))
		z -= 0.0000000000006;

	cout << "Cube:\t" << pow(h,3) << endl;
	cout << "\t\tSphere\t\t\t\tRadius\t\t\tDifferential\t\t" << endl;
	s = 0;
	while (pow(((h*0.6827844)+z-s),3)*pi >= pow(h,3))
		s +=  0.0000000000001;
	cout << "High\t" << pow(((h*0.6827844)+z - s + 0.00000000000014),3)*pi << "\t" << (h*0.6827844)+z + s + 0.00000000000014 << "\t\t" << abs(pow(h,3) - pow(((h*0.6827844)+z - s + 0.00000000000014),3)*pi) << " ";
	cout << 0.00000000000014 << endl;
	cout << "Upper\t" << pow(((h*0.6827844)+z - s + 0.00000000000008),3)*pi << "\t" << (h*0.6827844)+z + s + 0.00000000000008 << "\t\t" << abs(pow(h,3) - pow(((h*0.6827844)+z - s + 0.00000000000008),3)*pi) << " ";
	cout << 0.00000000000008 << endl;
	cout << "Middle\t" << pow((h*0.6827844)+z - s + 0.00000000000004,3)*pi << "\t" <<  (h*0.6827844)+z - s + 0.00000000000004 << "\t\t" << abs(pow(h,3) - pow(((h*0.6827844)+z - s + 0.00000000000004),3)*pi) << " ";
	cout << 0.00000000000004 << endl;
	cout << "Lower\t" << pow((h*0.6827844)+z - s + 0.00000000000002,3)*pi << "\t" <<  (h*0.6827844)+z - s + 0.00000000000002 << "\t\t" << abs(pow(h,3) - pow(((h*0.6827844)+z - s + 0.00000000000002),3)*pi) << " ";
	cout << 0.00000000000002 << endl;
	cout << "Low\t" << pow((h*0.6827844)+z - s,3)*pi << "\t" <<  (h*0.6827844)+z - s << "\t\t" << abs(pow(h,3) - pow(((h*0.6827844)+z - s - 0.00000000000),3)*pi) << " ";
	cout << 0.00000000000000 << endl;

	cout << flush;
	return 1;
}