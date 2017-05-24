#include "script_component.hpp"

params ["_unit"];

if (_unit getVariable [QGVAR(isPlacing), false]) then
{
	if !("Toolkit" in items _unit) then
	{
		[_unit] call FUNC(placeFortificationCancel);
	};
};