#include "script_component.hpp"

if (isServer) then
{
	addMissionEventHandler ["HandleDisconnect", {_this call FUNC(handleKilled)}];
};

if (!hasInterface) exitWith {};

GVAR(fortObj) = objNull;
GVAR(placePFH) = -1;
GVAR(placeDirection) = 0;

["ace_interactMenuOpened", {[ACE_player] call FUNC(handleInteractMenuOpened)}] call CBA_fnc_addEventHandler;
["loadout", {_this call FUNC(handlePlayerInventoryChanged)}] call CBA_fnc_addEventHandler;
["unit", {_this call FUNC(handlePlayerChanged)}] call CBA_fnc_addEventHandler;
["vehicle", {[ACE_player, objNull] call FUNC(handlePlayerChanged)}] call CBA_fnc_addEventHandler;
["ace_unconscious", {_this call FUNC(handleUnconscious)}] call CBA_fnc_addEventHandler;