/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yookamot <yookamot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 18:43:12 by yookamot          #+#    #+#             */
/*   Updated: 2025/08/05 19:25:44 by yookamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv) {
    if (argc != 2){
        std::cerr << "Error: invalid number of arguments." << std::endl;
        return 1;
    }
    Harl harl;
    harl.complain((std::string)argv[1]);
    return 0;
}
