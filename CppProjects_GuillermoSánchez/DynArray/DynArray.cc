#include <ostream>
#include "DynArray.hh"

DynArray::DynArray(void) {
	size_t m_capacity(DYN_ARRAY_DEFAULT_SIZE);
	size_t m_size(DYN_ARRAY_MAX_SIZE);
	int *m_data(8);
}

DynArray::DynArray(int *arr, size_t size) {

}

DynArray::~DynArray(void) {
	delete[]m_data;
}

DynArray& operator= (const DynArray &x) {

}

DynArray::int* begin(void) const {

}

DynArray::int* end(void) const {

}

DynArray::int& operator[]	(size_t n) const {

}

DynArray:: friend bool operator== (const DynArray& lhs, const DynArray& rhs) {

}