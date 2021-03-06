#ifndef FL_SINE_CURVE_CHARACTERISTIC_FUNCTION_H
#define FL_SINE_CURVE_CHARACTERISTIC_FUNCTION_H

#include "FuzzyLib.h"
#include "CharacteristicFunction.h"

class FL_EXPORT SineCurveCharacteristicFunction :
	public CharacteristicFunction
{
public:
	SineCurveCharacteristicFunction(Real dy = 0, Real dx = 0, Real yScale = 1, Real xScale = 1);
	virtual ~SineCurveCharacteristicFunction();
	virtual Real operator () (const Real val) { return m_dy + m_scaleY * sin(m_dx + m_scaleX * val); }
private:
	Real m_dy;
	Real m_scaleY;
	Real m_dx;
	Real m_scaleX;
};

class FL_EXPORT SinusCharacteristicFunction :
	public CharacteristicFunction
{
public:
	SinusCharacteristicFunction() {};
	virtual Real operator () (const Real val) { return sin(val); }
};


class FL_EXPORT CosinusCharacteristicFunction :
	public CharacteristicFunction
{
public:
	CosinusCharacteristicFunction() {};
	virtual Real operator () (const Real val) { return cos(3.14159265 + val); }
};

#endif