#ifndef FECHA_H
#define FECHA_H

using namespace std;

class fecha
{
    public:
        fecha();
        virtual ~fecha();
        void set_fecha (int,int,int);
        void set_dia (int);
        void set_mes (int);
        void set_anio (int);
        int get_dia(){return dia;}
        int get_mes(){return mes;}
        int get_anio(){return anio;}
        void imprimir();
    protected:

    private:
        int dia;
        int mes;
        int anio;
};

#endif // FECHA_H
