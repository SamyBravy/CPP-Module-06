/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samuele <samuele@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 22:39:11 by samuele           #+#    #+#             */
/*   Updated: 2024/12/23 22:57:48 by samuele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "GenerateAndIdentify.hpp"

int main()
{
    std::cout << "Random 1: " << std::endl;
    Base *base = generate();
    identify(base);
    identify(*base);
    delete base;

    std::cout << std::endl;

    std::cout << "Random 2: " << std::endl;
    Base *base2 = generate();
    identify(base2);
    identify(*base2);
    delete base2;

    std::cout << std::endl;

    std::cout << "A: " << std::endl;
    A a;
    identify(&a);
    identify(a);

    std::cout << std::endl;

    std::cout << "B: " << std::endl;
    B b;
    identify(&b);
    identify(b);

    std::cout << std::endl;

    std::cout << "C: " << std::endl;
    C c;
    identify(&c);
    identify(c);

    std::cout << std::endl;
    
    std::cout << "Base: " << std::endl;
    Base base4;
    identify(&base4);
    identify(base4);

    std::cout << std::endl;

    std::cout << "NULL: " << std::endl;
    Base *base3 = NULL;
    identify(base3);
    identify(*base3);
    
    return 0;
}
