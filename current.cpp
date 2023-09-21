 #include<iostream>
 using namespace std;

 main()
 {
    float charge;
    cout<<"Enter the charge (Q) in coloumbs:";
    cin>>charge;
    float time;
    cout<<"Enter the time (t) in seconds:";
    cin>>time;

    float current=charge/time;

    cout<<"The current is"<<":"<<" "<<current<<" "<<"Amperes";
 }