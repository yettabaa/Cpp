/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   binarySearch.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 18:28:31 by yettabaa          #+#    #+#             */
/*   Updated: 2023/10/04 18:32:10 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "binarySearch.hpp"


// int binarySearch(T arr, int l, int r, int x)
// {
//     int m;
//     while (l <= r) {
//         m = l + (r - l) / 2;
 
//         // Check if x is present at mid
//         // printf("arr = %d x = %d\n", arr[m], x);
//         if (arr[m] == x)
//             return m;
//         // If x greater, ignore left half
//         // if (arr[m] < x)
//         //     l = m + 1;
//         (arr[m] < x) ? l = m + 1 : r = m - 1;
 
//         // If x is smaller, ignore right half
//         // else
//         //     r = m - 1;
//     }
 
//     // If we reach here, then element was not present
//     return l;
// }