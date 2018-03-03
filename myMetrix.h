#pragma once
#include"stdfx.h"

class Matrix12
{
public:
	int mCountFirst = 1;
	int mCountSecond = 2;
	float mNum11;
	float mNum12;
	Matrix12 operator+(const Matrix12 &m)
	{
		Matrix12 n;
		n.mNum11 = this->mNum11 + m.mNum11;
		n.mNum12 = this->mNum12 + m.mNum12;
		return n;
	}
};

class Matrix21
{
public:
	int mCountFirst = 2;
	int mCountSecond = 1;
	float mNum11;
	float mNum21;
};

class Matrix22
{
public:
	int mCountFirst = 2;
	int mCountSecond = 2;
	float mNum11;
	float mNum12;
	float mNum21;
	float mNum22;
};

class Matrix13
{
public:
	int mCountFirst = 1;
	int mCountSecond = 3;
	float mNum11;
	float mNum12;
	float mNum13;
};

class Matrix31
{
public:
	int mCountFirst = 3;
	int mCountSecond = 1;
	float mNum11;
	float mNum21;
	float mNum31;
};

class Matrix23
{
public:
	int mCountFirst = 2;
	int mCountSecond = 3;
	float mNum11;
	float mNum12;
	float mNum13;
	float mNum21;
	float mNum22;
	float mNum23;
};

class Matrix32
{
public:
	int mCountFirst = 3;
	int mCountSecond = 2;
	float mNum11;
	float mNum12;
	float mNum21;
	float mNum22;
	float mNum31;
	float mNum32;
};

class Matrix33
{
public:
	int mCountFirst = 3;
	int mCountSecond = 3;
	float mNum11;
	float mNum12;
	float mNum13;
	float mNum21;
	float mNum22;
	float mNum23;
	float mNum31;
	float mNum32;
	float mNum33;
};