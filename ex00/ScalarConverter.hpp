/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdell-er <sdell-er@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 00:20:16 by samuele           #+#    #+#             */
/*   Updated: 2024/12/23 19:11:42 by sdell-er         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <sstream>
# include <string>
# include <climits>
# include <iomanip>

enum e_type
{
	CHAR,
	INT,
	FLOAT,
	DOUBLE,
	PSEUDO,
	INVALID
};

class ScalarConverter
{
    private:
        ScalarConverter();
        ScalarConverter(ScalarConverter const &obj);
		static e_type getType(std::string const &value);
		static bool checkInvalid(std::string const &value);
		static int getPrecision(std::string const &value);
		static void charConvert(std::string const &value);
		static void numberConvert(std::string const &value);
		static void pseudoConvert(std::string const &value);
    
    public:
        ~ScalarConverter();
        ScalarConverter &operator=(ScalarConverter const &obj);

        static void convert(std::string const &value);
};

int stringToInt(const std::string &str);
float stringToFloat(const std::string &str);
double stringToDouble(const std::string &str);

#endif
