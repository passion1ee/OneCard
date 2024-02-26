#ifndef CIRCULARVECTOR_H
#define CIRCULARVECTOR_H

#include <vector>
#include <algorithm>

template <typename T>
class CircularVector {
private:
	std::vector<T> data;
	size_t currentIndex; // head

public:
	CircularVector();
	CircularVector(size_t size);

	inline void push_back(const T& value);

	inline void erase(const size_t& index);

	inline void assign(const size_t& size, const T&);

	inline void reverse();

	inline size_t size();

	inline T& operator[] (const size_t& index);
	inline const T& operator[] (const size_t& index) const;
};

#endif // !CIRCULARVECTOR_H