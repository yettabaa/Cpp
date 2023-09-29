/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 04:47:29 by yettabaa          #+#    #+#             */
/*   Updated: 2023/09/28 23:04:46 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

//new call contructor and delete call destructor of an object malloc and free dont 
template <class T> // class is used to declar this T as class type
class Array
{
private:
	unsigned int n;
	T* array;
public:
	class Error : public std::exception {
		virtual const char* what() const throw() { return ("Error the index is out of bounds."); }
	};
	Array() : n(0), array(new T[0]) {}
	Array(unsigned int n) : n(n), array(new T[n]) {}
	Array& operator=(const Array& overl)
	{
		delete [] array;
		n = overl.n;
		array = new T[n]; //deep copy
		for (unsigned int i = 0; i < n; i++)
			array[i] = overl.array[i];
		return (*this);
	}
	Array(const Array& copy) : array(NULL) { *this = copy; }
	~Array() {delete [] array;}
	T& operator[](unsigned int index)
	{
		if (static_cast<unsigned int>(index) >= n)
			throw Error ();
		return (this->array[index]);
	}
	unsigned int size(void) const { return n; }
};

#endif