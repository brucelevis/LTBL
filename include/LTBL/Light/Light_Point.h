/*
	Let There Be Light
	Copyright (C) 2012 Eric Laukien

	This software is provided 'as-is', without any express or implied
	warranty.  In no event will the authors be held liable for any damages
	arising from the use of this software.

	Permission is granted to anyone to use this software for any purpose,
	including commercial applications, and to alter it and redistribute it
	freely, subject to the following restrictions:

	1. The origin of this software must not be misrepresented; you must not
		claim that you wrote the original software. If you use this software
		in a product, an acknowledgment in the product documentation would be
		appreciated but is not required.
	2. Altered source versions must be plainly marked as such, and must not be
		misrepresented as being the original software.
	3. This notice may not be removed or altered from any source distribution.
*/

#ifndef LTBL_LIGHT_POINT_H
#define LTBL_LIGHT_POINT_H

#include <LTBL/Light/Light.h>

namespace ltbl
{
	class Light_Point :
		public Light
	{
	public:
		float m_directionAngle;
		float m_spreadAngle;
		float m_softSpreadAngle;

		float m_lightSubdivisionSize;

		Light_Point();
		~Light_Point();

		void SetDirectionAngle(float directionAngle);
		void IncDirectionAngle(float increment);
		float GetDirectionAngle();

		void SetSpreadAngle(float spreadAngle);
		void IncSpreadAngle(float increment);
		float GetSpreadAngle();

		// Inherited
		void RenderLightSolidPortion();
		void RenderLightSoftPortion();
		void CalculateAABB();
	};
}

#endif
