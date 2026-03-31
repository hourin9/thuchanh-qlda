#include "vector.hh"


bool FloatVector::operator==(const FloatVector &other) const{
    return *this == other;
}
FloatVector FloatVector::operator*(float n) const{
    FloatVector result;
    for(size_t i = 0; i < _size; i++){
        result.push(_data[i] * n);
    }
    return result;
}
FloatVector FloatVector::operator+(float n) const{
    FloatVector result;
    for(size_t i = 0; i < _size; i++){
        result.push(_data[i] + n);
    }
    return result;
}
