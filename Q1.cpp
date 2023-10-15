/*ANTONY POLY
01/10/2003
Bsc Computer Science (ucoms)*/

#include <iostream>
using namespace std;

int main()
{
    int cost = 0;
    float duration;
    double interval_time;
    char rated;
    string description;
    bool age = true;

    duration = 1.00;
    interval_time = 11.35;
    rated = 'A';
    description = "age verification id is compulsary";
    age = 18;

    cout << "The film duration is: " << duration << "hrs" << endl;
    cout << "The interval time is : " << interval_time << endl;
    cout << "The film is : " << rated << " Rated" << endl;
    cout << "IMPORTANT NOTICE " << description << endl;
    cout << "Are you an adult?: " << age << endl;
}
