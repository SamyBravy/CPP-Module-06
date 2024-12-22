/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samuele <samuele@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 00:20:16 by samuele           #+#    #+#             */
/*   Updated: 2024/12/22 23:28:36 by samuele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <sstream>
# include <string>
# include <iostream>
# include <cmath>
# include <limits>

class ScalarConverter
{
    public:
        ScalarConverter();
        ScalarConverter(std::string const &value);
        ScalarConverter(ScalarConverter const &obj);
        virtual ~ScalarConverter() = 0;
        ScalarConverter &operator=(ScalarConverter const &obj);

        static void convert(std::string const &value);
};

#endif
