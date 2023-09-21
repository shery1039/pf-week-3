#include<iostream>
using namespace std;


main()
{
    string name;
    cout<<"Enter the name of student:";
    cin>>name;
    float Matric_marks;
    cout<<"Enter matriculation marks (out of 1100):";
    cin>>Matric_marks;
    float Inter_Marks;
    cout<<"Enter intermediate marks (out of 550):";
    cin>>Inter_Marks;
    float Ecat_Marks;
    cout<<"Enter Ecat marks (out of 400):";
    cin>>Ecat_Marks;

    float Calculation=(Ecat_Marks/400)*(50);
    float Calculation1=(Inter_Marks/550)*(40);
    float Calculation2=(Matric_marks/1100)*(10);
    float Aggregate=Calculation+Calculation1+Calculation2;
    cout<<"Aggregate score for"<<" "<<name<<" "<<"in UET is:"<<" "<<Aggregate;
}