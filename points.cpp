#include<iostream>
using namespace std;



main()
{
    string name;
    cout<<"Enter the name of Cricket team:";
    cin>>name;
    int wins;
    cout<<"Enter the number of wins:";
    cin>>wins;
    int draws;
    cout<<"Enter the number of draws:";
    cin>>draws;
    int losses;
    cout<<"Enter the number of losses:";
    cin>>losses;

    int calculate=(wins*3)+(draws*1)+(losses*0);
    cout<<name<<" "<<"has obtained"<<" "<<calculate<<" point in the Asia Cup tournament.";
}