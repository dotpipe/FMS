/*
    FMS - Field Metric Scalar for Circles and Spheres to Squares and Cubes
    Copyright (C) 2021  Anthony David Pulse, Jr. - inland14@live.com

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


	int a = 0;
	float f = 0, b = 0;
	int c = 0;

	cout << std::fixed << std::setprecision(20) << "\tpow((h * (r * 0.56418958354775628694807945156085),2))*pi = " << pow((h*0.56418958354775628694807945156085),2)*pi << "\tSquare Area: " << pow(h,2) << endl;
	cout << "\t\t\tArea (e-20)\t\t\t\tRadius (e-20)\t\t\t\tDiameter (e-20)\t\t\tCircumference (e-20)\t\t\t\tRatio (e-20)\n\r" << endl;

        printf("\t\t%.20f\t%.20f\t\t%.20f\t\t%.20f\t\t%.20f\t%.20f",pow((h*0.56418958354775628694807945156085),2)*pi,(h*0.56418958354775628694807945156085),(h*0.56418958354775628694807945156085*2),2*pi*(h*0.56418958354775628694807945156085),(2*pi*(h*0.56418958354775628694807945156085))/(2*(h*0.5>
	cout << "\n\n\n\tpow(h*0.56418958354775628694807945156085,2)*pi*6 = " << (pow(h*0.56418958354775628694807945156085,2)*pi*6) << "\t\tCubic Area: " << pow(h,3) << "\t\tCubic Surface Area: " << (h*h*6) << endl;
        return 1;
}
