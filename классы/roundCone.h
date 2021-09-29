#pragma once
#ifndef VECTOR_H
#define VECTOR_H

class roundCone {

	double x, y, z;
	double r, h;

public:
	void In();
	void Out();
	double Volume();
};
#endif