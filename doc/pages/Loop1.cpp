#include<iostream>
using namespace std;
#include<string>

int main() {
int month,day;
string season;
cout<<"Enter numerical Month: "<< endl;
cin>>month;
cout<<"Enter day: " <<endl;
cin>>day;
if (month == 1 || month == 2 || month == 3)
season = "Winter";
else if (month == 4 || month == 5 || month == 6)
season = "Spring";
else if (month == 7 || month == 8 || month == 9)
season = "Summer";
else
season = "Fall";
}
if(month% 3== 0 && day >= 22)
{if(season == "Winter")
season = "Spring";
else if(season == "Spring")
season = "Summer";
else if(season == "Summer")
season = "Fall";
else
season = "Winter";
cout<< "Season: " << season << endl;} 
return 0;}