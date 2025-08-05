/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yookamot <yookamot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 13:27:21 by yookamot          #+#    #+#             */
/*   Updated: 2025/08/05 14:10:03 by yookamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon:: Weapon(const std::string& type) : type(type) {}

std::string Weapon::getType() const {
    return this->type;
}

void Weapon::setType(const std::string& type) {
    this->type = type;
}
