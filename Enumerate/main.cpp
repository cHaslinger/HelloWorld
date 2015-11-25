#include<iostream>
using namespace std;

int diff(int day1, int day2)
{
    return day2-day1;
}

int main()

{

enum days_t {mon=1, tue, wed, thu, fri, sat, sun}; //wenn mon nicht =1 gesetzt wird, fäng es bei 0 an!

days_t day1, day2;
int a,b;
cout<<"Bitte 2 Tage eingeben:\n";
cin>> a >> b;

switch(a){
case 1: day1=mon;
    break;
case 2: day1=tue;
    break;
case 3: day1=wed;
    break;
case 4: day1=thu;
    break;
case 5: day1=fri;
    break;
case 6: day1=sat;
    break;
case 7: day1=sun;
    break;
}
switch(b){
case 1: day2=mon;
    break;
case 2: day2=tue;
    break;
case 3: day2=wed;
    break;
case 4: day2=thu;
    break;
case 5: day2=fri;
    break;
case 6: day2=sat;
    break;
case 7: day2=sun;
    break;
}

cout<<"\n days between="<< diff(day1,day2);

if (day1 < day2)

{

cout<<"\n"<<day1<<" comes before "<<day2;

}

cin.get();
}
