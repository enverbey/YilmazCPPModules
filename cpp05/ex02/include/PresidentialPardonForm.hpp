/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enveryilmaz <enveryilmaz@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 17:21:51 by Mr. Norkum        #+#    #+#             */
/*   Updated: 2024/02/28 12:39:55 by enveryilmaz      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"
# include "Bureaucrat.hpp"
# include <fstream>

using std::ofstream;

class Bureaucrat;
class AForm;

class PresidentialPardonForm : public AForm
{
public:
	//Orthodox Canonical Form
	PresidentialPardonForm(const string target);
	PresidentialPardonForm(const PresidentialPardonForm& copy);
	~PresidentialPardonForm(void);
	PresidentialPardonForm& operator=(const PresidentialPardonForm& other);

	//Setters and Getters
	void			setTarget(const string target);
	const string&	getTarget(void) const;

	//Member functions
	void	execute(Bureaucrat const& executor) const;
private:
		const string	_target;
		PresidentialPardonForm(void);
};

ostream&	operator<<(ostream& o, const PresidentialPardonForm& f);

#endif