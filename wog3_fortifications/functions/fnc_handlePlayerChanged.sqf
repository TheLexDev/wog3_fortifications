#include "script_component.hpp"

params ["_newPlayer", "_oldPlayer"];

if (_newPlayer getVariable [QGVAR(isPlacing), false]) then
{
	[_newPlayer] call FUNC(placeFortificationCancel);
};

if (_oldPlayer getVariable [QGVAR(isPlacing), false]) then
{
	[_oldPlayer] call FUNC(placeFortificationCancel);
};