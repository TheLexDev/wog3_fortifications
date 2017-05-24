#include "script_component.hpp"

params ["_unit"];

if (_unit getVariable [QGVAR(isPlacing), false]) then
{
	[_unit] call FUNC(placeFortificationCancel);
};