/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 23:38:20 by yettabaa          #+#    #+#             */
/*   Updated: 2023/09/16 00:43:50 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
// #include <cstdint>

Serializer::Serializer() {}

Serializer& Serializer::operator=(const Serializer& overl)
{
    (void)overl;
    return(*this);
}

Serializer::Serializer(const Serializer& copy)
{
    (void)copy;
}

Serializer::~Serializer() {}

uintptr_t Serializer::serialize(Data* ptr)
{
    return(reinterpret_cast<uintptr_t>(ptr));
}

Data* Serializer::deserialize(uintptr_t raw)
{
    return(reinterpret_cast<Data*>(raw));
}