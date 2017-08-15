#include "script_component.hpp"

params ["_unit"];

_unit = player;
if !("ToolKit" in items _unit) exitWith {false};
/*
if !([_unit, 1] call EFUNC(repair,isEngineer)) exitWith {false};
*/
true