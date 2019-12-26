#ifndef TIME_H
#define TIME_H
class Time
{
 public :
 int hour;
 int minute;
// int second;
 public :
 //with default value
 Time(const int h = 0, const int m = 0);
 // setter function
 void setTime(const int h, const int m);
 // Print a description of object in " hh:mm:ss"
 void print() const;
 //compare two time object
 bool equals(const Time&);
};
#endif
