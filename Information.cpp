#include <iostream>
using namespace std;

main()
{
    string name;
    cout << "Enter your name: ";
    cin >> name;
    int rollno;
    cout << "Enter your Roll no: ";
    cin >> rollno;
    float aggregate;
    cout << "Enter your aggregate: ";
    cin >> aggregate;
    char section;
    cout << "Enter your Section:";
    cin >> section;

    cout << "" << endl;
    cout << "" << endl;

    cout << "Name"
         << ":"
         << " " << name << endl;
    cout << "Rollno"
            ":"
         << " " << rollno << endl;
    cout << "Aggregate"
            ":"
         << " " << aggregate << endl;
    cout << "Section"
            ":"
         << " " << section << endl;
}