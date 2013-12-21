#pragma once

#include <string>

class Address {
public:
   Address();
   ~Address();

private:
   std::string _city;
   std::string _location;
   std::string _pinCode;
};