/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samuele <samuele@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 00:30:05 by samuele           #+#    #+#             */
/*   Updated: 2024/12/22 23:33:05 by samuele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter &obj)
{
    *this = obj;
}

ScalarConverter::~ScalarConverter() {}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &obj)
{
    if (this == &obj)
        return *this;
    return *this;
}

void ScalarConverter::convert(const std::string &value)
{
    if (value == "nan" || value == "nanf")
        std::cout << "char: impossible" << std::endl
                  << "int: impossible" << std::endl
                  << "float: nanf" << std::endl
                  << "double: nan" << std::endl;
    else if (value == "inf" || value == "inff")
        std::cout << "char: impossible" << std::endl
                  << "int: impossible" << std::endl
                  << "float: inff" << std::endl
                  << "double: inf" << std::endl;
    else if (value == "-inf" || value == "-inff")
        std::cout << "char: impossible" << std::endl
                  << "int: impossible" << std::endl
                  << "float: -inff" << std::endl
                  << "double: -inf" << std::endl;
    else
    {
    }
}
