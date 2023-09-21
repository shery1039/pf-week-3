#include<iostream>
using namespace std;



main()
{
    float mb;
    cout<<"Enter the size in megabytes(MB):";
    cin>>mb;
    float calculation=mb*1024*1024*8;
    cout<<mb<<" "<<"MB is equilent to"<<" "<<calculation<<" bits.";
}