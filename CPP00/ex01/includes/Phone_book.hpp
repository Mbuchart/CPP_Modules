#ifndef PHONE_BOOK_HPP
#define PHONE_BOOK_HPP

#include "Contact.hpp"

class Phone_book
{
    public:
        Phone_book();
        bool	is_full() const;
        void	add(Contact *ct);
        void	print_contact() const;
        void	get_contact(int i) const;
        void	search_contact() const;
		void    add_contact( void );
    private:
        int     m_num_contact;
		int		_oldest_contact;
        Contact contact[8];
};

#endif