/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yookamot <yookamot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 18:43:02 by yookamot          #+#    #+#             */
/*   Updated: 2025/08/06 21:49:14 by yookamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug() const {
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info() const {
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning() const {
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << std::endl;
}

void Harl::error() const {
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

struct Output {
    std::string level;
    void (Harl::*func)() const;
};

void Harl::complain(const std::string& level) const {
    Output outputs[] = {
        {"DEBUG", &Harl::debug},
        {"INFO", &Harl::info},
        {"WARNING", &Harl::warning},
        {"ERROR", &Harl::error}
    };
    int id = -1;
    for (int i = 0; i < 4; i++) {
        if (level == outputs[i].level) {
            id = i;
            break ;
        }
    }
    switch (id) {
        case 0:
            std::cout << "[ " << outputs[0].level << " ]" << std::endl;
            (this->*outputs[0].func)();
            std::cout << std::endl;
        case 1:
            std::cout << "[ " << outputs[1].level << " ]" << std::endl;
            (this->*outputs[1].func)();
            std::cout << std::endl;
        case 2:
            std::cout << "[ " << outputs[2].level << " ]" << std::endl;
            (this->*outputs[2].func)();
            std::cout << std::endl;
        case 3:
            std::cout << "[ " << outputs[3].level << " ]" << std::endl;
            (this->*outputs[3].func)();
            std::cout << std::endl;
            break ;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
            break ;
    }
}
