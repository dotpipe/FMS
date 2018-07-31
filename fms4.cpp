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
	int i = 0;
	float f = 0.0000000000001, g = 0.0000000001, p = 0.56438955326080322266;
	int j = 0;
	while (pow((h*p) + z,2)*pi > pow(h + 0.0000000000009,2))
		z -= f*100;

	cout << std::fixed << std::setprecision(20) << "Square: " << pow(h,2) << endl;
	cout << "\t\tCircle\t\t\tRadius\t\t\t\tDifferential\t\t\tOffset" << endl;

	float s = 0;
	w = z;

	while (pow(((h*p) + 0.0000000000001),2)*pi < pow(h - 0.0000001,2))
		s += 0.0000000000001;

	cout << "15\t" << pow(((h*p)+w + s + (f*13)),2)*pi << "\t\t" << (h*p)+w + s + (f*13) << "\t\t" << pow(h,2) - pow(((h*p)+w + s + (f*13)),2)*pi << "\t+" << (f*13) << endl;
	cout << "14\t" << pow(((h*p)+w + s + (f*12)),2)*pi << "\t\t" << (h*p)+w + s + (f*12) << "\t\t" << pow(h,2) - pow(((h*p)+w + s + (f*12)),2)*pi << "\t+" << (f*12) << endl;
	cout << "13\t" << pow(((h*p)+w + s + (f*11)),2)*pi << "\t\t" << (h*p)+w + s + (f*11) << "\t\t" << pow(h,2) - pow(((h*p)+w + s + (f*11)),2)*pi << "\t+" << (f*11) << endl;
	cout << "11\t" << pow(((h*p)+w + s + (f*10)),2)*pi << "\t\t" << (h*p)+w + s + (f*10) << "\t\t" << pow(h,2) - pow(((h*p)+w + s + (f*10)),2)*pi << "\t+" << (f*10) << endl;
	cout << "10\t" << pow(((h*p)+w + s + (f*9)),2)*pi << "\t\t" << (h*p)+w + s + (f*9) << "\t\t" << pow(h,2) - pow(((h*p)+w + s + (f*9)),2)*pi << "\t+" << (f*9) << endl;
	cout << "09\t" << pow(((h*p)+w + s + (f*8)),2)*pi << "\t\t" << (h*p)+w + s + (f*8) << "\t\t" << pow(h,2) - pow(((h*p)+w + s + (f*8)),2)*pi << "\t+" << (f*8) << endl;
	cout << "08\t" << pow(((h*p)+w + s + (f*7)),2)*pi << "\t\t" << (h*p)+w + s + (f*7) << "\t\t" << pow(h,2) - pow(((h*p)+w + s + (f*7)),2)*pi << "\t+" << (f*7) << endl;
	cout << "07\t" << pow(((h*p)+w + s - (f*0)),2)*pi << "\t\t" << (h*p)+w + s + (f*0) << "\t\t" << pow(h,2) - pow(((h*p)+w + s + (f*0)),2)*pi << "\t+" << (f*0) << endl;
	cout << "06\t" << pow(((h*p)+w + s - (f*7)),2)*pi << "\t\t" << (h*p)+w + s - (f*7) << "\t\t" << pow(h,2) - pow(((h*p)+w + s - (f*7)),2)*pi << "\t-" << (f*7) << endl;
	cout << "05\t" << pow(((h*p)+w + s - (f*8)),2)*pi << "\t\t" << (h*p)+w + s - (f*8) << "\t\t" << pow(h,2) - pow(((h*p)+w + s - (f*8)),2)*pi << "\t-" << (f*8) << endl;
	cout << "04\t" << pow(((h*p)+w + s - (f*9)),2)*pi << "\t\t" << (h*p)+w + s - (f*9) << "\t\t" << pow(h,2) - pow(((h*p)+w + s - (f*9)),2)*pi << "\t-" << (f*9) << endl;
	cout << "03\t" << pow(((h*p)+w + s - (f*10)),2)*pi << "\t\t" << (h*p)+w + s - (f*10) << "\t\t" << pow(h,2) - pow(((h*p)+w + s - (f*10)),2)*pi << "\t-" << (f*10)<< endl;
	cout << "02\t" << pow(((h*p)+w + s - (f*11)),2)*pi << "\t\t" << (h*p)+w + s - (f*11) << "\t\t" << pow(h,2) - pow(((h*p)+w + s - (f*11)),2)*pi << "\t-" << (f*11) << endl;
	cout << "01\t" << pow(((h*p)+w + s - (f*12)),2)*pi << "\t\t" << (h*p)+w + s - (f*12) << "\t\t" << pow(h,2) - pow(((h*p)+w + s - (f*12)),2)*pi << "\t-" << (f*12) << endl;
	cout << "00\t" << pow(((h*p)+w + s - (f*13)),2)*pi << "\t\t" << (h*p)+w + s - (f*13) << "\t\t" << pow(h,2) - pow(((h*p)+w + s - (f*13)),2)*pi << "\t-" << (f*13) << endl;
	cout << endl;
	
	z = 0;
	while (pow((h*0.682784057)+z-(f*6),3)*pi >= pow(h,3))
		z -= (f*6);

	cout << "Cube:\t" << pow(h,3) << endl;
	cout << "\t\tSphere\t\t\t\tRadius\t\t\tDifferential\t\tOffset" << endl;
	s = 0;
	while (pow(((h*0.682784057)+z-s + 0.0000000000001),3)*pi >= pow(h - 0.0000000000001,3))
		s +=  0.0000000000001;

	cout << "15\t" << pow(((h*0.682784057)+z + s + (f*13)),3)*pi << "\t\t" << (h*0.682784057)+z + s + (f*13) << "\t\t" << pow(h,3) - pow(((h*0.682784057)+z + s + (f*13)),3)*pi << "\t+" << (f*13) << endl;
	cout << "14\t" << pow(((h*0.682784057)+z + s + (f*12)),3)*pi << "\t\t" << (h*0.682784057)+z + s + (f*12) << "\t\t" << pow(h,3) - pow(((h*0.682784057)+z + s + (f*12)),3)*pi << "\t+" << (f*12) << endl;
	cout << "13\t" << pow(((h*0.682784057)+z + s + (f*11)),3)*pi << "\t\t" << (h*0.682784057)+z + s + (f*11) << "\t\t" << pow(h,3) - pow(((h*0.682784057)+z + s + (f*11)),3)*pi << "\t+" << (f*11) << endl;
	cout << "11\t" << pow(((h*0.682784057)+z + s + (f*10)),3)*pi << "\t\t" << (h*0.682784057)+z + s + (f*10) << "\t\t" << pow(h,3) - pow(((h*0.682784057)+z + s + (f*10)),3)*pi << "\t+" << (f*10) << endl;
	cout << "10\t" << pow(((h*0.682784057)+z + s + (f*9)),3)*pi << "\t\t" << (h*0.682784057)+z + s + (f*9) << "\t\t" << pow(h,3) - pow(((h*0.682784057)+z + s + (f*9)),3)*pi << "\t+" << (f*9) << endl;
	cout << "09\t" << pow(((h*0.682784057)+z + s + (f*8)),3)*pi << "\t\t" << (h*0.682784057)+z + s + (f*8) << "\t\t" << pow(h,3) - pow(((h*0.682784057)+z + s + (f*8)),3)*pi << "\t+" << (f*8) << endl;
	cout << "08\t" << pow(((h*0.682784057)+z + s + (f*7)),3)*pi << "\t\t" << (h*0.682784057)+z + s + (f*7) << "\t\t" << pow(h,3) - pow(((h*0.682784057)+z + s + (f*7)),3)*pi << "\t+" << (f*7) << endl;
	cout << "07\t" << pow(((h*0.682784057)+z + s - (f*0)),3)*pi << "\t\t" << (h*0.682784057)+z + s + (f*0) << "\t\t" << pow(h,3) - pow(((h*0.682784057)+z + s + (f*0)),3)*pi << "\t+" << (f*0) << endl;
	cout << "06\t" << pow(((h*0.682784057)+z + s - (f*7)),3)*pi << "\t\t" << (h*0.682784057)+z + s - (f*7) << "\t\t" << pow(h,3) - pow(((h*0.682784057)+z + s - (f*7)),3)*pi << "\t-" << (f*7) << endl;
	cout << "05\t" << pow(((h*0.682784057)+z + s - (f*8)),3)*pi << "\t\t" << (h*0.682784057)+z + s - (f*8) << "\t\t" << pow(h,3) - pow(((h*0.682784057)+z + s - (f*8)),3)*pi << "\t-" << (f*8) << endl;
	cout << "04\t" << pow(((h*0.682784057)+z + s - (f*9)),3)*pi << "\t\t" << (h*0.682784057)+z + s - (f*9) << "\t\t" << pow(h,3) - pow(((h*0.682784057)+z + s - (f*9)),3)*pi << "\t-" << (f*9) << endl;
	cout << "03\t" << pow(((h*0.682784057)+z + s - (f*10)),3)*pi << "\t\t" << (h*0.682784057)+z + s - (f*10) << "\t\t" << pow(h,3) - pow(((h*0.682784057)+z + s - (f*10)),3)*pi << "\t-" << (f*10) << endl;
	cout << "02\t" << pow(((h*0.682784057)+z + s - (f*11)),3)*pi << "\t\t" << (h*0.682784057)+z + s - (f*11) << "\t\t" << pow(h,3) - pow(((h*0.682784057)+z + s - (f*11)),3)*pi << "\t-" << (f*11) << endl;
	cout << "01\t" << pow(((h*0.682784057)+z + s - (f*12)),3)*pi << "\t\t" << (h*0.682784057)+z + s - (f*12) << "\t\t" << pow(h,3) - pow(((h*0.682784057)+z + s - (f*12)),3)*pi << "\t-" << (f*12) << endl;
	cout << "00\t" << pow(((h*0.682784057)+z + s - (f*13)),3)*pi << "\t\t" << (h*0.682784057)+z + s - (f*13) << "\t\t" << pow(h,3) - pow(((h*0.682784057)+z + s - (f*13)),3)*pi << "\t-" << (f*13) << endl;
	cout << endl;
	cout << flush;
	return 1;
}