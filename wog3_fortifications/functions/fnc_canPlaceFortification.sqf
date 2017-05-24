#include "script_component.hpp"

params ["_unit"];

if !("ToolKit" in items _unit) exitWith {false};
if !([_unit, 1] call EFUNC(repair,isEngineer)) exitWith {false};

private ["_nearObjects", "_return"];

_nearObjects = nearestObjects [_unit, ["Air","LandVehicle"], 30];

_return = false;
{
    if ([_x] call EFUNC(repair,isRepairVehicle)) exitWith {_return = true;};
} forEach _nearObjects;

_return;