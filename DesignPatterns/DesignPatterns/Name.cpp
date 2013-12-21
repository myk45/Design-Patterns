#include "Name.h"

Name::Name()
{

}

Name::Name( const std::string& nameFirst, const std::string& nameLast )
{
    _firstName = nameFirst;
    _lastName  = nameLast;
}

Name::~Name()
{

}
