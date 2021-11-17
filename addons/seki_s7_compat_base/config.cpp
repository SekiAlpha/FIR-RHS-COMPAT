class CfgPatches
{
	class seki_FIR_compat_base
	{
		name="FIR RHS COMPAT";
		requiredVersion=1.98;
		requiredAddons[]=
		{
			"FIR_AirWeaponSystem_US",
			"FIR_PilotCrewPack_US",
			"rhsusf_melb"
		};
		author="SekiGamer";
		units[] = {};
		weapons[] = {};
	};
};

#include "CfgMagazines.hpp"