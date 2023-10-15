/*
NAME: ANTONY POLY
STUDENT ID: 0137155
SEMESTER: 1
LECTURER : MS. BRIDGET
*/
#include<iostream>
using namespace std;

int main()
{
	double length, width, area, tilesreqired;

	cout << "Enter length of the room: ";
	cin >> length;
	cout << "Enter width of the room: ";
	cin >> width;

	area = length * width;

	tilesreqired =  area / 12;	

	cout << " area of the room is " << area << " square feet." << " You need " << tilesreqired << " tiles." << endl;
	
}
