#include <cassert>

#include "vector.hh"

float &FloatVector::operator[](size_t idx)
{
	assert(idx < _size);
	return _data[idx];
}

float FloatVector::operator[](size_t idx) const
{
	assert(idx < _size);
	return _data[idx];
}

FloatVector &FloatVector::operator=(const FloatVector &other)
{
	if (this == &other) {
		return *this;
	}

	_realloc(other._size);
	_size = other._size;

	for (size_t i = 0; i < _size; ++i) {
		_data[i] = other._data[i];
	}

	return *this;
}

