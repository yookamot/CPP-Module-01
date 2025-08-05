/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yookamot <yookamot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 21:57:47 by yookamot          #+#    #+#             */
/*   Updated: 2025/08/05 15:04:04 by yookamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sstream>
#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

static int stringToInt(const char *str) {
    int num = 0;
    std::stringstream ss(str);
    ss >> num;
    if (ss.fail())
        throw std::invalid_argument("not a valid number or out of int range.");
    if (!ss.eof())
        throw std::invalid_argument("extra characters after number.");
    return num;
}

int main(int argc, char **argv) {
    if (argc != 3) {
        std::cerr << "Error: invalid number of arguments." << std::endl;
        return 1;
    }
    int number = 0;
    try {
        number = stringToInt(argv[1]);
    } catch (const std::exception& e) {
        std::cerr << "Invalid input: " << e.what() << std::endl;
        return 1;
    }
    if (number <= 0) {
        std::cerr << "Invalid input: Number must be positive." << std::endl;
        return 1;
    }
    Zombie* horde = zombieHorde(number, argv[2]);
    if (!horde)
        return 1;
    for (int i = 0; i < number; i++) {
        horde[i].announce();
    }
    delete[] horde;
    return 0;
}
