#include "Paralelepiped.h"
void Paralelepiped::set_a(int x)
{
	Abstract::set_a(x);
}

void Paralelepiped::set_b(int b)
{
	this->b = b;
}

void Paralelepiped::set_c(int c)
{
	this->c = c;
}

int Paralelepiped::get_a() const
{
	return Abstract::get_a();
}

int Paralelepiped::get_b() const
{
	return b;
}

int Paralelepiped::get_c() const
{
	return c;
}

Paralelepiped::Paralelepiped()
	:b(0), c(0)
{
	Abstract::set_a(0);
}

Paralelepiped::Paralelepiped(int a = 0, int b = 0, int c = 0)
	: b(b), c(c)
{
	Abstract::set_a(a);
}

Paralelepiped::Paralelepiped(Paralelepiped& q)
	: Paralelepiped(q.get_a(), q.get_b(), q.get_c())
{}

void Paralelepiped::Print()
{
	cout << "The size of the height of the Paralelepiped: " << get_a() << endl;
	cout << "The size of the width  of the Paralelepiped:: " << get_b() << endl;
	cout << "The size of the length of the Paralelepiped:: " << get_c() << endl;
}

double Paralelepiped::SurfaceArea()
{
	return 2 * (get_a() * get_b() + get_c() * get_b() + get_a() * get_c());
}
