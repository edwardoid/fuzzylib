#ifndef FL_POWER_CHARACTERISTIC_FUNCTION_H
#define FL_POWER_CHARACTERISTIC_FUNCTION_H

#include "FuzzyLib.h"
#include "CharacteristicFunction.h"
#include "Real.h"

class FL_EXPORT PowerCharacteristicFunction :
	public CharacteristicFunction
{
public:
	PowerCharacteristicFunction(Real exponenta);
	PowerCharacteristicFunction(CharacteristicFunction::CharacteristicFunctionPtr arg, Real exponenta);
	virtual ~PowerCharacteristicFunction();
	virtual Real operator () (const Real val);
private:
	Real m_exp;
	CharacteristicFunction::CharacteristicFunctionPtr m_arg;
};

#endif // FL_POWER_CHARACTERISTIC_FUNCTION_H