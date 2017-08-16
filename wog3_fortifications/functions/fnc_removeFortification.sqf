#include "script_component.hpp"

params ["_object"];

private _fnc_onFinish =
{
	(_this select 0) params ["_obj"];
	deleteVehicle _obj;
};

_removeDuration = floor((getNumber (configFile >> "CfgVehicles" >> typeOf _object >> QGVAR(buildDuration)))/2);
_objSide = _object getVariable [QGVAR(ownerSide), nil];
if !(isNil "_objSide") then
{
	if (side player != _objSide) then
	{
		_removeDuration = _removeDuration * 4;
	};
};
[_removeDuration, [_object], _fnc_onFinish, {}, localize LSTRING(removeProcess)] call EFUNC(common,progressBar);