#include <iostream>
#include <iomanip>
#include "Time.h"
using namespace std;
Time :: Time(const int h, const int m)
 : hour(h), minute (m)
{}
void Time :: setTime(const int h, const int m)
{
 hour = h;
 minute = m;
// second = s;
}
void Time :: print() const
{
 cout << setw(2) << setfill('0') << hour << ":"
<< setw(2) << setfill('0') << minute << "\n";
//<< setw(2) << setfill('0') << second << "\n";
}
bool Time :: equals(const Time &otherTime)
{
 if(hour == otherTime.hour
 && minute == otherTime.minute)
// && second == otherTime.second)
 return true;
 else
  return false;
 }
