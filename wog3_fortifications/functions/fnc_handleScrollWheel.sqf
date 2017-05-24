#include "script_component.hpp"

if (GVAR(placePFH) == -1) exitWith {false};

params ["_scroll"];

GVAR(placeDirection) = GVAR(placeDirection) + (_scroll * 5);

true