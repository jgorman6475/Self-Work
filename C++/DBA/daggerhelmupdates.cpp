class 101st_BaseDagger_Helmet: JLTS_CloneHelmetP2
{
  author="Dutch";
  scope=2;
  dlc = "101st_Aux_Mod";
  scopeArsenal=2;
  subItems[] = {"JLTS_CloneNVG_spec"};
  displayName="101st Airborne helmet (Cadet)";
  picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetAB_ui_ca.paa";
  hiddenSelections[]=
  {
    "camo1"
  };
  hiddenSelectionsTextures[]=
  {
    "DBA_Republic\Addons\DBA_Armour\DBA_Phase2\Customs\Base_Airborne_CO.paa"
  };
  model = "\MRC\JLTS\characters\CloneArmor\CloneHelmetAB.p3d";
  class ItemInfo: HeadgearItem
  {
    mass=10;
    uniformModel="\MRC\JLTS\characters\CloneArmor\CloneHelmetAB.p3d";
    allowedSlots[]={801,901,701,605};
    modelSides[]={6};
    hiddenSelections[]=
    {
      "Camo1"
    };
    class hitpointsprotectioninfo
    {
      class head
      {
        hitPointName = "HitHead";
        armor = 8;
        passThrough = 0.5;
      };
    };
  };

};
class 101st_Dagger_Helmet: 101st_BaseDagger_Helmet
{
  author="Dutch";
  scope=2;
  dlc = "101st_Aux_Mod";
  scopeArsenal=2;
  subItems[] = {"JLTS_CloneNVG_spec"};
  displayName="101st Airborne helmet (Base)";
  picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetAB_ui_ca.paa";
  hiddenSelections[]=
  {
    "camo1"
  };
  hiddenSelectionsTextures[]=
  {
    "DBA_Republic\Addons\DBA_Armour\DBA_Phase2\Customs\Airborne_Helm_CO.paa"
  };
  model = "\MRC\JLTS\characters\CloneArmor\CloneHelmetAB.p3d";
};
class 101st_Dagger_AltHelm: JLTS_CloneHelmetAB_illum
{
  author="Dutch";
  dlc = "101st_Aux_Mod";
  scope=2;
  scopeArsenal=2;
  displayName="101st Airborne helmet ALT (Base)";
  picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetAB_ui_ca.paa";
  hiddenSelectionsTextures[]=
  {
    "DBA_Republic\Addons\DBA_Armour\DBA_Phase2\Customs\Airborne_AlternativeHelm_CO.paa", "DBA_Republic\Addons\DBA_Armour\DBA_Phase2\Customs\Airborne_AlternativeHelm_CO.paa"
  };
  subItems[] = {"JLTS_CloneNVG_spec"};
};
class 101st_DaggerTraitor_Helm: 101st_Dagger_Helmet
{
  author="Dutch";
  dlc = "101st_Aux_Mod";
  scope=2;
  scopeArsenal=2;
  displayName="101st Clone helmet (Dagger Traitor)";
  picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetAB_ui_ca.paa";
  hiddenSelectionsTextures[]=
  {
    "DBA_Republic\Addons\DBA_Armour\DBA_Phase2\Customs\DaggerTraitor_AB_Helmet_CO.paa"
  };
};
class 101st_Allendyne_Helm: 101st_Dagger_Helmet
{
  author="Spark";
  dlc = "101st_Aux_Mod";
  scope=2;
  scopeArsenal=2;
  displayName="101st Clone helmet (Allendyne)";
  picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetAB_ui_ca.paa";
  hiddenSelectionsTextures[]=
  {
    "DBA_Republic\Addons\DBA_Armour\DBA_Phase2\Customs\Allendyne_Helmet_AB_CO.paa"
  };
};
class 101st_Bacon_Helmet: 101st_Dagger_Helmet
{
  author="Dutch";
  dlc = "101st_Aux_Mod";
  scope=2;
  scopeArsenal=2;
  displayName="101st Clone helmet (Bacon)";
  picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetAB_ui_ca.paa";
  hiddenSelectionsTextures[]=
  {
    "DBA_Republic\Addons\DBA_Armour\DBA_Phase2\Customs\Bacon_Helm_CO.paa"
  };
};
class 101st_Biscuit_Helmet: 101st_Dagger_Helmet
{
  author="Gorman";
  dlc = "101st_Aux_Mod";
  scope=2;
  scopeArsenal=2;
  displayName="101st Clone helmet (Biscuit)";
  picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetAB_ui_ca.paa";
  hiddenSelectionsTextures[]=
  {
    "DBA_Republic\Addons\DBA_Armour\DBA_Phase2\Customs\Biscuit_Helmet_AB_CO.paa"
  };
};
class 101st_Bluetwo_Helm: 101st_Dagger_Helmet
{
  author="Gorman";
  dlc = "101st_Aux_Mod";
  scope=2;
  scopeArsenal=2;
  displayName="101st Clone helmet (Bluetwo)";
  picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetAB_ui_ca.paa";
  hiddenSelectionsTextures[]=
  {
    "DBA_Republic\Addons\DBA_Armour\DBA_Phase2\Customs\Bluetwo_Helmet_AB_CO.paa"
  };
};
class 101st_Dog_Helm: 101st_Dagger_Helmet
{
  author="Spark";
  dlc = "101st_Aux_Mod";
  scope=2;
  scopeArsenal=2;
  displayName="101st Clone helmet (Dog)";
  picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetAB_ui_ca.paa";
  hiddenSelectionsTextures[]=
  {
    "DBA_Republic\Addons\DBA_Armour\DBA_Phase2\Customs\Dog_Helmet_AB_CO.paa"
  };
};
class 101st_Dral_Helm: 101st_Dagger_Helmet
{
  author="Gorman";
  dlc = "101st_Aux_Mod";
  scope=2;
  scopeArsenal=2;
  displayName="101st Clone helmet (Dral)";
  picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetAB_ui_ca.paa";
  hiddenSelectionsTextures[]=
  {
    "DBA_Republic\Addons\DBA_Armour\DBA_Phase2\Customs\Dral_Helmet_AB_CO.paa"
  };
};
class 101st_Flenaly_Helm: 101st_Dagger_Helmet
{
  author="Dutch";
  dlc = "101st_Aux_Mod";
  scope=2;
  scopeArsenal=2;
  displayName="101st Clone helmet (Flenaly)";
  picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetAB_ui_ca.paa";
  hiddenSelectionsTextures[]=
  {
    "DBA_Republic\Addons\DBA_Armour\DBA_Phase2\Customs\Flenaly_Helm_AB_CO.paa"
  };
};
class 101st_Fresh_Helmet: 101st_Dagger_Helmet
{
  author="Spark";
  scope=2;
  scopeArsenal=2;
  dlc = "101st_Aux_Mod";
  displayName="101st Clone helmet (Fresh)";
  picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetAB_ui_ca.paa";
  hiddenSelectionsTextures[]=
  {
    "DBA_Republic\Addons\DBA_Armour\DBA_Phase2\Customs\Fresh_Helmet_AB_CO.paa"
  };
};
class 101st_Gorman_Helm: 101st_Dagger_Helmet
{
  author="Gorman";
  dlc = "101st_Aux_Mod";
  scope=2;
  scopeArsenal=2;
  displayName="101st Clone helmet (Gorman)";
  picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetAB_ui_ca.paa";
  hiddenSelections[]=
  {
    "camo1"
  };
  hiddenSelectionsTextures[]=
  {
    "DBA_Republic\Addons\DBA_Armour\DBA_Phase2\Customs\Gorman_Helmet_AB_CO.paa"
  };
};
class 101st_Griddle_Helm: 101st_Dagger_Helmet
{
    author="Gorman";
    dlc = "101st_Aux_Mod";
    scope=2;
    scopeArsenal=2;
    displayName="101st Clone helmet (Griddle)";
    picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetAB_ui_ca.paa";
    hiddenSelectionsTextures[]=
    {
      "DBA_Republic\Addons\DBA_Armour\DBA_Phase2\Customs\Griddle_Helmet_AB_CO.paa"
    };
};
class 101st_Gustavo_Helm: 101st_Dagger_Helmet
{
  author="Spark";
  dlc = "101st_Aux_Mod";
  scope=2;
  scopeArsenal=2;
  displayName="101st Clone helmet (Gustavo)";
  picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetAB_ui_ca.paa";
  hiddenSelectionsTextures[]=
  {
    "DBA_Republic\Addons\DBA_Armour\DBA_Phase2\Customs\Gustavo_Helmet_AB_CO.paa"
  };
};
class 101st_Heretic_Helmet: 101st_Dagger_Helmet
{
  author="Dutch";
  dlc = "101st_Aux_Mod";
  scope=2;
  scopeArsenal=2;
  displayName="101st Clone helmet (Heretic)";
  picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetAB_ui_ca.paa";
  hiddenSelectionsTextures[]=
  {
    "DBA_Republic\Addons\DBA_Armour\DBA_Phase2\Customs\Heretic_Helm_CO.paa"
  };
};
class 101st_Hydro_Helmet: 101st_Dagger_Helmet
{
  author="Dutch";
  dlc = "101st_Aux_Mod";
  scope=2;
  scopeArsenal=2;
  displayName="101st Clone helmet (Hydro)";
  picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetAB_ui_ca.paa";
  hiddenSelectionsTextures[]=
  {
    "DBA_Republic\Addons\DBA_Armour\DBA_Phase2\Customs\Hydro AB_Helmet_CO.paa"
  };
};
class 101st_Lambert_Helmet: 101st_Dagger_Helmet
{
  author="Dutch";
  dlc = "101st_Aux_Mod";
  scope=2;
  scopeArsenal=2;
  displayName="101st Clone helmet (Lambert)";
  picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetAB_ui_ca.paa";
  hiddenSelectionsTextures[]=
  {
    "DBA_Republic\Addons\DBA_Armour\DBA_Phase2\Customs\Lambert_Helm_CO.paa"
  };
};
class 101st_Late_Helm: 101st_Dagger_Helmet
{
  author="Spark";
  dlc = "101st_Aux_Mod";
  scope=2;
  scopeArsenal=2;
  displayName="101st Clone helmet (Late)";
  picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetAB_ui_ca.paa";
  hiddenSelectionsTextures[]=
  {
    "DBA_Republic\Addons\DBA_Armour\DBA_Phase2\Customs\Late_Helmet_AB_CO.paa"
  };
};
class 101st_Nickel_Helm: 101st_Dagger_Helmet
{
  author="Spark";
  dlc = "101st_Aux_Mod";
  scope=2;
  scopeArsenal=2;
  displayName="101st Clone helmet (Nickel)";
  picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetAB_ui_ca.paa";
  hiddenSelectionsTextures[]=
  {
    "DBA_Republic\Addons\DBA_Armour\DBA_Phase2\Customs\Nickel_Helmet_AB_CO.paa"
  };
};
class 101st_Phillips_Helm: 101st_Dagger_Helmet
{
  author="Dutch";
  dlc = "101st_Aux_Mod";
  scope=2;
  scopeArsenal=2;
  displayName="101st Clone helmet (Phillips)";
  picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetAB_ui_ca.paa";
  hiddenSelectionsTextures[]=
  {
    "DBA_Republic\Addons\DBA_Armour\DBA_Phase2\Customs\Phillips_Helmet_AB_CO.paa"
  };
};
class 101st_Prodigy_Helm: 101st_Dagger_Helmet
{
  author="Dutch";
  dlc = "101st_Aux_Mod";
  scope=2;
  scopeArsenal=2;
  displayName="101st Clone helmet (Prodigy)";
  picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetAB_ui_ca.paa";
  hiddenSelectionsTextures[]=
  {
    "DBA_Republic\Addons\DBA_Armour\DBA_Phase2\Customs\Prodigy_Helm_CO.paa"
  };
};
class 101st_Quicksilver_Helm: 101st_Dagger_Helmet
{
  author="Dutch";
  dlc = "101st_Aux_Mod";
  scope=2;
  scopeArsenal=2;
  displayName="101st Clone helmet (Quicksilver)";
  picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetAB_ui_ca.paa";
  hiddenSelectionsTextures[]=
  {
    "DBA_Republic\Addons\DBA_Armour\DBA_Phase2\Customs\Quicksilver_Helmet_AB_CO.paa"
  };
};
class 101st_Rick_Helmet: 101st_Dagger_Helmet
{
  author="Spark";
  scope=2;
  scopeArsenal=2;
  dlc = "101st_Aux_Mod";
  displayName="101st Clone helmet (Rick)";
  picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
  hiddenSelectionsTextures[]=
  {
    "DBA_Republic\Addons\DBA_Armour\DBA_Phase2\Customs\Rick_Helmet_CO.paa"
  };
};
class 101st_Shogun_Helm: 101st_Dagger_Helmet
{
  author="Gorman";
  dlc = "101st_Aux_Mod";
  scope=2;
  scopeArsenal=2;
  displayName="101st Clone helmet (Shogun)";
  picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetAB_ui_ca.paa";
  hiddenSelectionsTextures[]=
  {
    "DBA_Republic\Addons\DBA_Armour\DBA_Phase2\Customs\Shogun_Helmet_AB_CO.paa"
  };
};
class 101st_Shotty_Helmet: 101st_Dagger_Helmet
{
  author="Dutch";
  dlc = "101st_Aux_Mod";
  scope=2;
  scopeArsenal=2;
  displayName="101st Clone helmet (Shotty)";
  picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetAB_ui_ca.paa";
  hiddenSelectionsTextures[]=
  {
    "DBA_Republic\Addons\DBA_Armour\DBA_Phase2\Customs\Shotty_Helmet_AB_CO.paa"
  };
};
class 101st_Sicko_Helmet: 101st_Dagger_Helmet
{
  author="Gorman";
  scope=2;
  scopeArsenal=2;
  dlc = "101st_Aux_Mod";
  displayName="101st Clone helmet (Sicko)";
  picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetAB_ui_ca.paa";
  hiddenSelectionsTextures[]=
  {
    "DBA_Republic\Addons\DBA_Armour\DBA_Phase2\Customs\Sicko_Helmet_AB_CO.paa"
  };
};
class 101st_Soulify_Helm: 101st_Dagger_Helmet
{
  author="Gorman";
  dlc = "101st_Aux_Mod";
  scope=2;
  scopeArsenal=2;
  displayName="101st Clone helmet (Soulify)";
  picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetAB_ui_ca.paa";
  hiddenSelectionsTextures[]=
  {
    "DBA_Republic\Addons\DBA_Armour\DBA_Phase2\Customs\Soulify_Helmet_AB_CO.paa"
  };
};
class 101st_Sykes_Helmet: 101st_Dagger_Helmet
{
  author="Gorman";
  scope=2;
  scopeArsenal=2;
  dlc = "101st_Aux_Mod";
  displayName="101st Clone helmet (Sykes)";
  picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
  hiddenSelectionsTextures[]=
  {
    "DBA_Republic\Addons\DBA_Armour\DBA_Phase2\Customs\Sykes_Helmet_AB_CO.paa"
  };
};
class 101st_Synn_Helmet: 101st_Dagger_Helmet
{
  author="Dutch";
  dlc = "101st_Aux_Mod";
  scope=2;
  scopeArsenal=2;
  displayName="101st Clone helmet (Synn)";
  picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetAB_ui_ca.paa";
  hiddenSelectionsTextures[]=
  {
    "DBA_Republic\Addons\DBA_Armour\DBA_Phase2\Customs\Synn_Helmet_CO.paa"
  };
};
class 101st_Turtle_Helm: 101st_Dagger_Helmet
{
  author="Spark";
  dlc = "101st_Aux_Mod";
  scope=2;
  scopeArsenal=2;
  displayName="101st Clone helmet (Turtle)";
  picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetAB_ui_ca.paa";
  hiddenSelectionsTextures[]=
  {
    "DBA_Republic\Addons\DBA_Armour\DBA_Phase2\Customs\Turtle_Helmet_AB_CO.paa"
  };
};
class 101st_Winters_Helm: 101st_Dagger_Helmet
{
  author="Dutch";
  dlc = "101st_Aux_Mod";
  scope=2;
  scopeArsenal=2;
  displayName="101st Clone helmet (Winters)";
  picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetAB_ui_ca.paa";
  hiddenSelectionsTextures[]=
  {
    "DBA_Republic\Addons\DBA_Armour\DBA_Phase2\Customs\Winters_Helmet_AB_CO.paa"
  };
};
