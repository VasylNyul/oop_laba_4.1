#pragma once
#include "Abstract.h"

class Kyl9 : public Abstract
{
public:
    void set_a(int);

    int get_a() const;

    Kyl9();
    Kyl9(int);
    Kyl9(Kyl9&);

    virtual void Print();
    virtual double SurfaceArea();
};

