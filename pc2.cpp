#include "date.h"
#include <iostream>
using namespace std;

int main() {
  Date fecha1(0,0,0);
  Date fecha2(0,0,0);
  Date fecha3(0,0,0);

  fecha1.setDay(3);
  fecha1.setMonth(1);
  fecha1.setYear(2019);

  fecha2.setDay(15);
  fecha2.setMonth(14);
  fecha2.setYear(2019);

  fecha3.setDay(20);
  fecha3.setMonth(12);
  fecha3.setYear(1500);

  fecha1.displayDate();
  fecha2.displayDate();
  fecha3.displayDate();

  


}
