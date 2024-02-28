/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enveryilmaz <enveryilmaz@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 17:21:51 by Mr. Norkum        #+#    #+#             */
/*   Updated: 2024/02/28 12:11:26 by enveryilmaz      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"
# include "Bureaucrat.hpp"
# include <fstream>

using std::ofstream;

class Bureaucrat;
class AForm;

class ShrubberyCreationForm : public AForm
{
public:
	//Orthodox Canonical Form
	ShrubberyCreationForm(const string target);
	ShrubberyCreationForm(const ShrubberyCreationForm& copy);
	~ShrubberyCreationForm(void);
	ShrubberyCreationForm& operator=(const ShrubberyCreationForm& other);

	//Setters and Getters
	void			setTarget(const string target);
	const string&	getTarget(void) const;

	//Member functions
	void	execute(Bureaucrat const& executor) const;
private:
		const string	_target;
		ShrubberyCreationForm(void);
};

ostream&	operator<<(ostream& o, const ShrubberyCreationForm& f);

#endif