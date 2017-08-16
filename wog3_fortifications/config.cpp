#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.60;
        requiredAddons[] = {"ace_interaction","ace_repair","A3_Structures_F_Mil","A3_Structures_F_Argo_Military_Fortifications","CUP_Misc_e_Config","CAMisc_E"};
        author = "[SW]Lex";
        //authors[] = {};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgVehicles.hpp"