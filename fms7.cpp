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
#include <float.h>
using namespace std;

int main(int argc, char * argv[]) {
	printf("Field Metric Scalar Calculator (c) 2018\nBy Anthony David Pulse, Jr.\n\n");
	float v = 0, w = 0, z = 0, y = 0, x = 0, pi = 3.1415926535897932384626433832795;
	x = sqrt(pi); //1.772453532;
	v = 0.564189553260803; // 0.564189577546242; //0.564189585640917;
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
	if (h < 0) {
		printf("Error: Irrational Number Entered");
		exit(0);
	}
	z = 0;
	int j = 0, i = 0;
	j = 0;
	if (pow(h,2) - pow(((h/pi)*x),2)*pi > 0)
		while (pow((h/pi)*x + z,2)*pi - pow(h,2) > 0)
			z += 1;
	else
		while (pow((h/pi)*x + z,2)*pi - pow(h,2) < 0)
			z -= 1;
	if (pow(h,2) - pow((h/pi)*x+z,2)*pi > 0)
		while (pow((h/pi)*x + z,2)*pi - pow(h,2) > 0)
			z -= 0.00000001;
	else
		while (pow((h/pi)*x + z,2)*pi - pow(h,2) < 0)
			z += 0.00000001;
	cout << "\tx = sqrt(Pi)\t";
	cout << std::fixed << std::setprecision(20) << "\tpow((h/pi)*x,2)*pi = " << pow((h/pi)*x,2)*pi << "\tSquare Area: " << pow(h,2) << endl;
	cout << "\t\tCircle (e-20)\t\tRadius (e-20)\t\t\tIntegration (e-30)\t\t\t\tDifferential (e-30)" << endl;

	float s = 0, t = 0;
	w = z;

//	if (pow(h,2) - pow(((h/pi)*x+w),2)*pi > 0.0000009)
		while (pow(h,2) - pow((h/pi)*x+w + (0.00000000001*s),2)*pi > 0.000009)
			s += 1;
//	else
		while (pow(h,2) - pow((h/pi)*x+w + (0.00000000001*s),2)*pi < 0.000009)
			s -= 1;
	s *= 0.00000000001;
	j = 0;
//	if (pow(h,2) - pow(((h/pi)*x+w+s),2)*pi > 0.0000000009)
		while (pow(h,2) - pow(((h/pi)*x+w+s + (0.00000000000001*j)),2)*pi > 0.0000000009)
			j += 10;
//	else
		while (pow(h,2) - pow(((h/pi)*x+w+s + (0.00000000000001*j)),2)*pi < 0.0000000009)
			j -= 10;
	int c = j;
	while (j > c - 20) {
		printf("%d\t%.20f\t%.20f\t%.30f\t%.30f\n",j,pow((h/pi)*x+ w+s+(0.00000000000001*j),2)*pi, (h/pi)*x+w+s+(0.00000000000001*j), pow(h,2) - pow((h/pi)*x+w+s+(0.00000000000001*j),2)*pi - pow((h/pi)*x+w+s+(0.00000000000001*j),2)*pi + pow(h,2), pow((h/pi)*x+w+s+(0.00000000000001*j),2)*pi - pow(h,2));
		j--;
	}


	int a = 0;
	// Sphere
	float b = 0;
	float f = 0;
	while (a < 23) {
		while (pow((h*0.6827840569218967)+b+f,3)*pi < pow(h,3))
			f += (1*(1000/pow(10,a)));
		while (pow((h*0.6827840569218967)+b+f,3)*pi > pow(h,3))
			f -= (1*(1000/pow(10,a)));
		b += f;
		f = 0;
		a++;
	}

	cout << "\n\tpow((h*0.6827840569218967),3)*pi = " << pow(((h*0.6827840569218967)+z),3)*pi << "\t\tCubic Area: " << pow(h,3) << endl;
	cout << "\t\tSphere\t\t\t\tRadius\t\t\tIntegration\t\t\tDifferential" << endl;
	float p = b;

	j = 5;
//	while (j > 0) {
		printf("%d\t%.20f\t%.20f\t%.30f\t%.30f\n",j,pow((h*0.6827840569218967)+ p,3)*pi, (h*0.6827840569218967)+ p, pow(h,3) - pow((h*0.6827840569218967)+ p,3)*pi - pow((h*0.6827840569218967)+ p,3)*pi + pow(h,3), pow((h*0.6827840569218967)+ p,3)*pi - pow(h,3));
//		j--;
//	}
	return 1;
}