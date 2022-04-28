#pragma once
#include <iostream>

using namespace std;

class Abstract
{
private:
	int a;
public:
	void set_a(int);
	int get_a() const;

	virtual double SurfaceArea() = 0;
	virtual void Print() = 0;
};

