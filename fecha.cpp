#include "fecha.h"
#include<ctime>
#include <iostream>

using namespace std;

fecha::fecha()
{
    time_t tiempo = time(0);
    struct tm * now = localtime (&tiempo);
    dia = now->tm_mday;
    mes = (now->tm_mon+1);
    anio = (now->tm_year+1900);

}

fecha::~fecha()
{
    //dtor
}

void fecha::imprimir ()
{
    cout << dia << " " << mes << " " << anio << endl;
}

void fecha::set_fecha (int day,int month,int year)
{

    if(  ( month == 2 && (day > 28 || day < 0))  || ((month == 1 || month == 3 || month == 5 || month == 7 || month ==8 || month == 10 || month == 12) && (day > 31 || day < 0))    )
    {
        cout << "fecha invalidated" << endl;
        return;
    }

    else
    {
        dia = day;
        mes = month;
        anio = year;
    }

}

void fecha::set_dia (int day)
{
    dia = day;
}

void fecha::set_mes (int month)
{
    mes = month;
}

void fecha::set_anio (int year)
{
    anio = year;
}
