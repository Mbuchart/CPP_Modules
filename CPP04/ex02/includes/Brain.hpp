#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
	public:

		Brain();
		Brain(const Brain &other);
		Brain &operator=(const Brain &other);
		virtual ~Brain();

		bool 				checkIndex(int index) const;

		const std::string&	getIdeas(int index) const;
		void 				setIdeas(int index, const std::string& str);

	private:

		std::string ideas[100];
};

#endif