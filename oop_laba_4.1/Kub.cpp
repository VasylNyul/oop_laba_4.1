#include "Kub.h"

void Kub::set_a(int x)
{
	Abstract::set_a(x);
}

int Kub::get_a() const
{
	return Abstract::get_a();
}

Kub::Kub()
{
	Abstract::set_a(0);
}

Kub::Kub(int a = 0)
{
	Abstract::set_a(a);
}

Kub::Kub(Kub& q)
	: Kub(q.get_a())
{}

void Kub::Print()
{
	cout << "The size of the side of the Kub: " << get_a() << endl;
}

double Kub::SurfaceArea()
{
	return 6 * (get_a() * get_a());
}