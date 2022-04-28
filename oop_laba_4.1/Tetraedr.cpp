#include "Tetraedr.h"

void Tetraedr::set_a(int x)
{
	Abstract::set_a(x);
}

int Tetraedr::get_a() const
{
	return Abstract::get_a();
}

Tetraedr::Tetraedr()
{
	Abstract::set_a(0);
}

Tetraedr::Tetraedr(int a = 0)
{
	Abstract::set_a(a);
}

Tetraedr::Tetraedr(Tetraedr& q)
	: Tetraedr(q.get_a())
{}

void Tetraedr::Print()
{
	cout << "The size of the side of the Tetraedr: " << get_a() << endl;
}

double Tetraedr::SurfaceArea()
{
	return  sqrt(3) * (get_a() * get_a());
}