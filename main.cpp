#include <iostream>
using namespace std;
#include "Time.h"
#include "Time.cpp"
/*
This is the updated version.
*/

int main()
{
 int hr1, minute1,hr2, minute2, WorkMinute, AMPM1,AMPM2;
 cout << "Input start time (Hr):\t ";
 cin >> hr1;
 cout << "\nInput start time (minute):\t ";
 cin >> minute1;
 cout << "\n Am or PM, if AM press 1 if PM press 21";
 cin >> AMPM1;
  cout << "\nInput end time (Hr):\t";
 cin >> hr2;
 cout << "\nInput end time (minute):\t ";
 cin >> minute2;
  cout << "\n Am or PM, if AM press 1 if PM press 2";
 cin >> AMPM2;
 
 cout << "I worked from" << hr1 << ":" << minute1 << " to " << hr2 << ":" << minute2 << endl;
 Time t1(hr1, minute1);
 Time t2(hr2, minute2);
 
 cout << "Time 1 : \t" << t1.hour << endl;
 
 if (AMPM1 == AMPM2){

 if (t2.hour >= t1.hour && t2.minute >= t1.minute) {
 	WorkMinute = (t2.hour - t1.hour)*60 + (t2.minute-t1.minute);
   }
  if (t2.hour > t1.hour && t2.minute < t1.minute) {
 	WorkMinute = (t2.hour - t1.hour)*60 - (t1.minute-t2.minute);
   }
 cout << "Total work hour (minutes) : \t" << WorkMinute << endl;
 
 if (t1.hour == 12 && t2.hour != 12  )
 {
 
 	WorkMinute = (t2.hour - (t1.hour-12))*60 + (t2.minute-t1.minute);

   }
 cout << "Total work hour (minutes) : \t" << WorkMinute << endl;
} 
 
}
 
 
} 

else if (t2.hour == 12)
{
if (t2.hour >= t1.hour && t2.minute >= t1.minute) {
 	WorkMinute = (t2.hour - t1.hour)*60 + (t2.minute-t1.minute);
   }
  if (t2.hour > t1.hour && t2.minute < t1.minute) {
 	WorkMinute = (t2.hour - t1.hour)*60 - (t1.minute-t2.minute);
   }
 cout << "Total work hour (minutes) : \t" << WorkMinute << endl;
} 

}

 t1.print(); // 10:50:59
// Time t2;
 t2.print(); // 06:39:09
 
 
 // //t2.setTime(6, 39, 9);
 t2.print(); // 06:39:09

 if(t1.equals(t2))
 cout << "Two objects are equal\n";
 else
 cout << "Two objects are not equal\n";
 return 0;
}
