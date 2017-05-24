#include "script_component.hpp"

params ["_unit", "_key"];

if (_key == 2 && {GVAR(placePFH) != -1}) exitWith {[_unit, _key] call FUNC(placeFortificationConfirm);};

if (_key != 1 || {GVAR(placePFH) == -1}) exitWith {};

[_unit, "forceWalk", "ACE_Fortifications", false] call EFUNC(common,statusEffect_set);

deleteVehicle GVAR(fortObj);

[GVAR(placePFH)] call CBA_fnc_removePerFrameHandler;
GVAR(placePFH) = -1;

call EFUNC(interaction,hideMouseHint);

[_unit, "DefaultAction", _unit getVariable [QGVAR(Place), -1]] call EFUNC(common,removeActionEventHandler);

_unit setVariable [QGVAR(isPlacing), false, true];