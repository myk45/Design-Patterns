#pragma once

#include <vector>

#include "Address.h"
#include "Name.h"
#include "Phone.h"

class Contact {
public:
   Contact();
   Contact( const Name& name, const Phone& phone );
   Contact( const Name& name );
   ~Contact();

   const Name& getName() const { return _name; }; 
   void display() const;

private:
   Name                 _name;
   Address              _address;
   //std::vector< Phone > _phone; // one or many
  Phone                 _phone; // one or many
};