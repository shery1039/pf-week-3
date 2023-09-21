#include<iostream>
using namespace std;


main()
{
    int current_Population;
    cout<<"Enter the current world population:";
    cin>>current_Population;
    int monthly_BirthRate;
    cout<<"Enter the monthly birth rate (number of births per month):";
    cin>>monthly_BirthRate;
    int calculate=current_Population+(monthly_BirthRate*12)*30;
    cout<<"The population in three decades will be: "<<calculate;
    
}