// ---------------------------------------------------------------------
// THIS FILE IS AUTO-GENERATED BY BEHAVIAC DESIGNER, SO PLEASE DON'T MODIFY IT BY YOURSELF!
// ---------------------------------------------------------------------

#ifndef _BEHAVIAC_CUSTOMIZED_TYPES_H_
#define _BEHAVIAC_CUSTOMIZED_TYPES_H_

#include "behaviac/agent/agent.h"

// -------------------
// Customized structs
// -------------------

BEHAVIAC_EXTEND_EXISTING_TYPE_EX(FirstStruct, false);
BEHAVIAC_DECLARE_TYPE_VECTOR_HANDLER(FirstStruct);

template< typename SWAPPER >
inline void SwapByteImplement(FirstStruct& v)
{
	SwapByteImplement< SWAPPER >(v.s1);
	SwapByteImplement< SWAPPER >(v.s2);
}

namespace behaviac
{
	namespace PrivateDetails
	{
		template<>
		inline bool Equal(const FirstStruct& lhs, const FirstStruct& rhs)
		{
			return Equal(lhs.s1, rhs.s1)
				&& Equal(lhs.s2, rhs.s2);
		}
	}
}

#endif // _BEHAVIAC_CUSTOMIZED_TYPES_H_
