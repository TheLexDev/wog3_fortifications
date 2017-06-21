#include "script_component.hpp"

params ["_unit", ["_key", -1]];

if !(_unit call FUNC(canPlaceFortification)) exitWith {hint "Too far from the repair truck!"; [_unit] call FUNC(placeFortificationCancel);};

[_unit, "forceWalk", "ACE_Fortifications", false] call EFUNC(common,statusEffect_set);

[GVAR(placePFH)] call CBA_fnc_removePerFrameHandler;
GVAR(placePFH) = -1;

call EFUNC(interaction,hideMouseHint);

[_unit, "DefaultAction", _unit getVariable [QGVAR(Place), -1]] call EFUNC(common,removeActionEventHandler);

_unit setVariable [QGVAR(isPlacing), false, true];

[QEGVAR(common,enableSimulationGlobal), [GVAR(fortObj), true]] call CBA_fnc_serverEvent;

if !(GVAR(canFixPos) && _key == 2) then
{
	if (_key == 2) then {hint "The object can be placed only on surface!";};
	[QEGVAR(common,fixPosition), GVAR(fortObj), GVAR(fortObj)] call CBA_fnc_targetEvent;
	[QEGVAR(common,fixFloating), GVAR(fortObj), GVAR(fortObj)] call CBA_fnc_targetEvent;
};

private _fnc_onFinish =
{
	(_this select 0) params ["_unit", "_obj"];
	[_unit, "", 1] call EFUNC(common,doAnimation);
	
	_position = getPosASL GVAR(fortObj);
	_direction = [vectorDir GVAR(fortObj),vectorUp GVAR(fortObj)];
	_classname = typeOf GVAR(fortObj);
	
	deleteVehicle GVAR(fortObj);
	
	_newObj = createVehicle [_classname, [0, 0, 0], [], 0, "NONE"];
	_newObj setVectorDirAndUp _direction;
	_newObj setPosASL _position;
	
};
private _fnc_onFailure =
{
	(_this select 0) params ["_unit", "_obj"];
	deleteVehicle GVAR(fortObj);
	GVAR(fortObj) = objNull;
	[_unit, "", 1] call EFUNC(common,doAnimation);
};

[_unit, "AinvPknlMstpSnonWnonDnon_medic4"] call EFUNC(common,doAnimation);
_buildDuration = getNumber (configFile >> "CfgVehicles" >> typeOf GVAR(fortObj) >> QGVAR(buildDuration));
[_buildDuration, [_unit, GVAR(fortObj)], _fnc_onFinish, _fnc_onFailure, localize LSTRING(buildingProcess)] call EFUNC(common,progressBar);

_unit setVariable [QGVAR(isPlacing), false, true];