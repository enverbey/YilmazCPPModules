/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enveryilmaz <enveryilmaz@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 17:21:51 by Mr. Norkum        #+#    #+#             */
/*   Updated: 2024/02/28 12:28:33 by enveryilmaz      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"
# include "Bureaucrat.hpp"
# include <fstream>

using std::ofstream;

class Bureaucrat;
class AForm;

class RobotomyRequestForm : public AForm
{
public:
	//Orthodox Canonical Form
	RobotomyRequestForm(const string target);
	RobotomyRequestForm(const RobotomyRequestForm& copy);
	~RobotomyRequestForm(void);
	RobotomyRequestForm& operator=(const RobotomyRequestForm& other);

	//Setters and Getters
	void			setTarget(const string target);
	const string&	getTarget(void) const;

	//Member functions
	void	execute(Bureaucrat const& executor) const;
private:
		const string	_target;
		RobotomyRequestForm(void);
};

ostream&	operator<<(ostream& o, const RobotomyRequestForm& f);

#endif