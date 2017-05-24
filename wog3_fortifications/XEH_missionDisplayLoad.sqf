#include "script_component.hpp"

params ["_display"];

//_display displayAddEventHandler ["MouseZChanged", {(_this select 1) call compile preprocessFileLineNumbers "functions\fnc_handleScrollWheel.sqf"}];
//_display displayAddEventHandler ["MouseButtonDown", {[_player, _this select 1] call compile preprocessFileLineNumbers "functions\fnc_placeCancel.sqf"}];

_display displayAddEventHandler ["MouseZChanged", {(_this select 1) call FUNC(handleScrollWheel)}];
_display displayAddEventHandler ["MouseButtonDown", {[ACE_player, _this select 1] call FUNC(placeFortificationCancel)}];