/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanselbayraktaroglu <tanselbayraktarogl    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 16:31:16 by tanselbayra       #+#    #+#             */
/*   Updated: 2025/10/20 16:34:55 by tanselbayra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <string>

class Harl {

private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);

public:
	Harl(void);
	~Harl(void);

	void complain(std::string leve);
};

#endif