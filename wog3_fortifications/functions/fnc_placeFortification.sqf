
#include "script_component.hpp"

params ["_unit", "_objClass", "_placePosArray", "_canFixPos"];

[_unit, "forceWalk", "ACE_Fortifications", true] call EFUNC(common,statusEffect_set);

//private _classObjGeo = getText (configFile >> "CfgVehicles" >> _objClass >> QGVAR(finalObj));
//GVAR(classObjGeo) = _classObjGeo;

//private _fortObj = createVehicle [_objClass, [0, 0, 0], [], 0, "NONE"];

private _fortObj = _objClass createVehicleLocal [0,0,0];
_fortObj disableCollisionWith _unit;

GVAR(fortObj) = _fortObj;
GVAR(canFixPos) = _canFixPos;

[QEGVAR(common,enableSimulationGlobal), [_fortObj, false]] call CBA_fnc_serverEvent;

GVAR(placeDirection) = 0;

GVAR(placePFH) = [{
	(_this select 0) params ["_unit", "_fortObj", "_placePosArray"];
	
	_placePosArray params ["_dx", "_dz", "_dy"];
	
	if (isNull _fortObj) exitWith
	{
		[_unit] call FUNC(placeFortificationCancel);
	};
	
	_fortObj setPosASL (eyePos _unit vectorAdd (positionCameraToWorld [_dx,_dz,_dy] vectorDiff positionCameraToWorld [0,0,0]));
	_fortObj setDir (GVAR(placeDirection) + getDir _unit + 180);

}, 0, [_unit, _fortObj, _placePosArray]] call CBA_fnc_addPerFrameHandler;

[localize LSTRING(confirmPlace), localize LSTRING(cancelPlace), localize LSTRING(rotateAndPlace)] call EFUNC(interaction,showMouseHint);

_unit setVariable [QGVAR(Place), [
	_unit, "DefaultAction",
	{GVAR(placePFH) != -1},
	{[_this select 0] call FUNC(placeFortificationConfirm)}
] call EFUNC(common,addActionEventHandler)];

_unit setVariable [QGVAR(isPlacing), true, true];