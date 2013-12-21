#pragma once

#include <string>
#include <iostream>

class Phone {
public:
   Phone();
   Phone( const std::string& isd, const std::string& stdCode, const std::string& num );
   ~Phone();

   void display() const;

private:
   std::string _std;
   std::string _isd;
   std::string _number;
};