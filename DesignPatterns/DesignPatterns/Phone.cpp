#include "Phone.h"

Phone::Phone()
{

}

Phone::Phone( const std::string& isd, const std::string& stdCode, const std::string& num )
{
   _isd = isd;
   _std = stdCode;
   _number = num;
}

Phone::~Phone()
{

}

void Phone::display() const
{
   std::cout << "\nPhone:";
   std::cout << " " << _isd;
   std::cout << " " << _std;
   std::cout << " " << _number;
}
