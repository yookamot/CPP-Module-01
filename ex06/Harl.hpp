/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yookamot <yookamot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 18:41:52 by yookamot          #+#    #+#             */
/*   Updated: 2025/08/06 21:18:17 by yookamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <string>
#include <iostream>

class Harl {
    private:
        void debug() const;
        void info() const;
        void warning() const;
        void error() const;

    public:
        void complain(const std::string& level) const;
};

#endif