class 101st_Style_Changer
{
    displayName="Change Style"; //Written by RD501
    exceptions[]=
    {
        "isNotInside",
        "isNotSwimming",
        "isNotSitting"
    };
    condition="!(isNull objectParent player) && (driver (vehicle player)==player)";
    showDisabled=0;
    priority=2;

    class 101st_NoseArt_None
    {
        displayName="None";
        exceptions[]=
        {
            "isNotInside",
            "isNotSwimming",
            "isNotSitting"
        };
        condition="!(isNull objectParent player)";
        statement="_target setObjectTextureGlobal [0,'DBA_Republic\DBA_Vehicles\DBA_AirVehicles\LAAT\2-1\2-1_Base_Hull_CO.paa']";
        showDisabled=0;
        runOnHover=0;
        priority=2.5;
    };

    class 101st_NoseArt_Gorman: 101st_NoseArt_None
    {
        displayName="Gorman2-1";
        statement="_target setObjectTextureGlobal [0, '101st_Aux_Mod\Addons\DBA_Republic\DBA_Vehicles\DBA_AirVehicles\LAAT\2-1\Customs\Gorman_Hull_CO.paa']";
    };
};


/* Please put in Alphabetical Order - Gorman
    class 101st_NoseArt_NAME: 101st_NoseArt_None
    {
        displayName="NAME";
        statement="_target setObjectTextureGlobal [0, '101st_Aux_Mod\Addons\DBA_Republic\DBA_Vehicles\DBA_AirVehicles\LAAT\1-1\Customs\NAME_Hull_CO.paa']";
    };
*/
