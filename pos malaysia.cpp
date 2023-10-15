/*
NAME: Antony poly
STUDENT ID: 0137155
SEMESTER: 1
LECTURER: MS. BRIDGET 
*/
#include <iostream>
using namespace std;

int main() {

    double weight;

    std::cout << "Enter parcel weight (Kg): ";
    std::cin >> weight;

    if (weight >= 0)
        if (weight < 2.5)
            cout << " your delivery Charge is RM" << weight * 3.50 << endl;

        else
            if (weight <= 5)
                cout << "your delivery Charges is RM" << weight * 2.85 << endl;

            else
                cout << "your delivery Charges is RM" << weight * 2.45 << endl;



    else
        cout << "Enter weight above zero" << endl;

}
