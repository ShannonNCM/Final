#ifndef ELEMENTOS_H
#define ELEMENTOS

//definimos las clases (no se si va esta clase)
/*class Cohetes
{
public:
    float  t0[], y0[], v0[]; 
public:
    Cohetes();
    ~Cohetes();
    //virtual void Despegue(); //despegue se va a comportar disinto para cada cohete
};*/

//clase cohete1
class Cohete1 
{
public://caracteristicas
    float t0[11];
    float y0[11];
    float v0[11];
    float E0, TSFC, CD, A, m0, mf0;
public:
    Cohete1();
    ~Cohete1();
    //void Despegue();
};

//clase cohete2
class Cohete2
{
public://caracterisitcas
    float t0[11];
    float y0[11];
    float v0[11];
    float E0, TSFC, CD, A, m0, mf0;
public:
    Cohete2();
    ~Cohete2();
    //void Despegue();
};

//clase cohete3
class Cohete3
{
public://caracteristicas
    float t0[11];
    float y0[11];
    float v0[11];
    float E0, TSFC, CD, A, m0, mf0;
public:
    Cohete3();
    ~Cohete3();
    //void Despegue();
};


#endif