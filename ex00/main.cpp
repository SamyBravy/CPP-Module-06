/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samuele <samuele@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 00:41:48 by samuele           #+#    #+#             */
/*   Updated: 2024/12/22 23:23:31 by samuele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

#include <cmath>
#include <iostream>
#include <string>

int main()
{
    ScalarConverter::convert("0");
    std::cout << std::endl;
    ScalarConverter::convert("42.0");
    std::cout << std::endl;
    ScalarConverter::convert("42.0f");
    std::cout << std::endl;
    ScalarConverter::convert("nanf");
    std::cout << std::endl;
    ScalarConverter::convert("inff");
    std::cout << std::endl;
    ScalarConverter::convert("-inff");
    std::cout << std::endl;
    ScalarConverter::convert("nan");
    std::cout << std::endl;
    ScalarConverter::convert("inf");
    std::cout << std::endl;
    ScalarConverter::convert("-inf");
    std::cout << std::endl;

    return 0;
}
