#pragma once

#include <string>

class Name {
public:
   Name();
   Name( const std::string& nameFirst, const std::string& nameLast );
   ~Name();

   const std::string& getFirstName() const { return _firstName; }
   const std::string& getLastName() const  { return _lastName; }

   void setFirstName( const std::string& fName )  { _firstName = fName; }
   void setLastName(  const std::string& lName )  { _lastName  = lName; }


private:
   std::string _firstName;
   std::string _lastName;
};