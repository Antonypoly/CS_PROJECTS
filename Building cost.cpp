/* NAME: ANTONY POLY
  STUDENT ID: 0137155
  SEMESTER: 1
  LECTURER: MS. BRIDGET
  */
  
  #include <iostream>
using namespace std;

int main() 
{
   
    double architect_fee = 0.00, remainder, building_cost;
   

    cout << "Enter cost of building RM: ";
    cin >> building_cost;

    remainder = building_cost - 5000;

    if (building_cost > 0) {
        if (remainder <= 80000) {
            architect_fee = (5000 * 0.08) + (remainder * 0.03);
        } else if (remainder >= 80000) {
            architect_fee = (5000 * 0.08) + (remainder * 0.025);
        } else {
            cout << "Error";
            return 1;
        }

        cout << "Architect fee is RM " << architect_fee << endl;
    } else {
        cout << "Error";
    }

    return 0;
}
