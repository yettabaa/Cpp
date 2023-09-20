/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 02:08:06 by yettabaa          #+#    #+#             */
/*   Updated: 2023/09/19 22:16:40 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"
// class Awesome
// { 
// private:
//     int _n;
// public:
//     Awesome( void ) : _n( 42 ) { return; } 
//     int get (void ) const 
//     { 
//         return this-> _n; 
//     } 
// };
// std::ostream & operator<<( std::ostream & o, Awesome const & rhs) 
// { 
//     o << rhs.get();
//     return o;
// }
// template< typename D>
// void print ( D const & x ) {
//     std::cout << x << std::endl;
//     return;
// }
// int main() 
// {
//     int tab[] = { 0, 1, 2, 3, 4 }; // <- - I never understood why you can't write int] tab
//     // Awesome tab2[5];
//      int i = 5;
//      Awesome tab2[5];
//     iter( tab, i, print);
//     iter( tab2, i, print);
//     // ::iter( tab2, 5, print );
//     return 0;
// }


class Awesome
{
public:
    Awesome( void ) : _n( 42 ) { return; }
    int get( void ) const { return this->_n; }
private:
    int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs )
{
  o << rhs.get();
  return o;
}

template< typename T >
void print( T& x )
{
  std::cout << x << std::endl;
  return;
}

int main() {
    int tab[] = { 0, 1, 2, 3, 4 };
    Awesome tab2[5];    
    iter( tab, 5, print<const int> );
    iter( tab2, 5, print<Awesome> );    
    return 0;
}

