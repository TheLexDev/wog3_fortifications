class CBA_Extended_EventHandlers;

class CfgVehicles
{
	class Man;
	class CAManBase: Man
	{
		class ACE_SelfActions
		{
			class ACE_Fortifications
			{
				displayName = CSTRING(buildFortification);
				condition = QUOTE(_this call FUNC(canPlaceFortification));
				priority = 8;
				showDisabled = 0;
				icon = "z\ace\addons\wog3_fortifications\data\ui\action_icon.paa";
				
				class ACE_BagBunker_category
				{
					displayName = CSTRING(bagBunkerCat);
					condition = "true";
					priority = 4;
					showDisabled = 0;
					icon = "z\ace\addons\sandbag\UI\icon_sandbag_ca.paa";
					
					class ACE_BagBunker_Small
					{
						displayName = CSTRING(bagBunkerSmall);
						condition = QUOTE(_this call FUNC(canPlaceFortification));
						statement = QUOTE([ARR_2({_this call FUNC(placeFortification)},[ARR_4(_this select 0,'Land_BagBunker_Small_F',[0,-1,3.9],false)])] call CBA_fnc_execNextFrame);
						exceptions[] = {"isNotSwimming"};
						showDisabled = 0;
						priority = 4;
						icon = "z\ace\addons\sandbag\UI\icon_sandbag_ca.paa";
					};
				};
				
				class ACE_BagFence_category
				{
					displayName = CSTRING(bagFenceCat);
					condition = "true";
					priority = 4;
					showDisabled = 0;
					icon = "z\ace\addons\sandbag\UI\icon_sandbag_ca.paa";
					
					class ACE_BagFence_Long
					{
						displayName = CSTRING(bagFenceLong);
						condition = QUOTE(_this call FUNC(canPlaceFortification));
						statement = QUOTE([ARR_2({_this call FUNC(placeFortification)},[ARR_4(_this select 0,'Land_BagFence_Long_F',[0,-0.1,2.5],true)])] call CBA_fnc_execNextFrame);
						exceptions[] = {"isNotSwimming"};
						showDisabled = 0;
						priority = 4;
						icon = "z\ace\addons\sandbag\UI\icon_sandbag_ca.paa";
					};
					
					class ACE_BagFence_Short
					{
						displayName = CSTRING(bagFenceShort);
						condition = QUOTE(_this call FUNC(canPlaceFortification));
						statement = QUOTE([ARR_2({_this call FUNC(placeFortification)},[ARR_4(_this select 0,'Land_BagFence_Short_F',[0,-0.1,2.5],true)])] call CBA_fnc_execNextFrame);
						exceptions[] = {"isNotSwimming"};
						showDisabled = 0;
						priority = 4;
						icon = "z\ace\addons\sandbag\UI\icon_sandbag_ca.paa";
					};
					
					class ACE_BagFence_Round
					{
						displayName = CSTRING(bagFenceRound);
						condition = QUOTE(_this call FUNC(canPlaceFortification));
						statement = QUOTE([ARR_2({_this call FUNC(placeFortification)},[ARR_4(_this select 0,'Land_BagFence_Round_F',[0,-0.1,2.5],true)])] call CBA_fnc_execNextFrame);
						exceptions[] = {"isNotSwimming"};
						showDisabled = 0;
						priority = 4;
						icon = "z\ace\addons\sandbag\UI\icon_sandbag_ca.paa";
					};
					
					class ACE_BagFence_Corner
					{
						displayName = CSTRING(bagFenceCorner);
						condition = QUOTE(_this call FUNC(canPlaceFortification));
						statement = QUOTE([ARR_2({_this call FUNC(placeFortification)},[ARR_4(_this select 0,'Land_BagFence_Corner_F',[0,-0.1,2.5],true)])] call CBA_fnc_execNextFrame);
						exceptions[] = {"isNotSwimming"};
						showDisabled = 0;
						priority = 4;
						icon = "z\ace\addons\sandbag\UI\icon_sandbag_ca.paa";
					};
					
					class ACE_BagFence_End
					{
						displayName = CSTRING(bagFenceEnd);
						condition = QUOTE(_this call FUNC(canPlaceFortification));
						statement = QUOTE([ARR_2({_this call FUNC(placeFortification)},[ARR_4(_this select 0,'Land_BagFence_End_F',[0,-0.1,2.5],true)])] call CBA_fnc_execNextFrame);
						exceptions[] = {"isNotSwimming"};
						showDisabled = 0;
						priority = 4;
						icon = "z\ace\addons\sandbag\UI\icon_sandbag_ca.paa";
					};
				};
				
				class ACE_CamoNet_category
				{
					displayName = CSTRING(camoNetCat);
					condition = "true";
					priority = 4;
					showDisabled = 0;
					icon = "z\ace\addons\sandbag\UI\icon_sandbag_ca.paa";
				
					class ACE_CamoNet_Small
					{
						displayName = CSTRING(camoNetSmall);
						condition = QUOTE(_this call FUNC(canPlaceFortification));
						statement = QUOTE([ARR_2({_this call FUNC(placeFortification)},[ARR_4(_this select 0,'CamoNet_BLUFOR_F',[0,-1,4.5],false)])] call CBA_fnc_execNextFrame);
						exceptions[] = {"isNotSwimming"};
						showDisabled = 0;
						priority = 4;
						icon = "z\ace\addons\sandbag\UI\icon_sandbag_ca.paa";
					};
					
					class ACE_CamoNet_Small_Opened
					{
						displayName = CSTRING(camoNetSmallOpened);
						condition = QUOTE(_this call FUNC(canPlaceFortification));
						statement = QUOTE([ARR_2({_this call FUNC(placeFortification)},[ARR_4(_this select 0,'CamoNet_BLUFOR_open_F',[0,-1,4.5],false)])] call CBA_fnc_execNextFrame);
						exceptions[] = {"isNotSwimming"};
						showDisabled = 0;
						priority = 4;
						icon = "z\ace\addons\sandbag\UI\icon_sandbag_ca.paa";
					};
					
					class ACE_CamoNet_Large
					{
						displayName = CSTRING(camoNetLarge);
						condition = QUOTE(_this call FUNC(canPlaceFortification));
						statement = QUOTE([ARR_2({_this call FUNC(placeFortification)},[ARR_4(_this select 0,'CamoNet_BLUFOR_big_F',[0,-1,4.5],false)])] call CBA_fnc_execNextFrame);
						exceptions[] = {"isNotSwimming"};
						showDisabled = 0;
						priority = 4;
						icon = "z\ace\addons\sandbag\UI\icon_sandbag_ca.paa";
					};
				};
			};
		};
	};
};