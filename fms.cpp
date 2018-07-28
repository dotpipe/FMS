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
	while (pow((h/pi)*x+z+0.0000000001,2)*pi < pow(h,2))
		z += 0.0000000001;
	cout << std::fixed << std::setprecision(10) << "\t\tCircle\t\t\tRadius\t\t\tOffset\t\tSquare: " << pow(h,2) << endl;
	cout << "Upper\t\t" << pow(((h/pi)*x+z+0.00000001),2)*pi << "\t" << (h/pi)*x+z+0.0000000001 << "\t\t" << z+0.0000000001 << endl;
	cout << "Lower\t\t" << pow((h/pi)*x+z,2)*pi << "\t" <<  (h/pi)*x+z << "\t\t" << z << endl << endl;

	w = z;
	z = 0;
	while (pow((h*0.6827844)+z-0.0000000001,3)*pi >= pow(h,3))
		z -= 0.0000000001;
	cout << "\t\tSphere\t\t\tRadius\t\t\tOffset\t\tCube: " << pow(h,3) << endl;
	cout << "Upper\t\t" << pow((h*0.6827844)+z,3)*pi << "\t" << (h*0.6827844)+z << "\t\t" << z << endl;
	cout << "Lower\t\t" << pow((h*0.6827844)+z-0.00000001,3)*pi << "\t" << (h*0.6827844)+z-0.0000000001 << "\t\t" << z-0.0000000001 << endl;
	cout << flush;
	return 1;
}