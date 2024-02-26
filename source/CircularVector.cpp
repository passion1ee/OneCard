#include "CircularVector.h"

template<typename T>
CircularVector<T>::CircularVector() : currentIndex(0) {}

template<typename T>
CircularVector<T>::CircularVector(size_t size) : data(size), currentIndex(0) {}

template<typename T>
inline void CircularVector<T>::push_back(const T& value) {
	data[currentIndex] = value;
	currentIndex = (currentIndex + 1) % data.size();
}

template<typename T>
inline void CircularVector<T>::erase(const size_t& index) {
	data.erase(data.begin() + ((currentIndex + index) % data.size()));
}

template<typename T>
inline void CircularVector<T>::assign(const size_t& size, const T& Val) {
	data.assign(size, Val);
}

template<typename T>
inline void CircularVector<T>::reverse() {
	std::reverse(data.begin(), data.end());
}

template<typename T>
inline T& CircularVector<T>::operator[](const size_t& index) {
	return data[(currentIndex + index) % data.size()];
}

template<typename T>
inline const T& CircularVector<T>::operator[](const size_t& index) const {
	return data[(currentIndex + index) % data.size()];
}

template<typename T>
inline size_t CircularVector<T>::size() {
	return data.size();
}
