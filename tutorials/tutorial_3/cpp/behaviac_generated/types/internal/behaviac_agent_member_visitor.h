// ---------------------------------------------------------------------
// THIS FILE IS AUTO-GENERATED BY BEHAVIAC DESIGNER, SO PLEASE DON'T MODIFY IT BY YOURSELF!
// ---------------------------------------------------------------------

#ifndef _BEHAVIAC_MEMBER_VISITOR_H_
#define _BEHAVIAC_MEMBER_VISITOR_H_

#include "behaviac_agent_headers.h"

// Agent property and method handlers


struct PROPERTY_TYPE_FirstAgent_p1 { };
template<> inline int& FirstAgent::_Get_Property_<PROPERTY_TYPE_FirstAgent_p1>()
{
	return this->p1;
}

struct PROPERTY_TYPE_FirstAgent_pInstance { };
template<> inline SecondAgent*& FirstAgent::_Get_Property_<PROPERTY_TYPE_FirstAgent_pInstance>()
{
	return this->pInstance;
}


struct PROPERTY_TYPE_SecondAgent_p2 { };
template<> inline int& SecondAgent::_Get_Property_<PROPERTY_TYPE_SecondAgent_p2>()
{
	return this->p2;
}


#endif // _BEHAVIAC_MEMBER_VISITOR_H_
