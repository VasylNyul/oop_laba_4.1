#include "Kyl9.h"

void Kyl9::set_a(int x)
{
	Abstract::set_a(x);
}

int Kyl9::get_a() const
{
	return Abstract::get_a();
}

Kyl9::Kyl9()
{
	Abstract::set_a(0);
}

Kyl9::Kyl9(int a = 0)
{
	Abstract::set_a(a);
}

Kyl9::Kyl9(Kyl9& q)
	: Kyl9(q.get_a())
{}

void Kyl9::Print()
{
	cout << "Radius of the Kyl9: " << get_a() << endl;
}

double Kyl9::SurfaceArea()
{
	return 4 * 3.14 * (get_a() * get_a());
}