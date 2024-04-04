#include "cdate.h"
#include <iostream>
using namespace std;

int main() {
  Date fecha1;
  Date fecha2;
  Date fecha3;

  fecha1.setYear(2020);
  fecha1.setMonth(1);
  fecha1.setDay(3);

  fecha2.setYear(2019);
  fecha2.setMonth(14);
  fecha2.setDay(15);

  fecha3.setYear(1500);
  fecha3.setMonth(12);
  fecha3.setDay(20);

  cout << "Ingrese el año: ";
  int yea;
  cin >> yea;
  fechas.setYear(yea);

  cout << "Ingrese el mes: ";
  int mon;
  cin >> mon;
  fechas.setMonth(mon);

  cout << "Ingrese el dia: ";
  int day;
  cin >> day;
  fechas.setDay(day);
  fecha1.displayDate();

  fecha2.displayDate();

  fecha3.displayDate();


  if (fechas.isLeapYear()){
    cout << "El año es bisiesto" << endl;
  }
}