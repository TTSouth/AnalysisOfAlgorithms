#include <iostream>
#include "rectangleType.h"
 
using namespace std;  

void rectangleType::setDimension(double l, double w)
{
    if (l >= 0) 
        length = l;
    else
        length = 0;

    if (w >= 0)
        width = w;
    else
        width = 0;
}

double rectangleType::getLength() const
{
    return length;
}

double rectangleType::getWidth()const
{
    return width;
}

double rectangleType::area() const
{
    return length * width;
}

double rectangleType::perimeter() const
{
    return 2 * (length + width);
}

void rectangleType::print() const
{
    cout << "Length = "  << length
         << "; Width = " << width;
}

rectangleType::rectangleType(double l, double w)
{
    setDimension(l, w);
}

rectangleType::rectangleType()
{
    length = 0;
    width = 0;
}


rectangleType operator+(const rectangleType& rectangle1, const rectangleType& rectangle2) 
{
    rectangleType tempRect;

    tempRect.length = rectangle1.getLength() + rectangle2.getLength();
    tempRect.width = rectangle1.getWidth() + rectangle2.getWidth();

    return tempRect;
}


rectangleType operator-(const rectangleType& rectangle1, const rectangleType& rectangle2) 
{
    rectangleType tempRect;

    tempRect.length = rectangle1.getLength() - rectangle2.getLength();
    tempRect.width = rectangle1.getWidth() - rectangle2.getWidth();

    return tempRect;
}


rectangleType operator*(const rectangleType& rectangle1, const rectangleType& rectangle2) 
{
    rectangleType tempRect;

    tempRect.length = rectangle1.getLength() * rectangle2.getLength();
    tempRect.width = rectangle1.getWidth() * rectangle2.getWidth();

    return tempRect;
}

bool operator==(const rectangleType& rectangle1, const rectangleType& rectangle2) 
{ 
      if(rectangle1.getLength() == rectangle2.getLength() && rectangle1.getWidth() == rectangle2.getWidth())
  {
    return true;
  }
  else
    return false;
}

bool operator!=(const rectangleType& rectangle1, const rectangleType& rectangle2) 
{ 
      if(rectangle1.getLength() != rectangle2.getLength() && rectangle1.getWidth() == rectangle2.getWidth())
  {
    return true;
  }
  else
    return false;
}

bool operator<=(const rectangleType& rectangle1, const rectangleType& rectangle2) 
{ 
      if(rectangle1.getLength() <= rectangle2.getLength() && rectangle1.getWidth() <= rectangle2.getWidth())
  {
    return true;
  }
  else
    return false;
}

bool operator<(const rectangleType& rectangle1, const rectangleType& rectangle2) 
{ 
      if(rectangle1.getLength() < rectangle2.getLength() && rectangle1.getWidth() < rectangle2.getWidth())
  {
    return true;
  }
  else
    return false;
}

bool operator>=(const rectangleType& rectangle1, const rectangleType& rectangle2) 
{ 
      if(rectangle1.getLength() >= rectangle2.getLength() && rectangle1.getWidth() >= rectangle2.getWidth())
  {
    return true;
  }
  else
    return false;
}

bool operator>(const rectangleType& rectangle1, const rectangleType& rectangle2) 
{ 
      if(rectangle1.getLength() > rectangle2.getLength() && rectangle1.getWidth() >rectangle2.getWidth())
  {
    return true;
  }
  else
    return false;
}



/*
bool rectangleType::operator>= 
                       (const rectangleType& rectangle) const
{
    return this-> area() >= rectangle.area();
}

bool rectangleType::operator> 
                       (const rectangleType& rectangle) const
{
    return this-> area() > rectangle.area();
}
*/ 
ostream& operator << (ostream& osObject, 
                      const rectangleType& rectangle)
{
    osObject << "Length = "  << rectangle.length 
             << "; Width = " << rectangle.width;

    return osObject;
}

istream& operator >> (istream& isObject, 
                      rectangleType& rectangle)
{
    isObject >> rectangle.length >> rectangle.width;

    return isObject;
}

