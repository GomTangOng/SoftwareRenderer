#include <iostream>
#include <stdio.h>
#include <Windows.h>
#include <math.h>

using namespace std;

//粽溯闋л 憲堅葬闈
//漱攪, ч溺 -> 掘褻羹, 贗楚蝶
//漱攪翱骯(+, -, 頂瞳, 諼瞳, 蝶蠔塭培,  ч溺培)
//ч溺翱骯(+, -, 培, 蝶蠔塭培, 漱攪ч溺培)
//Vector2f, Vector3f, Vector4f, Vector2i, Vector3i, Vector4i
//Matrix22f, Matrix33f, Matrix22i, Matrix33f
//翱骯濠 螃幗煎註, operater



class Vector2f
{
public:
	int vCount = 2;
	float vNum1;
	float vNum2;
	Vector2f operator+(const Vector2f &u)
	{
		Vector2f v(v.vNum1 + u.vNum1, vNum2 + u.vNum2);
	}
};

class Vector3f
{
public:
	int vCount = 3;
	float vNum1;
	float vNum2;
	float vNum3;
};

class Matrix12
{
public:
	int mCountFirst = 1;
	int mCountSecond = 2;
	float mNum11;
	float mNum12;
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

void ShowVector(Vector2f u, char* a)
{
	cout << a << " = <" << u.vNum1 << ", " << u.vNum2 << "> " << endl;
}

void ShowVector(Vector3f u, char* a)
{
	cout << a << " = <" << u.vNum1 << ", " << u.vNum2 << ", " << u.vNum3 << "> " << endl;
}

void ShowMatrix(Matrix12 m)
{
	cout << "太 " << m.mNum11 << "  " << m.mNum12 << "太" << endl;
}

void ShowMatrix(Matrix13 m)
{
	cout << "太 " << m.mNum11 << "  " << m.mNum12 << "  " << m.mNum13 << "太" << endl;
}

void ShowMatrix(Matrix21 m)// 21, 22, 23, 31, 32, 33
{
	cout << "太 " << m.mNum11 << "太" << endl;
	cout << "太 " << m.mNum21 << "太" << endl;
}

void ShowMatrix(Matrix22 m)
{
	cout << "太 " << m.mNum11 << "  " << m.mNum12 << "太" << endl;
	cout << "太 " << m.mNum21 << "  " << m.mNum22 << "太" << endl;
}

void ShowMatrix(Matrix23 m)
{
	cout << "太 " << m.mNum11 << "  " << m.mNum12 << "  " << m.mNum13 << "太" << endl;
	cout << "太 " << m.mNum21 << "  " << m.mNum22 << "  " << m.mNum23 << "太" << endl;
}

void ShowMatrix(Matrix31 m)// 21, 22, 23, 31, 32, 33
{
	cout << "太 " << m.mNum11 << "太" << endl;
	cout << "太 " << m.mNum21 << "太" << endl;
	cout << "太 " << m.mNum31 << "太" << endl;
}

void ShowMatrix(Matrix32 m)
{
	cout << "太 " << m.mNum11 << "  " << m.mNum12 << "太" << endl;
	cout << "太 " << m.mNum21 << "  " << m.mNum22 << "太" << endl;
	cout << "太 " << m.mNum31 << "  " << m.mNum32 << "太" << endl;
}

void ShowMatrix(Matrix33 m)
{
	cout << "太 " << m.mNum11 << "  " << m.mNum12 << "  " << m.mNum13 << "太" << endl;
	cout << "太 " << m.mNum21 << "  " << m.mNum22 << "  " << m.mNum23 << "太" << endl;
	cout << "太 " << m.mNum31 << "  " << m.mNum32 << "  " << m.mNum33 << "太" << endl;
}

//Vector2f operator+ (const Vector2f)

void main()
{
	Vector2f V;
	Vector3f U;
	
	V.vNum1 = 1;
	V.vNum2 = 2;

	U.vNum1 = 1;
	U.vNum2 = 2;
	U.vNum3 = 3;
	

	Matrix12 M12;
	Matrix13 M13;
	Matrix21 M21;
	Matrix22 M22;
	Matrix23 M23;
	Matrix31 M31;
	Matrix32 M32;
	Matrix33 M33;

	M12.mNum11 = 1;
	M12.mNum12 = 2;

	M13.mNum11 = 1;
	M13.mNum12 = 2;
	M13.mNum13 = 3;

	M21.mNum11 = 1;
	M21.mNum21 = 4;

	M22.mNum11 = 1;
	M22.mNum12 = 2;
	M22.mNum21 = 4;
	M22.mNum22 = 5;

	M23.mNum11 = 1;
	M23.mNum12 = 2;
	M23.mNum13 = 3;
	M23.mNum21 = 4;
	M23.mNum22 = 5;
	M23.mNum23 = 6;

	M31.mNum11 = 1;
	M31.mNum21 = 4;
	M31.mNum31 = 7;

	M32.mNum11 = 1;
	M32.mNum12 = 2;
	M32.mNum21 = 4;
	M32.mNum22 = 5;
	M32.mNum31 = 7;
	M32.mNum32 = 8;

	M33.mNum11 = 1;
	M33.mNum12 = 2;
	M33.mNum13 = 3;
	M33.mNum21 = 4;
	M33.mNum22 = 5;
	M33.mNum23 = 6;
	M33.mNum31 = 7;
	M33.mNum32 = 8;
	M33.mNum33 = 9;

	ShowVector(U, "U");
	ShowVector(V, "V");

	ShowMatrix(M12);
	ShowMatrix(M13);
	ShowMatrix(M21);
	ShowMatrix(M22);
	ShowMatrix(M23);
	ShowMatrix(M31);
	ShowMatrix(M32);
	ShowMatrix(M33);
}