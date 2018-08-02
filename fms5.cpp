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
	float v = 0, w = 0, z = 0.00000001, y = 0, x = 0, pi = 3.1415926536;
	
	x = 1.772453532;
	v = (1/pi)*x; // 0.564189577546242; //0.564189585640917;
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
	v = pow(h,2) - pow(v,2)*pi;
	z = 0;
	int i = 0;
	const float f = 0.00000000001; 
	const float g = 0.0000001;
	int j = 0;
	cout << std::fixed << std::setprecision(25) << "\tSquare: " << pow(h,2) << endl;

	float s = 0;
	w = z;

	float p = 0.564189575747498;
	j = 0;

	printf("\th = %.25f \n\t(1/pi) = %.25f \n\tx = %.10f \n\t(pow(h,2) - ((1/pi)*x) = %.35f\n\n",h,(1/pi),x,v);

	/*
	cout << "15\t" << pow(((h/pi)*x+w + s + (0.00000000013)),2)*pi << "\t" << (h/pi)*x+w + s + (0.00000000013) << "\t" << pow(h,2) - pow(((h/pi)*x+w + s + (0.00000000013)),2)*pi << "\t+" << (0.00000000013) << endl << flush;
	cout << "14\t" << pow(((h/pi)*x+w + s + (0.00000000012)),2)*pi << "\t" << (h/pi)*x+w + s + (0.00000000012) << "\t" << pow(h,2) - pow(((h/pi)*x+w + s + (0.00000000012)),2)*pi << "\t+" << (0.00000000012) << endl << flush;
	cout << "13\t" << pow(((h/pi)*x+w + s + (0.00000000011)),2)*pi << "\t" << (h/pi)*x+w + s + (0.00000000011) << "\t" << pow(h,2) - pow(((h/pi)*x+w + s + (0.00000000011)),2)*pi << "\t+" << (0.00000000011) << endl << flush;
	cout << "11\t" << pow(((h/pi)*x+w + s + (0.00000000010)),2)*pi << "\t" << (h/pi)*x+w + s + (0.00000000010) << "\t" << pow(h,2) - pow(((h/pi)*x+w + s + (0.00000000010)),2)*pi << "\t+" << (0.00000000010) << endl << flush;
	cout << "10\t" << pow(((h/pi)*x+w + s + (0.00000000009)),2)*pi << "\t" << (h/pi)*x+w + s + (0.00000000009) << "\t" << pow(h,2) - pow(((h/pi)*x+w + s + (0.00000000009)),2)*pi << "\t+" << (0.00000000009) << endl << flush;
	cout << "09\t" << pow(((h/pi)*x+w + s + (0.00000000008)),2)*pi << "\t" << (h/pi)*x+w + s + (0.00000000008) << "\t" << pow(h,2) - pow(((h/pi)*x+w + s + (0.00000000008)),2)*pi << "\t+" << (0.00000000008) << endl << flush;
	cout << "08\t" << pow(((h/pi)*x+w + s + (0.00000000007)),2)*pi << "\t" << (h/pi)*x+w + s + (0.00000000007) << "\t" << pow(h,2) - pow(((h/pi)*x+w + s + (0.00000000007)),2)*pi << "\t+" << (0.00000000007) << endl << flush;
	cout << "07\t" << pow(((h/pi)*x+w + s - (0.000000000)),2)*pi << "\t" << (h/pi)*x+w + s - (0.000000000) << "\t" << pow(h,2) - pow(((h/pi)*x+w + s - (0.000000000)),2)*pi << "\t-" << (0.000000000) << endl << flush;
	cout << "06\t" << pow(((h/pi)*x+w + s - (0.00000000007)),2)*pi << "\t" << (h/pi)*x+w + s - (0.00000000007) << "\t" << pow(h,2) - pow(((h/pi)*x+w + s - (0.00000000007)),2)*pi << "\t-" << (0.00000000007) << endl << flush;
	cout << "05\t" << pow(((h/pi)*x+w + s - (0.00000000008)),2)*pi << "\t" << (h/pi)*x+w + s - (0.00000000008) << "\t" << pow(h,2) - pow(((h/pi)*x+w + s - (0.00000000008)),2)*pi << "\t-" << (0.00000000008) << endl << flush;
	cout << "04\t" << pow(((h/pi)*x+w + s - (0.00000000009)),2)*pi << "\t" << (h/pi)*x+w + s - (0.00000000009) << "\t" << pow(h,2) - pow(((h/pi)*x+w + s - (0.00000000009)),2)*pi << "\t-" << (0.00000000009) << endl << flush;
	cout << "03\t" << pow(((h/pi)*x+w + s - (0.00000000010)),2)*pi << "\t" << (h/pi)*x+w + s - (0.00000000010) << "\t" << pow(h,2) - pow(((h/pi)*x+w + s - (0.00000000010)),2)*pi << "\t-" << (0.00000000010)<< endl;
	cout << "02\t" << pow(((h/pi)*x+w + s - (0.00000000011)),2)*pi << "\t" << (h/pi)*x+w + s - (0.00000000011) << "\t" << pow(h,2) - pow(((h/pi)*x+w + s - (0.00000000011)),2)*pi << "\t-" << (0.00000000011) << endl << flush;
	cout << "01\t" << pow(((h/pi)*x+w + s - (0.00000000012)),2)*pi << "\t" << (h/pi)*x+w + s - (0.00000000012) << "\t" << pow(h,2) - pow(((h/pi)*x+w + s - (0.00000000012)),2)*pi << "\t-" << (0.00000000012) << endl << flush;
	cout << "00\t" << pow(((h/pi)*x+w + s - (0.00000000013)),2)*pi << "\t" << (h/pi)*x+w + s - (0.00000000013) << "\t" << pow(h,2) - pow(((h/pi)*x+w + s - (0.00000000013)),2)*pi << "\t-" << (0.00000000013) << endl << flush;
	cout << endl << flush;
	*/
	float d = 0.682784057; //0.682784057;
	z = 0;
	while (pow(h,3) - pow((h*0.682784057)+z,3)*pi > g*10)
		z -= (g);
	z -= g/10;
	cout << "\nCube:\t" << pow((h*0.682784057)+z,3)*pi << " " << pow(h,3) << endl;
	cout << "\t\tSphere\t\t\t\tRadius\t\tIntegration\t\tOffset" << endl;
	s = 0;

	while (pow(h,3) - pow(((h*0.682784057)+z+s),3)*pi < 0.0000000001)
		s += 0.00000000001;
	j = 16;
	while (j > -16) {
		printf("%d\t%.15f\t%.15f\t%.15f\t%.15f\n",j,pow(((h*0.682784057)+z + s + (0.000000001*j)),3)*pi, (h*0.682784057)+z + s + (0.000000001*j), pow(h,2) - pow(((h*0.682784057)+z + s + (0.000000001*j)),3)*pi, (0.000000001*j));
		j--;
	}
	/*
	cout << "15\t" << pow(((h*0.682784057)+z + s + (f*13)),3)*pi << "\t" << (h*0.682784057)+z + s + (f*13) << "\t" << pow(h,3) - pow(((h*0.682784057)+z + s + (f*13)),3)*pi << "\t+" << (f*13) << endl;
	cout << "14\t" << pow(((h*0.682784057)+z + s + (f*12)),3)*pi << "\t" << (h*0.682784057)+z + s + (f*12) << "\t" << pow(h,3) - pow(((h*0.682784057)+z + s + (f*12)),3)*pi << "\t+" << (f*12) << endl;
	cout << "13\t" << pow(((h*0.682784057)+z + s + (f*11)),3)*pi << "\t" << (h*0.682784057)+z + s + (f*11) << "\t" << pow(h,3) - pow(((h*0.682784057)+z + s + (f*11)),3)*pi << "\t+" << (f*11) << endl;
	cout << "11\t" << pow(((h*0.682784057)+z + s + (f*10)),3)*pi << "\t" << (h*0.682784057)+z + s + (f*10) << "\t" << pow(h,3) - pow(((h*0.682784057)+z + s + (f*10)),3)*pi << "\t+" << (f*10) << endl;
	cout << "10\t" << pow(((h*0.682784057)+z + s + (f*9)),3)*pi << "\t" << (h*0.682784057)+z + s + (f*9) << "\t" << pow(h,3) - pow(((h*0.682784057)+z + s + (f*9)),3)*pi << "\t+" << (f*9) << endl;
	cout << "09\t" << pow(((h*0.682784057)+z + s + (f*8)),3)*pi << "\t" << (h*0.682784057)+z + s + (f*8) << "\t" << pow(h,3) - pow(((h*0.682784057)+z + s + (f*8)),3)*pi << "\t+" << (f*8) << endl;
	cout << "08\t" << pow(((h*0.682784057)+z + s + (f*7)),3)*pi << "\t" << (h*0.682784057)+z + s + (f*7) << "\t" << pow(h,3) - pow(((h*0.682784057)+z + s + (f*7)),3)*pi << "\t+" << (f*7) << endl;
	cout << "07\t" << pow(((h*0.682784057)+z + s - (f*0)),3)*pi << "\t" << (h*0.682784057)+z + s + (f*0) << "\t" << pow(h,3) - pow(((h*0.682784057)+z + s + (f*0)),3)*pi << "\t-" << (f*0) << endl;
	cout << "06\t" << pow(((h*0.682784057)+z + s - (f*7)),3)*pi << "\t" << (h*0.682784057)+z + s - (f*7) << "\t" << pow(h,3) - pow(((h*0.682784057)+z + s - (f*7)),3)*pi << "\t-" << (f*7) << endl;
	cout << "05\t" << pow(((h*0.682784057)+z + s - (f*8)),3)*pi << "\t" << (h*0.682784057)+z + s - (f*8) << "\t" << pow(h,3) - pow(((h*0.682784057)+z + s - (f*8)),3)*pi << "\t-" << (f*8) << endl;
	cout << "04\t" << pow(((h*0.682784057)+z + s - (f*9)),3)*pi << "\t" << (h*0.682784057)+z + s - (f*9) << "\t" << pow(h,3) - pow(((h*0.682784057)+z + s - (f*9)),3)*pi << "\t-" << (f*9) << endl;
	cout << "03\t" << pow(((h*0.682784057)+z + s - (f*10)),3)*pi << "\t" << (h*0.682784057)+z + s - (f*10) << "\t" << pow(h,3) - pow(((h*0.682784057)+z + s - (f*10)),3)*pi << "\t-" << (f*10) << endl;
	cout << "02\t" << pow(((h*0.682784057)+z + s - (f*11)),3)*pi << "\t" << (h*0.682784057)+z + s - (f*11) << "\t" << pow(h,3) - pow(((h*0.682784057)+z + s - (f*11)),3)*pi << "\t-" << (f*11) << endl;
	cout << "01\t" << pow(((h*0.682784057)+z + s - (f*12)),3)*pi << "\t" << (h*0.682784057)+z + s - (f*12) << "\t" << pow(h,3) - pow(((h*0.682784057)+z + s - (f*12)),3)*pi << "\t-" << (f*12) << endl;
	cout << "00\t" << pow(((h*0.682784057)+z + s - (f*13)),3)*pi << "\t" << (h*0.682784057)+z + s - (f*13) << "\t" << pow(h,3) - pow(((h*0.682784057)+z + s - (f*13)),3)*pi << "\t-" << (f*13) << endl;
	cout << endl;
	cout << flush;
	*/
	return 1;
}