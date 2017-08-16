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
						statement = QUOTE([ARR_2({_this call FUNC(placeFortification)},[ARR_4(_this select 0,'lex_Land_BagBunker_Small_F',[0,-1,3.9],false)])] call CBA_fnc_execNextFrame);
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
						statement = QUOTE([ARR_2({_this call FUNC(placeFortification)},[ARR_4(_this select 0,'lex_Land_BagFence_Long_F',[0,-0.1,2.5],true)])] call CBA_fnc_execNextFrame);
						exceptions[] = {"isNotSwimming"};
						showDisabled = 0;
						priority = 4;
						icon = "z\ace\addons\sandbag\UI\icon_sandbag_ca.paa";
					};
					
					class ACE_BagFence_Short
					{
						displayName = CSTRING(bagFenceShort);
						condition = QUOTE(_this call FUNC(canPlaceFortification));
						statement = QUOTE([ARR_2({_this call FUNC(placeFortification)},[ARR_4(_this select 0,'lex_Land_BagFence_Short_F',[0,-0.1,2.5],true)])] call CBA_fnc_execNextFrame);
						exceptions[] = {"isNotSwimming"};
						showDisabled = 0;
						priority = 4;
						icon = "z\ace\addons\sandbag\UI\icon_sandbag_ca.paa";
					};
					
					class ACE_BagFence_Round
					{
						displayName = CSTRING(bagFenceRound);
						condition = QUOTE(_this call FUNC(canPlaceFortification));
						statement = QUOTE([ARR_2({_this call FUNC(placeFortification)},[ARR_4(_this select 0,'lex_Land_BagFence_Round_F',[0,-0.1,2.5],true)])] call CBA_fnc_execNextFrame);
						exceptions[] = {"isNotSwimming"};
						showDisabled = 0;
						priority = 4;
						icon = "z\ace\addons\sandbag\UI\icon_sandbag_ca.paa";
					};
					
					class ACE_BagFence_Corner
					{
						displayName = CSTRING(bagFenceCorner);
						condition = QUOTE(_this call FUNC(canPlaceFortification));
						statement = QUOTE([ARR_2({_this call FUNC(placeFortification)},[ARR_4(_this select 0,'lex_Land_BagFence_Corner_F',[0,-0.1,2.5],true)])] call CBA_fnc_execNextFrame);
						exceptions[] = {"isNotSwimming"};
						showDisabled = 0;
						priority = 4;
						icon = "z\ace\addons\sandbag\UI\icon_sandbag_ca.paa";
					};
					
					class ACE_BagFence_End
					{
						displayName = CSTRING(bagFenceEnd);
						condition = QUOTE(_this call FUNC(canPlaceFortification));
						statement = QUOTE([ARR_2({_this call FUNC(placeFortification)},[ARR_4(_this select 0,'lex_Land_BagFence_End_F',[0,-0.1,2.5],true)])] call CBA_fnc_execNextFrame);
						exceptions[] = {"isNotSwimming"};
						showDisabled = 0;
						priority = 4;
						icon = "z\ace\addons\sandbag\UI\icon_sandbag_ca.paa";
					};
					
					class ACE_Sandbag_Barricade_hole
					{
						displayName = CSTRING(sandbag_barricade_hole);
						condition = QUOTE(_this call FUNC(canPlaceFortification));
						statement = QUOTE([ARR_2({_this call FUNC(placeFortification)},[ARR_4(_this select 0,'lex_Land_SandbagBarricade_01_hole_F',[0,-0.1,3.5],true)])] call CBA_fnc_execNextFrame);
						exceptions[] = {"isNotSwimming"};
						showDisabled = 0;
						priority = 4;
						icon = "z\ace\addons\sandbag\UI\icon_sandbag_ca.paa";
					};
					
					class ACE_Sandbag_Barricade
					{
						displayName = CSTRING(sandbag_barricade);
						condition = QUOTE(_this call FUNC(canPlaceFortification));
						statement = QUOTE([ARR_2({_this call FUNC(placeFortification)},[ARR_4(_this select 0,'lex_Land_SandbagBarricade_01_F',[0,-0.1,3.5],true)])] call CBA_fnc_execNextFrame);
						exceptions[] = {"isNotSwimming"};
						showDisabled = 0;
						priority = 4;
						icon = "z\ace\addons\sandbag\UI\icon_sandbag_ca.paa";
					};
					
					class ACE_Sandbag_Barricade_half
					{
						displayName = CSTRING(sandbag_barricade_half);
						condition = QUOTE(_this call FUNC(canPlaceFortification));
						statement = QUOTE([ARR_2({_this call FUNC(placeFortification)},[ARR_4(_this select 0,'lex_Land_SandbagBarricade_01_half_F',[0,-0.1,3],true)])] call CBA_fnc_execNextFrame);
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
						statement = QUOTE([ARR_2({_this call FUNC(placeFortification)},[ARR_4(_this select 0,'lex_CamoNet_BLUFOR_F',[0,-1,4.5],false)])] call CBA_fnc_execNextFrame);
						exceptions[] = {"isNotSwimming"};
						showDisabled = 0;
						priority = 4;
						icon = "z\ace\addons\sandbag\UI\icon_sandbag_ca.paa";
					};
					
					class ACE_CamoNet_Small_Opened
					{
						displayName = CSTRING(camoNetSmallOpened);
						condition = QUOTE(_this call FUNC(canPlaceFortification));
						statement = QUOTE([ARR_2({_this call FUNC(placeFortification)},[ARR_4(_this select 0,'lex_CamoNet_BLUFOR_open_F',[0,-1,4.5],false)])] call CBA_fnc_execNextFrame);
						exceptions[] = {"isNotSwimming"};
						showDisabled = 0;
						priority = 4;
						icon = "z\ace\addons\sandbag\UI\icon_sandbag_ca.paa";
					};
					
					class ACE_CamoNet_Large
					{
						displayName = CSTRING(camoNetLarge);
						condition = QUOTE(_this call FUNC(canPlaceFortification));
						statement = QUOTE([ARR_2({_this call FUNC(placeFortification)},[ARR_4(_this select 0,'lex_CamoNet_BLUFOR_big_F',[0,-1,4.5],false)])] call CBA_fnc_execNextFrame);
						exceptions[] = {"isNotSwimming"};
						showDisabled = 0;
						priority = 4;
						icon = "z\ace\addons\sandbag\UI\icon_sandbag_ca.paa";
					};
				};
				
				class ACE_Misc_category
				{
					displayName = CSTRING(Misc);
					condition = "true";
					priority = 4;
					showDisabled = 0;
					icon = "z\ace\addons\sandbag\UI\icon_sandbag_ca.paa";
					
					class ACE_Hedgehog
					{
						displayName = CSTRING(hedgehog);
						condition = QUOTE(_this call FUNC(canPlaceFortification));
						statement = QUOTE([ARR_2({_this call FUNC(placeFortification)},[ARR_4(_this select 0,'lex_Land_CzechHedgehog_01_F',[0,-0.1,2.5],false)])] call CBA_fnc_execNextFrame);
						exceptions[] = {"isNotSwimming"};
						showDisabled = 0;
						priority = 4;
						icon = "z\ace\addons\sandbag\UI\icon_sandbag_ca.paa";
					};
					
					class ACE_Ladder_half
					{
						displayName = CSTRING(ladder_half);
						condition = QUOTE(_this call FUNC(canPlaceFortification));
						statement = QUOTE([ARR_2({_this call FUNC(placeFortification)},[ARR_4(_this select 0,'lex_Land_ladder_half_EP1',[0,-0.1,2.5],false)])] call CBA_fnc_execNextFrame);
						exceptions[] = {"isNotSwimming"};
						showDisabled = 0;
						priority = 4;
						icon = "z\ace\addons\sandbag\UI\icon_sandbag_ca.paa";
					};
				};				
			};
		};
	};
	
	class Land_BagBunker_Small_F;
	class Land_BagFence_Long_F;
	class Land_BagFence_Short_F;
	class Land_BagFence_Round_F;
	class Land_BagFence_Corner_F;
	class Land_BagFence_End_F;
	class CamoNet_BLUFOR_F;
	class CamoNet_BLUFOR_open_F;
	class CamoNet_BLUFOR_big_F;
	class Land_CzechHedgehog_01_F;
	class Land_SandbagBarricade_01_hole_F;
	class Land_SandbagBarricade_01_F;
	class Land_SandbagBarricade_01_half_F;
	class Land_ladder_half_EP1;
	
	class lex_Land_BagBunker_Small_F: Land_BagBunker_Small_F
	{
		scope = 1;
		scopeCurator = 1;
		GVAR(buildDuration) = 180;
		
		class UserActions
		{
			class RemoveAction
			{
				displayName = CSTRING(removeFortificationAction);
				priority = 0;
                showWindow = 1;
				hideOnUse = 1;
				position="";
				radius=2;
				onlyForPlayer = 1;
				condition= QUOTE(this call FUNC(canRemoveFortification));
				statement= QUOTE([{_this call FUNC(removeFortification)},[this]] call CBA_fnc_execNextFrame);
			};
		};
	};
	
	class lex_Land_BagFence_Long_F: Land_BagFence_Long_F
	{
		scope = 1;
		scopeCurator = 1;
		GVAR(buildDuration) = 60;
				
		class UserActions
		{
			class RemoveAction
			{
				displayName = CSTRING(removeFortificationAction);
				priority = 0;
                showWindow = 1;
				hideOnUse = 1;
				position="";
				radius=2;
				onlyForPlayer = 1;
				condition= QUOTE(this call FUNC(canRemoveFortification));
				statement= QUOTE([{_this call FUNC(removeFortification)},[this]] call CBA_fnc_execNextFrame);
			};
		};
		
	};
	
	class lex_Land_BagFence_Short_F: Land_BagFence_Short_F
	{
		scope = 1;
		scopeCurator = 1;
		GVAR(buildDuration) = 40;
		
		class UserActions
		{
			class RemoveAction
			{
				displayName = CSTRING(removeFortificationAction);
				priority = 0;
                showWindow = 1;
				hideOnUse = 1;
				position="";
				radius=2;
				onlyForPlayer = 1;
				condition= QUOTE(this call FUNC(canRemoveFortification));
				statement= QUOTE([{_this call FUNC(removeFortification)},[this]] call CBA_fnc_execNextFrame);
			};
		};
	};
	
	class lex_Land_BagFence_Round_F: Land_BagFence_Round_F
	{
		scope = 1;
		scopeCurator = 1;
		GVAR(buildDuration) = 45;
		
		class UserActions
		{
			class RemoveAction
			{
				displayName = CSTRING(removeFortificationAction);
				priority = 0;
                showWindow = 1;
				hideOnUse = 1;
				position="";
				radius=2;
				onlyForPlayer = 1;
				condition= QUOTE(this call FUNC(canRemoveFortification));
				statement= QUOTE([{_this call FUNC(removeFortification)},[this]] call CBA_fnc_execNextFrame);
			};
		};
	};
	
	class lex_Land_BagFence_Corner_F: Land_BagFence_Corner_F
	{
		scope = 1;
		scopeCurator = 1;
		GVAR(buildDuration) = 35;
		
		class UserActions
		{
			class RemoveAction
			{
				displayName = CSTRING(removeFortificationAction);
				priority = 0;
                showWindow = 1;
				hideOnUse = 1;
				position="";
				radius=2;
				onlyForPlayer = 1;
				condition= QUOTE(this call FUNC(canRemoveFortification));
				statement= QUOTE([{_this call FUNC(removeFortification)},[this]] call CBA_fnc_execNextFrame);
			};
		};
	};
	
	class lex_Land_BagFence_End_F: Land_BagFence_End_F
	{
		scope = 1;
		scopeCurator = 1;
		GVAR(buildDuration) = 25;
		
		class UserActions
		{
			class RemoveAction
			{
				displayName = CSTRING(removeFortificationAction);
				priority = 0;
                showWindow = 1;
				hideOnUse = 1;
				position="";
				radius=2;
				onlyForPlayer = 1;
				condition= QUOTE(this call FUNC(canRemoveFortification));
				statement= QUOTE([{_this call FUNC(removeFortification)},[this]] call CBA_fnc_execNextFrame);
			};
		};
	};
	
	class lex_CamoNet_BLUFOR_F: CamoNet_BLUFOR_F
	{
		scope = 1;
		scopeCurator = 1;
		GVAR(buildDuration) = 60;
		
		class UserActions
		{
			class RemoveAction
			{
				displayName = CSTRING(removeFortificationAction);
				priority = 0;
                showWindow = 1;
				hideOnUse = 1;
				position="";
				radius=2;
				onlyForPlayer = 1;
				condition= QUOTE(this call FUNC(canRemoveFortification));
				statement= QUOTE([{_this call FUNC(removeFortification)},[this]] call CBA_fnc_execNextFrame);
			};
		};
	};
	
	class lex_CamoNet_BLUFOR_open_F: CamoNet_BLUFOR_open_F
	{
		scope = 1;
		scopeCurator = 1;
		GVAR(buildDuration) = 50;
		
		class UserActions
		{
			class RemoveAction
			{
				displayName = CSTRING(removeFortificationAction);
				priority = 0;
                showWindow = 1;
				hideOnUse = 1;
				position="";
				radius=2;
				onlyForPlayer = 1;
				condition= QUOTE(this call FUNC(canRemoveFortification));
				statement= QUOTE([{_this call FUNC(removeFortification)},[this]] call CBA_fnc_execNextFrame);
			};
		};
	};
	
	class lex_CamoNet_BLUFOR_big_F: CamoNet_BLUFOR_big_F
	{
		scope = 1;
		scopeCurator = 1;
		GVAR(buildDuration) = 80;
		
		class UserActions
		{
			class RemoveAction
			{
				displayName = CSTRING(removeFortificationAction);
				priority = 0;
                showWindow = 1;
				hideOnUse = 1;
				position="";
				radius=2;
				onlyForPlayer = 1;
				condition= QUOTE(this call FUNC(canRemoveFortification));
				statement= QUOTE([{_this call FUNC(removeFortification)},[this]] call CBA_fnc_execNextFrame);
			};
		};
	};
	
	class lex_Land_CzechHedgehog_01_F: Land_CzechHedgehog_01_F
	{
		scope = 1;
		scopeCurator = 1;
		GVAR(buildDuration) = 120;
		
		class UserActions
		{
			class RemoveAction
			{
				displayName = CSTRING(removeFortificationAction);
				priority = 0;
                showWindow = 1;
				hideOnUse = 1;
				position="";
				radius=2;
				onlyForPlayer = 1;
				condition= QUOTE(this call FUNC(canRemoveFortification));
				statement= QUOTE([{_this call FUNC(removeFortification)},[this]] call CBA_fnc_execNextFrame);
			};
		};
	};
	
	class lex_Land_SandbagBarricade_01_hole_F: Land_SandbagBarricade_01_hole_F
	{
		scope = 1;
		scopeCurator = 1;
		GVAR(buildDuration) = 125;
		
		class UserActions
		{
			class RemoveAction
			{
				displayName = CSTRING(removeFortificationAction);
				priority = 0;
                showWindow = 1;
				hideOnUse = 1;
				position="";
				radius=2;
				onlyForPlayer = 1;
				condition= QUOTE(this call FUNC(canRemoveFortification));
				statement= QUOTE([{_this call FUNC(removeFortification)},[this]] call CBA_fnc_execNextFrame);
			};
		};
	};
	
	class lex_Land_SandbagBarricade_01_F: Land_SandbagBarricade_01_F
	{
		scope = 1;
		scopeCurator = 1;
		GVAR(buildDuration) = 120;
		
		class UserActions
		{
			class RemoveAction
			{
				displayName = CSTRING(removeFortificationAction);
				priority = 0;
                showWindow = 1;
				hideOnUse = 1;
				position="";
				radius=2;
				onlyForPlayer = 1;
				condition= QUOTE(this call FUNC(canRemoveFortification));
				statement= QUOTE([{_this call FUNC(removeFortification)},[this]] call CBA_fnc_execNextFrame);
			};
		};
	};
	
	class lex_Land_SandbagBarricade_01_half_F: Land_SandbagBarricade_01_half_F
	{
		scope = 1;
		scopeCurator = 1;
		GVAR(buildDuration) = 80;
		
		class UserActions
		{
			class RemoveAction
			{
				displayName = CSTRING(removeFortificationAction);
				priority = 0;
                showWindow = 1;
				hideOnUse = 1;
				position="";
				radius=2;
				onlyForPlayer = 1;
				condition= QUOTE(this call FUNC(canRemoveFortification));
				statement= QUOTE([{_this call FUNC(removeFortification)},[this]] call CBA_fnc_execNextFrame);
			};
		};
	};
	
	class lex_Land_ladder_half_EP1: Land_ladder_half_EP1
	{
		scope = 1;
		scopeCurator = 1;
		GVAR(buildDuration) = 90;
		
		class UserActions
		{
			class RemoveAction
			{
				displayName = CSTRING(removeFortificationAction);
				priority = 0;
                showWindow = 1;
				hideOnUse = 1;
				position="";
				radius=2;
				onlyForPlayer = 1;
				condition= QUOTE(this call FUNC(canRemoveFortification));
				statement= QUOTE([{_this call FUNC(removeFortification)},[this]] call CBA_fnc_execNextFrame);
			};
		};
	};
};