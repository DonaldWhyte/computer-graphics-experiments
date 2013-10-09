#include "Matrix44.h"

Matrix44::Matrix44()
{
	for (int i = 0; (i < ROWS); i++)
		for (int j = 0; (j < COLUMNS); j++)
			elements[i][j] = 0.0f;
}

Matrix44::Matrix44(float** elements)
{
	for (int i = 0; (i < ROWS); i++)
		for (int j = 0; (j < COLUMNS); j++)
			this->elements[i][j] = elements[i][j];
}

Matrix44::Matrix44(float elements[4][4])
{
	for (int i = 0; (i < ROWS); i++)
		for (int j = 0; (j < COLUMNS); j++)
			this->elements[i][j] = elements[i][j];
}

float Matrix44::operator()(int row, int col) const
{
	return elements[row][col];
}

float& Matrix44::operator()(int row, int col)
{
	return elements[row][col];
}

Matrix44 Matrix44::operator*(const Matrix44& mat) const
{
	float result[4][4] = { { 0.0f } };
	// TODO
	return Matrix44(result);
}

Vector3 Matrix44::operator*(const Vector3& vec) const
{
	// TODO
	float x = 0.0f;
	float y = 0.0f;
	float z = 0.0f;
	return Vector3(x, y, z);
}

Matrix44 Matrix44::identity()
{
	float elements[4][4] = { { 1, 0, 0, 0 }, { 0, 1, 0, 0 }, { 0, 0, 1, 0 }, { 0, 0, 0, 1 } };
	return Matrix44(&elements[0]);
}
