/*
NAME: ANTONY POLY
STUDENT ID: 0137155
SEMESTER: 1
LECTURER: MS. BRIDGET
*/

#include <iostream>	
using namespace std;

int main() {
  int serialNumber;
  int examScore;
  char grade{};

  cout << "Enter your serial number: ";
  cin >> serialNumber;
  cout << "Enter student your exam score: ";
  cin >> examScore;

  if (examScore < 0 || examScore > 100)
    cout << "wrong exam score" << endl;
  else

  if (examScore >= 90)
    grade = 'A';
  else if (examScore >= 80)
    grade = 'B';
  else if (examScore >= 70)
    grade = 'C';
  else if (examScore >= 60)
    grade = 'D';
  else
    grade = 'F';



 cout << "Serial number: " << serialNumber << "  Exam score: " << examScore << "  Grade: " << grade << endl;


  return 0;

}
