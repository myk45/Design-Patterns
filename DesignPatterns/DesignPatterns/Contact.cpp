#include <iostream>
#include "Contact.h"

Contact::Contact()
{

}

Contact::Contact( const Name& name, const Phone& phone )
{
   _name = name;
   _phone = phone;
}

Contact::Contact( const Name& name )
{
   _name = name;
}

Contact::~Contact()
{

}

void Contact::display() const
{
   std::cout << "\nFirst name: " << _name.getFirstName();
   std::cout << "\nLast name: " << _name.getLastName();

   _phone.display();
}
