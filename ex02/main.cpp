/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yookamot <yookamot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 23:47:46 by yookamot          #+#    #+#             */
/*   Updated: 2025/08/04 23:54:44 by yookamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main() {
    std::string str = "HI THIS IS BRAIN";
    std::string* stringPTR = &str;
    std::string& stringREF = str;
    std::cout << "Address of brain:      " << &str << std::endl;
    std::cout << "Address held by PTR:   " << stringPTR << std::endl;
    std::cout << "Address held by REF:   " << &stringREF << std::endl;
    std::cout << "Value of brain:        " << str << std::endl;
    std::cout << "Value pointed by PTR:  " << *stringPTR << std::endl;
    std::cout << "Value referred by REF: " << stringREF << std::endl;
    return 0;
}
