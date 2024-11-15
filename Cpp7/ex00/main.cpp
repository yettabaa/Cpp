/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 19:54:18 by yettabaa          #+#    #+#             */
/*   Updated: 2023/09/19 23:18:41 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "whatever.hpp"
class Awesome
{ 
private:
    int _n;
public:
    Awesome(void) :_n(0) {}
    Awesome( int n ) :_n( n ) {}
    Awesome & operator= (Awesome & a) { 
        _n = a. _n; 
        return * this;
    }
    bool operator==( Awesome const & rhs ) const 
    { 
        return (this->_n == rhs._n);
    }
    bool operator!=( Awesome const & rhs ) const
    {
        return (this->_n != rhs._n);
    }
    bool operator> ( Awesome const & rhs ) const 
    {
         return (this->_n > rhs._n);
    }
    bool operator< (Awesome const & rhs ) const 
    {
        return (this->_n < rhs._n);
    }
    bool operator>=( Awesome const & rhs ) const 
    {
        return (this->_n >= rhs._n);
    }
    bool operator<=( Awesome const & rhs ) const 
    {
        return (this->_n <= rhs._n);
    }
    int get_n() const {
         return _n; 
    }
};
std::ostream & operator<<(std::ostream & o, const Awesome &a) 
{
    o << a.get_n(); 
    return o;
}

int main( void )
{
    int a = 2;
    int b = 3;
    
    ::swap( a, b );//swap<int>(a,b); //scop resolution whay? //calling function swap implemeted in global scope
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    
    std::string c = "chaine1";
    std::string d = "chaine2";
    
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
    Awesome z(2), t(4);
    ::swap(z, t);
    std::cout << z << "  " << t << std::endl;
    
    
    return 0;
}