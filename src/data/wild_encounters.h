#define ENCOUNTER_CHANCE_LAND_MONS_SLOT_0 20  
#define ENCOUNTER_CHANCE_LAND_MONS_SLOT_1 ENCOUNTER_CHANCE_LAND_MONS_SLOT_0 + 20 
#define ENCOUNTER_CHANCE_LAND_MONS_SLOT_2 ENCOUNTER_CHANCE_LAND_MONS_SLOT_1 + 10 
#define ENCOUNTER_CHANCE_LAND_MONS_SLOT_3 ENCOUNTER_CHANCE_LAND_MONS_SLOT_2 + 10 
#define ENCOUNTER_CHANCE_LAND_MONS_SLOT_4 ENCOUNTER_CHANCE_LAND_MONS_SLOT_3 + 10 
#define ENCOUNTER_CHANCE_LAND_MONS_SLOT_5 ENCOUNTER_CHANCE_LAND_MONS_SLOT_4 + 10 
#define ENCOUNTER_CHANCE_LAND_MONS_SLOT_6 ENCOUNTER_CHANCE_LAND_MONS_SLOT_5 + 5 
#define ENCOUNTER_CHANCE_LAND_MONS_SLOT_7 ENCOUNTER_CHANCE_LAND_MONS_SLOT_6 + 5 
#define ENCOUNTER_CHANCE_LAND_MONS_SLOT_8 ENCOUNTER_CHANCE_LAND_MONS_SLOT_7 + 4 
#define ENCOUNTER_CHANCE_LAND_MONS_SLOT_9 ENCOUNTER_CHANCE_LAND_MONS_SLOT_8 + 4 
#define ENCOUNTER_CHANCE_LAND_MONS_SLOT_10 ENCOUNTER_CHANCE_LAND_MONS_SLOT_9 + 1 
#define ENCOUNTER_CHANCE_LAND_MONS_SLOT_11 ENCOUNTER_CHANCE_LAND_MONS_SLOT_10 + 1 
#define ENCOUNTER_CHANCE_LAND_MONS_TOTAL (ENCOUNTER_CHANCE_LAND_MONS_SLOT_11)
#define ENCOUNTER_CHANCE_WATER_MONS_SLOT_0 60  
#define ENCOUNTER_CHANCE_WATER_MONS_SLOT_1 ENCOUNTER_CHANCE_WATER_MONS_SLOT_0 + 30 
#define ENCOUNTER_CHANCE_WATER_MONS_SLOT_2 ENCOUNTER_CHANCE_WATER_MONS_SLOT_1 + 5 
#define ENCOUNTER_CHANCE_WATER_MONS_SLOT_3 ENCOUNTER_CHANCE_WATER_MONS_SLOT_2 + 4 
#define ENCOUNTER_CHANCE_WATER_MONS_SLOT_4 ENCOUNTER_CHANCE_WATER_MONS_SLOT_3 + 1 
#define ENCOUNTER_CHANCE_WATER_MONS_TOTAL (ENCOUNTER_CHANCE_WATER_MONS_SLOT_4)
#define ENCOUNTER_CHANCE_ROCK_SMASH_MONS_SLOT_0 60  
#define ENCOUNTER_CHANCE_ROCK_SMASH_MONS_SLOT_1 ENCOUNTER_CHANCE_ROCK_SMASH_MONS_SLOT_0 + 30 
#define ENCOUNTER_CHANCE_ROCK_SMASH_MONS_SLOT_2 ENCOUNTER_CHANCE_ROCK_SMASH_MONS_SLOT_1 + 5 
#define ENCOUNTER_CHANCE_ROCK_SMASH_MONS_SLOT_3 ENCOUNTER_CHANCE_ROCK_SMASH_MONS_SLOT_2 + 4 
#define ENCOUNTER_CHANCE_ROCK_SMASH_MONS_SLOT_4 ENCOUNTER_CHANCE_ROCK_SMASH_MONS_SLOT_3 + 1 
#define ENCOUNTER_CHANCE_ROCK_SMASH_MONS_TOTAL (ENCOUNTER_CHANCE_ROCK_SMASH_MONS_SLOT_4)
#define ENCOUNTER_CHANCE_FISHING_MONS_GOOD_ROD_SLOT_2 60 
#define ENCOUNTER_CHANCE_FISHING_MONS_GOOD_ROD_SLOT_3 ENCOUNTER_CHANCE_FISHING_MONS_GOOD_ROD_SLOT_2 + 20
#define ENCOUNTER_CHANCE_FISHING_MONS_GOOD_ROD_SLOT_4 ENCOUNTER_CHANCE_FISHING_MONS_GOOD_ROD_SLOT_3 + 20
#define ENCOUNTER_CHANCE_FISHING_MONS_GOOD_ROD_TOTAL (ENCOUNTER_CHANCE_FISHING_MONS_GOOD_ROD_SLOT_4)
#define ENCOUNTER_CHANCE_FISHING_MONS_OLD_ROD_SLOT_0 70 
#define ENCOUNTER_CHANCE_FISHING_MONS_OLD_ROD_SLOT_1 ENCOUNTER_CHANCE_FISHING_MONS_OLD_ROD_SLOT_0 + 30
#define ENCOUNTER_CHANCE_FISHING_MONS_OLD_ROD_TOTAL (ENCOUNTER_CHANCE_FISHING_MONS_OLD_ROD_SLOT_1)
#define ENCOUNTER_CHANCE_FISHING_MONS_SUPER_ROD_SLOT_5 40 
#define ENCOUNTER_CHANCE_FISHING_MONS_SUPER_ROD_SLOT_6 ENCOUNTER_CHANCE_FISHING_MONS_SUPER_ROD_SLOT_5 + 40
#define ENCOUNTER_CHANCE_FISHING_MONS_SUPER_ROD_SLOT_7 ENCOUNTER_CHANCE_FISHING_MONS_SUPER_ROD_SLOT_6 + 15
#define ENCOUNTER_CHANCE_FISHING_MONS_SUPER_ROD_SLOT_8 ENCOUNTER_CHANCE_FISHING_MONS_SUPER_ROD_SLOT_7 + 4
#define ENCOUNTER_CHANCE_FISHING_MONS_SUPER_ROD_SLOT_9 ENCOUNTER_CHANCE_FISHING_MONS_SUPER_ROD_SLOT_8 + 1
#define ENCOUNTER_CHANCE_FISHING_MONS_SUPER_ROD_TOTAL (ENCOUNTER_CHANCE_FISHING_MONS_SUPER_ROD_SLOT_9)

const struct WildPokemon sSevenIslandTanobyRuinsMoneanChamber_LandMons[] =
{
    { 25, 25, SPECIES_UNOWN },
    { 25, 25, SPECIES_UNOWN },
    { 25, 25, SPECIES_UNOWN },
    { 25, 25, SPECIES_UNOWN },
    { 25, 25, SPECIES_UNOWN },
    { 25, 25, SPECIES_UNOWN },
    { 25, 25, SPECIES_UNOWN },
    { 25, 25, SPECIES_UNOWN },
    { 25, 25, SPECIES_UNOWN },
    { 25, 25, SPECIES_UNOWN },
    { 25, 25, SPECIES_UNOWN },
    { 25, 25, SPECIES_UNOWN },
};
const struct WildPokemonInfo sSevenIslandTanobyRuinsMoneanChamber_LandMonsInfo = { 7, sSevenIslandTanobyRuinsMoneanChamber_LandMons };

const struct WildPokemon sSevenIslandTanobyRuinsLiptooChamber_LandMons[] =
{
    { 25, 25, SPECIES_UNOWN },
    { 25, 25, SPECIES_UNOWN },
    { 25, 25, SPECIES_UNOWN },
    { 25, 25, SPECIES_UNOWN },
    { 25, 25, SPECIES_UNOWN },
    { 25, 25, SPECIES_UNOWN },
    { 25, 25, SPECIES_UNOWN },
    { 25, 25, SPECIES_UNOWN },
    { 25, 25, SPECIES_UNOWN },
    { 25, 25, SPECIES_UNOWN },
    { 25, 25, SPECIES_UNOWN },
    { 25, 25, SPECIES_UNOWN },
};
const struct WildPokemonInfo sSevenIslandTanobyRuinsLiptooChamber_LandMonsInfo = { 7, sSevenIslandTanobyRuinsLiptooChamber_LandMons };

const struct WildPokemon sSevenIslandTanobyRuinsWeepthChamber_LandMons[] =
{
    { 25, 25, SPECIES_UNOWN },
    { 25, 25, SPECIES_UNOWN },
    { 25, 25, SPECIES_UNOWN },
    { 25, 25, SPECIES_UNOWN },
    { 25, 25, SPECIES_UNOWN },
    { 25, 25, SPECIES_UNOWN },
    { 25, 25, SPECIES_UNOWN },
    { 25, 25, SPECIES_UNOWN },
    { 25, 25, SPECIES_UNOWN },
    { 25, 25, SPECIES_UNOWN },
    { 25, 25, SPECIES_UNOWN },
    { 25, 25, SPECIES_UNOWN },
};

const struct WildPokemonInfo sSevenIslandTanobyRuinsWeepthChamber_LandMonsInfo = { 7, sSevenIslandTanobyRuinsWeepthChamber_LandMons };



const struct WildPokemon sSevenIslandTanobyRuinsDilfordChamber_LandMons[] =
{
    { 25, 25, SPECIES_UNOWN },
    { 25, 25, SPECIES_UNOWN },
    { 25, 25, SPECIES_UNOWN },
    { 25, 25, SPECIES_UNOWN },
    { 25, 25, SPECIES_UNOWN },
    { 25, 25, SPECIES_UNOWN },
    { 25, 25, SPECIES_UNOWN },
    { 25, 25, SPECIES_UNOWN },
    { 25, 25, SPECIES_UNOWN },
    { 25, 25, SPECIES_UNOWN },
    { 25, 25, SPECIES_UNOWN },
    { 25, 25, SPECIES_UNOWN },
};

const struct WildPokemonInfo sSevenIslandTanobyRuinsDilfordChamber_LandMonsInfo = { 7, sSevenIslandTanobyRuinsDilfordChamber_LandMons };



const struct WildPokemon sSevenIslandTanobyRuinsScufibChamber_LandMons[] =
{
    { 25, 25, SPECIES_UNOWN },
    { 25, 25, SPECIES_UNOWN },
    { 25, 25, SPECIES_UNOWN },
    { 25, 25, SPECIES_UNOWN },
    { 25, 25, SPECIES_UNOWN },
    { 25, 25, SPECIES_UNOWN },
    { 25, 25, SPECIES_UNOWN },
    { 25, 25, SPECIES_UNOWN },
    { 25, 25, SPECIES_UNOWN },
    { 25, 25, SPECIES_UNOWN },
    { 25, 25, SPECIES_UNOWN },
    { 25, 25, SPECIES_UNOWN },
};

const struct WildPokemonInfo sSevenIslandTanobyRuinsScufibChamber_LandMonsInfo = { 7, sSevenIslandTanobyRuinsScufibChamber_LandMons };



const struct WildPokemon sSevenIslandTanobyRuinsRixyChamber_LandMons[] =
{
    { 25, 25, SPECIES_UNOWN },
    { 25, 25, SPECIES_UNOWN },
    { 25, 25, SPECIES_UNOWN },
    { 25, 25, SPECIES_UNOWN },
    { 25, 25, SPECIES_UNOWN },
    { 25, 25, SPECIES_UNOWN },
    { 25, 25, SPECIES_UNOWN },
    { 25, 25, SPECIES_UNOWN },
    { 25, 25, SPECIES_UNOWN },
    { 25, 25, SPECIES_UNOWN },
    { 25, 25, SPECIES_UNOWN },
    { 25, 25, SPECIES_UNOWN },
};

const struct WildPokemonInfo sSevenIslandTanobyRuinsRixyChamber_LandMonsInfo = { 7, sSevenIslandTanobyRuinsRixyChamber_LandMons };



const struct WildPokemon sSevenIslandTanobyRuinsViapoisChamber_LandMons[] =
{
    { 25, 25, SPECIES_UNOWN },
    { 25, 25, SPECIES_UNOWN },
    { 25, 25, SPECIES_UNOWN },
    { 25, 25, SPECIES_UNOWN },
    { 25, 25, SPECIES_UNOWN },
    { 25, 25, SPECIES_UNOWN },
    { 25, 25, SPECIES_UNOWN },
    { 25, 25, SPECIES_UNOWN },
    { 25, 25, SPECIES_UNOWN },
    { 25, 25, SPECIES_UNOWN },
    { 25, 25, SPECIES_UNOWN },
    { 25, 25, SPECIES_UNOWN },
};

const struct WildPokemonInfo sSevenIslandTanobyRuinsViapoisChamber_LandMonsInfo = { 7, sSevenIslandTanobyRuinsViapoisChamber_LandMons };



const struct WildPokemon sViridianForest_LandMons[] =
{
    { 4, 4, SPECIES_CATERPIE },
    { 4, 4, SPECIES_WEEDLE },
    { 5, 5, SPECIES_CATERPIE },
    { 5, 5, SPECIES_WEEDLE },
    { 3, 3, SPECIES_CATERPIE },
    { 3, 3, SPECIES_WEEDLE },
    { 5, 5, SPECIES_METAPOD },
    { 5, 5, SPECIES_KAKUNA },
    { 4, 4, SPECIES_KAKUNA },
    { 3, 3, SPECIES_PIKACHU },
    { 6, 6, SPECIES_KAKUNA },
    { 5, 5, SPECIES_PIKACHU },
};

const struct WildPokemonInfo sViridianForest_LandMonsInfo = { 14, sViridianForest_LandMons };



const struct WildPokemon sMtMoon1F_LandMons[] =
{
    { 7, 7, SPECIES_ZUBAT },
    { 8, 8, SPECIES_ZUBAT },
    { 7, 7, SPECIES_GEODUDE },
    { 9, 9, SPECIES_ZUBAT },
    { 10, 10, SPECIES_ZUBAT },
    { 8, 8, SPECIES_GEODUDE },
    { 9, 9, SPECIES_GEODUDE },
    { 8, 8, SPECIES_PARAS },
    { 7, 7, SPECIES_ZUBAT },
    { 7, 7, SPECIES_ZUBAT },
    { 7, 7, SPECIES_ZUBAT },
    { 8, 8, SPECIES_CLEFAIRY },
};

const struct WildPokemonInfo sMtMoon1F_LandMonsInfo = { 7, sMtMoon1F_LandMons };



const struct WildPokemon sMtMoonB1F_LandMons[] =
{
    { 7, 7, SPECIES_PARAS },
    { 8, 8, SPECIES_PARAS },
    { 5, 5, SPECIES_PARAS },
    { 6, 6, SPECIES_PARAS },
    { 9, 9, SPECIES_PARAS },
    { 10, 10, SPECIES_PARAS },
    { 7, 7, SPECIES_PARAS },
    { 8, 8, SPECIES_PARAS },
    { 5, 5, SPECIES_PARAS },
    { 6, 6, SPECIES_PARAS },
    { 9, 9, SPECIES_PARAS },
    { 10, 10, SPECIES_PARAS },
};

const struct WildPokemonInfo sMtMoonB1F_LandMonsInfo = { 5, sMtMoonB1F_LandMons };



const struct WildPokemon sMtMoonB2F_LandMons[] =
{
    { 8, 8, SPECIES_ZUBAT },
    { 9, 9, SPECIES_GEODUDE },
    { 9, 9, SPECIES_ZUBAT },
    { 10, 10, SPECIES_ZUBAT },
    { 10, 10, SPECIES_GEODUDE },
    { 10, 10, SPECIES_PARAS },
    { 12, 12, SPECIES_PARAS },
    { 10, 10, SPECIES_CLEFAIRY },
    { 11, 11, SPECIES_ZUBAT },
    { 11, 11, SPECIES_ZUBAT },
    { 11, 11, SPECIES_ZUBAT },
    { 12, 12, SPECIES_CLEFAIRY },
};

const struct WildPokemonInfo sMtMoonB2F_LandMonsInfo = { 7, sMtMoonB2F_LandMons };



const struct WildPokemon sSSAnneExterior_WaterMons[] =
{
    { 5, 10, SPECIES_TENTACOOL },
    { 10, 20, SPECIES_TENTACOOL },
    { 20, 30, SPECIES_TENTACOOL },
    { 30, 35, SPECIES_TENTACOOL },
    { 35, 40, SPECIES_TENTACOOL },
};

const struct WildPokemonInfo sSSAnneExterior_WaterMonsInfo = { 1, sSSAnneExterior_WaterMons };
const struct WildPokemon sSSAnneExterior_FishingMons[] =
{
    { 5, 5, SPECIES_MAGIKARP },
    { 5, 5, SPECIES_MAGIKARP },
    { 5, 15, SPECIES_HORSEA },
    { 5, 15, SPECIES_MAGIKARP },
    { 5, 15, SPECIES_KRABBY },
    { 15, 25, SPECIES_HORSEA },
    { 15, 25, SPECIES_SHELLDER },
    { 15, 25, SPECIES_GYARADOS },
    { 25, 35, SPECIES_HORSEA },
    { 25, 35, SPECIES_PSYDUCK },
};

const struct WildPokemonInfo sSSAnneExterior_FishingMonsInfo = { 10, sSSAnneExterior_FishingMons };



const struct WildPokemon sDiglettsCaveB1F_LandMons[] =
{
    { 18, 18, SPECIES_DIGLETT },
    { 19, 19, SPECIES_DIGLETT },
    { 17, 17, SPECIES_DIGLETT },
    { 15, 15, SPECIES_DIGLETT },
    { 16, 16, SPECIES_DIGLETT },
    { 20, 20, SPECIES_DIGLETT },
    { 21, 21, SPECIES_DIGLETT },
    { 22, 22, SPECIES_DIGLETT },
    { 17, 17, SPECIES_DIGLETT },
    { 29, 29, SPECIES_DUGTRIO },
    { 17, 17, SPECIES_DIGLETT },
    { 31, 31, SPECIES_DUGTRIO },
};

const struct WildPokemonInfo sDiglettsCaveB1F_LandMonsInfo = { 5, sDiglettsCaveB1F_LandMons };



const struct WildPokemon sVictoryRoad1F_LandMons[] =
{
    { 32, 32, SPECIES_MACHOP },
    { 32, 32, SPECIES_GEODUDE },
    { 40, 40, SPECIES_ONIX },
    { 43, 43, SPECIES_ONIX },
    { 46, 46, SPECIES_ONIX },
    { 32, 32, SPECIES_ZUBAT },
    { 44, 44, SPECIES_ARBOK },
    { 44, 44, SPECIES_GOLBAT },
    { 44, 44, SPECIES_MAROWAK },
    { 44, 44, SPECIES_MACHOKE },
    { 46, 46, SPECIES_MACHOKE },
    { 46, 46, SPECIES_MAROWAK },
};

const struct WildPokemonInfo sVictoryRoad1F_LandMonsInfo = { 7, sVictoryRoad1F_LandMons };



const struct WildPokemon sVictoryRoad2F_LandMons[] =
{
    { 34, 34, SPECIES_MACHOP },
    { 34, 34, SPECIES_GEODUDE },
    { 42, 42, SPECIES_PRIMEAPE },
    { 45, 45, SPECIES_ONIX },
    { 48, 48, SPECIES_ONIX },
    { 34, 34, SPECIES_ZUBAT },
    { 46, 46, SPECIES_ARBOK },
    { 46, 46, SPECIES_GOLBAT },
    { 46, 46, SPECIES_MAROWAK },
    { 46, 46, SPECIES_MACHOKE },
    { 48, 48, SPECIES_MACHOKE },
    { 48, 48, SPECIES_MAROWAK },
};

const struct WildPokemonInfo sVictoryRoad2F_LandMonsInfo = { 7, sVictoryRoad2F_LandMons };



const struct WildPokemon sVictoryRoad3F_LandMons[] =
{
    { 32, 32, SPECIES_MACHOP },
    { 32, 32, SPECIES_GEODUDE },
    { 40, 40, SPECIES_ONIX },
    { 43, 43, SPECIES_ONIX },
    { 46, 46, SPECIES_ONIX },
    { 32, 32, SPECIES_ZUBAT },
    { 44, 44, SPECIES_ARBOK },
    { 44, 44, SPECIES_GOLBAT },
    { 44, 44, SPECIES_MAROWAK },
    { 44, 44, SPECIES_MACHOKE },
    { 46, 46, SPECIES_MACHOKE },
    { 46, 46, SPECIES_MAROWAK },
};

const struct WildPokemonInfo sVictoryRoad3F_LandMonsInfo = { 7, sVictoryRoad3F_LandMons };



const struct WildPokemon sPokemonMansion1F_LandMons[] =
{
    { 28, 28, SPECIES_KOFFING },
    { 32, 32, SPECIES_RATICATE },
    { 30, 30, SPECIES_KOFFING },
    { 36, 36, SPECIES_RATICATE },
    { 30, 30, SPECIES_GROWLITHE },
    { 28, 28, SPECIES_RATTATA },
    { 28, 28, SPECIES_GRIMER },
    { 32, 32, SPECIES_WEEZING },
    { 32, 32, SPECIES_GROWLITHE },
    { 26, 26, SPECIES_RATTATA },
    { 32, 32, SPECIES_GROWLITHE },
    { 26, 26, SPECIES_RATTATA },
};

const struct WildPokemonInfo sPokemonMansion1F_LandMonsInfo = { 7, sPokemonMansion1F_LandMons };



const struct WildPokemon sPokemonMansion2F_LandMons[] =
{
    { 28, 28, SPECIES_KOFFING },
    { 32, 32, SPECIES_RATICATE },
    { 30, 30, SPECIES_KOFFING },
    { 36, 36, SPECIES_RATICATE },
    { 30, 30, SPECIES_GROWLITHE },
    { 28, 28, SPECIES_RATTATA },
    { 28, 28, SPECIES_GRIMER },
    { 32, 32, SPECIES_WEEZING },
    { 32, 32, SPECIES_GROWLITHE },
    { 26, 26, SPECIES_RATTATA },
    { 32, 32, SPECIES_GROWLITHE },
    { 26, 26, SPECIES_RATTATA },
};

const struct WildPokemonInfo sPokemonMansion2F_LandMonsInfo = { 7, sPokemonMansion2F_LandMons };



const struct WildPokemon sPokemonMansion3F_LandMons[] =
{
    { 28, 28, SPECIES_KOFFING },
    { 32, 32, SPECIES_RATICATE },
    { 30, 30, SPECIES_KOFFING },
    { 36, 36, SPECIES_RATICATE },
    { 30, 30, SPECIES_GROWLITHE },
    { 28, 28, SPECIES_RATTATA },
    { 28, 28, SPECIES_GRIMER },
    { 32, 32, SPECIES_WEEZING },
    { 32, 32, SPECIES_GROWLITHE },
    { 26, 26, SPECIES_RATTATA },
    { 32, 32, SPECIES_GROWLITHE },
    { 26, 26, SPECIES_RATTATA },
};

const struct WildPokemonInfo sPokemonMansion3F_LandMonsInfo = { 7, sPokemonMansion3F_LandMons };



const struct WildPokemon sPokemonMansionB1F_LandMons[] =
{
    { 28, 28, SPECIES_KOFFING },
    { 34, 34, SPECIES_RATICATE },
    { 30, 30, SPECIES_KOFFING },
    { 30, 30, SPECIES_DITTO },
    { 30, 30, SPECIES_GROWLITHE },
    { 38, 38, SPECIES_RATICATE },
    { 28, 28, SPECIES_GRIMER },
    { 34, 34, SPECIES_WEEZING },
    { 32, 32, SPECIES_GROWLITHE },
    { 26, 26, SPECIES_RATTATA },
    { 32, 32, SPECIES_GROWLITHE },
    { 26, 26, SPECIES_RATTATA },
};

const struct WildPokemonInfo sPokemonMansionB1F_LandMonsInfo = { 5, sPokemonMansionB1F_LandMons };



const struct WildPokemon sSafariZoneCenter_LandMons[] =
{
    { 25, 25, SPECIES_RHYHORN },
    { 22, 22, SPECIES_NIDORAN_M },
    { 24, 24, SPECIES_EXEGGCUTE },
    { 25, 25, SPECIES_EXEGGCUTE },
    { 22, 22, SPECIES_VENONAT },
    { 31, 31, SPECIES_NIDORINO },
    { 31, 31, SPECIES_NIDORINA },
    { 30, 30, SPECIES_PARASECT },
    { 22, 22, SPECIES_VENONAT },
    { 23, 23, SPECIES_SCYTHER },
    { 22, 22, SPECIES_VENONAT },
    { 23, 23, SPECIES_CHANSEY },
};

const struct WildPokemonInfo sSafariZoneCenter_LandMonsInfo = { 21, sSafariZoneCenter_LandMons };
const struct WildPokemon sSafariZoneCenter_WaterMons[] =
{
    { 20, 25, SPECIES_PSYDUCK },
    { 20, 25, SPECIES_PSYDUCK },
    { 25, 30, SPECIES_PSYDUCK },
    { 30, 35, SPECIES_PSYDUCK },
    { 35, 40, SPECIES_PSYDUCK },
};

const struct WildPokemonInfo sSafariZoneCenter_WaterMonsInfo = { 2, sSafariZoneCenter_WaterMons };
const struct WildPokemon sSafariZoneCenter_FishingMons[] =
{
    { 5, 5, SPECIES_MAGIKARP },
    { 5, 5, SPECIES_MAGIKARP },
    { 5, 15, SPECIES_GOLDEEN },
    { 5, 15, SPECIES_MAGIKARP },
    { 5, 15, SPECIES_POLIWAG },
    { 15, 25, SPECIES_GOLDEEN },
    { 20, 30, SPECIES_SEAKING },
    { 15, 25, SPECIES_DRATINI },
    { 15, 35, SPECIES_PSYDUCK },
    { 25, 35, SPECIES_DRAGONAIR },
};

const struct WildPokemonInfo sSafariZoneCenter_FishingMonsInfo = { 20, sSafariZoneCenter_FishingMons };



const struct WildPokemon sSafariZoneEast_LandMons[] =
{
    { 24, 24, SPECIES_NIDORAN_M },
    { 26, 26, SPECIES_DODUO },
    { 23, 23, SPECIES_EXEGGCUTE },
    { 25, 25, SPECIES_EXEGGCUTE },
    { 22, 22, SPECIES_PARAS },
    { 33, 33, SPECIES_NIDORINO },
    { 24, 24, SPECIES_NIDORAN_F },
    { 25, 25, SPECIES_PARASECT },
    { 22, 22, SPECIES_PARAS },
    { 25, 25, SPECIES_KANGASKHAN },
    { 22, 22, SPECIES_PARAS },
    { 28, 28, SPECIES_SCYTHER },
};

const struct WildPokemonInfo sSafariZoneEast_LandMonsInfo = { 21, sSafariZoneEast_LandMons };
const struct WildPokemon sSafariZoneEast_WaterMons[] =
{
    { 20, 25, SPECIES_PSYDUCK },
    { 20, 25, SPECIES_PSYDUCK },
    { 25, 30, SPECIES_PSYDUCK },
    { 30, 35, SPECIES_PSYDUCK },
    { 35, 40, SPECIES_PSYDUCK },
};

const struct WildPokemonInfo sSafariZoneEast_WaterMonsInfo = { 2, sSafariZoneEast_WaterMons };
const struct WildPokemon sSafariZoneEast_FishingMons[] =
{
    { 5, 5, SPECIES_MAGIKARP },
    { 5, 5, SPECIES_MAGIKARP },
    { 5, 15, SPECIES_GOLDEEN },
    { 5, 15, SPECIES_MAGIKARP },
    { 5, 15, SPECIES_POLIWAG },
    { 15, 25, SPECIES_GOLDEEN },
    { 20, 30, SPECIES_SEAKING },
    { 15, 25, SPECIES_DRATINI },
    { 15, 35, SPECIES_PSYDUCK },
    { 25, 35, SPECIES_DRAGONAIR },
};

const struct WildPokemonInfo sSafariZoneEast_FishingMonsInfo = { 20, sSafariZoneEast_FishingMons };



const struct WildPokemon sSafariZoneNorth_LandMons[] =
{
    { 26, 26, SPECIES_RHYHORN },
    { 30, 30, SPECIES_NIDORAN_M },
    { 25, 25, SPECIES_EXEGGCUTE },
    { 27, 27, SPECIES_EXEGGCUTE },
    { 23, 23, SPECIES_PARAS },
    { 30, 30, SPECIES_NIDORINO },
    { 30, 30, SPECIES_NIDORINA },
    { 32, 32, SPECIES_VENOMOTH },
    { 23, 23, SPECIES_PARAS },
    { 26, 26, SPECIES_CHANSEY },
    { 23, 23, SPECIES_PARAS },
    { 28, 28, SPECIES_TAUROS },
};

const struct WildPokemonInfo sSafariZoneNorth_LandMonsInfo = { 21, sSafariZoneNorth_LandMons };
const struct WildPokemon sSafariZoneNorth_WaterMons[] =
{
    { 20, 25, SPECIES_PSYDUCK },
    { 20, 25, SPECIES_PSYDUCK },
    { 25, 30, SPECIES_PSYDUCK },
    { 30, 35, SPECIES_PSYDUCK },
    { 35, 40, SPECIES_PSYDUCK },
};

const struct WildPokemonInfo sSafariZoneNorth_WaterMonsInfo = { 2, sSafariZoneNorth_WaterMons };
const struct WildPokemon sSafariZoneNorth_FishingMons[] =
{
    { 5, 5, SPECIES_MAGIKARP },
    { 5, 5, SPECIES_MAGIKARP },
    { 5, 15, SPECIES_GOLDEEN },
    { 5, 15, SPECIES_MAGIKARP },
    { 5, 15, SPECIES_POLIWAG },
    { 15, 25, SPECIES_GOLDEEN },
    { 20, 30, SPECIES_SEAKING },
    { 15, 25, SPECIES_DRATINI },
    { 15, 35, SPECIES_PSYDUCK },
    { 25, 35, SPECIES_DRAGONAIR },
};

const struct WildPokemonInfo sSafariZoneNorth_FishingMonsInfo = { 20, sSafariZoneNorth_FishingMons };



const struct WildPokemon sSafariZoneWest_LandMons[] =
{
    { 26, 26, SPECIES_DODUO },
    { 22, 22, SPECIES_NIDORAN_M },
    { 25, 25, SPECIES_EXEGGCUTE },
    { 27, 27, SPECIES_EXEGGCUTE },
    { 23, 23, SPECIES_VENONAT },
    { 30, 30, SPECIES_NIDORINO },
    { 30, 30, SPECIES_NIDORAN_F },
    { 32, 32, SPECIES_VENOMOTH },
    { 23, 23, SPECIES_VENONAT },
    { 25, 25, SPECIES_TAUROS },
    { 23, 23, SPECIES_VENONAT },
    { 28, 28, SPECIES_KANGASKHAN },
};

const struct WildPokemonInfo sSafariZoneWest_LandMonsInfo = { 21, sSafariZoneWest_LandMons };
const struct WildPokemon sSafariZoneWest_WaterMons[] =
{
    { 20, 25, SPECIES_PSYDUCK },
    { 20, 25, SPECIES_PSYDUCK },
    { 25, 30, SPECIES_PSYDUCK },
    { 30, 35, SPECIES_PSYDUCK },
    { 35, 40, SPECIES_PSYDUCK },
};

const struct WildPokemonInfo sSafariZoneWest_WaterMonsInfo = { 2, sSafariZoneWest_WaterMons };
const struct WildPokemon sSafariZoneWest_FishingMons[] =
{
    { 5, 5, SPECIES_MAGIKARP },
    { 5, 5, SPECIES_MAGIKARP },
    { 5, 15, SPECIES_GOLDEEN },
    { 5, 15, SPECIES_MAGIKARP },
    { 5, 15, SPECIES_POLIWAG },
    { 15, 25, SPECIES_GOLDEEN },
    { 20, 30, SPECIES_SEAKING },
    { 15, 25, SPECIES_DRATINI },
    { 15, 35, SPECIES_PSYDUCK },
    { 25, 35, SPECIES_DRAGONAIR },
};

const struct WildPokemonInfo sSafariZoneWest_FishingMonsInfo = { 20, sSafariZoneWest_FishingMons };



const struct WildPokemon sCeruleanCave1F_LandMons[] =
{
    { 49, 49, SPECIES_MAGNETON },
    { 49, 49, SPECIES_PARASECT },
    { 46, 46, SPECIES_GOLBAT },
    { 46, 46, SPECIES_MACHOKE },
    { 52, 52, SPECIES_PRIMEAPE },
    { 52, 52, SPECIES_DITTO },
    { 58, 58, SPECIES_ELECTRODE },
    { 58, 58, SPECIES_PARASECT },
    { 55, 55, SPECIES_GOLBAT },
    { 55, 55, SPECIES_WOBBUFFET },
    { 61, 61, SPECIES_PRIMEAPE },
    { 61, 61, SPECIES_DITTO },
};

const struct WildPokemonInfo sCeruleanCave1F_LandMonsInfo = { 7, sCeruleanCave1F_LandMons };
const struct WildPokemon sCeruleanCave1F_WaterMons[] =
{
    { 30, 40, SPECIES_PSYDUCK },
    { 40, 50, SPECIES_GOLDUCK },
    { 45, 55, SPECIES_GOLDUCK },
    { 40, 50, SPECIES_PSYDUCK },
    { 40, 50, SPECIES_PSYDUCK },
};

const struct WildPokemonInfo sCeruleanCave1F_WaterMonsInfo = { 2, sCeruleanCave1F_WaterMons };
const struct WildPokemon sCeruleanCave1F_RockSmashMons[] =
{
    { 30, 40, SPECIES_GEODUDE },
    { 40, 50, SPECIES_GRAVELER },
    { 45, 55, SPECIES_GRAVELER },
    { 40, 50, SPECIES_GEODUDE },
    { 40, 50, SPECIES_GEODUDE },
};

const struct WildPokemonInfo sCeruleanCave1F_RockSmashMonsInfo = { 50, sCeruleanCave1F_RockSmashMons };
const struct WildPokemon sCeruleanCave1F_FishingMons[] =
{
    { 5, 5, SPECIES_MAGIKARP },
    { 5, 5, SPECIES_MAGIKARP },
    { 5, 15, SPECIES_POLIWAG },
    { 5, 15, SPECIES_MAGIKARP },
    { 5, 15, SPECIES_GOLDEEN },
    { 15, 25, SPECIES_POLIWAG },
    { 20, 30, SPECIES_POLIWHIRL },
    { 15, 25, SPECIES_GYARADOS },
    { 15, 25, SPECIES_PSYDUCK },
    { 25, 35, SPECIES_PSYDUCK },
};

const struct WildPokemonInfo sCeruleanCave1F_FishingMonsInfo = { 20, sCeruleanCave1F_FishingMons };



const struct WildPokemon sCeruleanCave2F_LandMons[] =
{
    { 49, 49, SPECIES_GOLBAT },
    { 49, 49, SPECIES_MACHOKE },
    { 52, 52, SPECIES_MAGNETON },
    { 52, 52, SPECIES_PARASECT },
    { 55, 55, SPECIES_KADABRA },
    { 55, 55, SPECIES_DITTO },
    { 58, 58, SPECIES_GOLBAT },
    { 58, 58, SPECIES_WOBBUFFET },
    { 61, 61, SPECIES_ELECTRODE },
    { 61, 61, SPECIES_PARASECT },
    { 64, 64, SPECIES_KADABRA },
    { 64, 64, SPECIES_DITTO },
};

const struct WildPokemonInfo sCeruleanCave2F_LandMonsInfo = { 7, sCeruleanCave2F_LandMons };
const struct WildPokemon sCeruleanCave2F_RockSmashMons[] =
{
    { 35, 45, SPECIES_GEODUDE },
    { 45, 55, SPECIES_GRAVELER },
    { 50, 60, SPECIES_GRAVELER },
    { 45, 55, SPECIES_GEODUDE },
    { 45, 55, SPECIES_GEODUDE },
};

const struct WildPokemonInfo sCeruleanCave2F_RockSmashMonsInfo = { 50, sCeruleanCave2F_RockSmashMons };



const struct WildPokemon sCeruleanCaveB1F_LandMons[] =
{
    { 58, 58, SPECIES_KADABRA },
    { 58, 58, SPECIES_DITTO },
    { 55, 55, SPECIES_MAGNETON },
    { 55, 55, SPECIES_PARASECT },
    { 52, 52, SPECIES_GOLBAT },
    { 52, 52, SPECIES_MACHOKE },
    { 67, 67, SPECIES_KADABRA },
    { 67, 67, SPECIES_DITTO },
    { 64, 64, SPECIES_ELECTRODE },
    { 64, 64, SPECIES_PARASECT },
    { 61, 61, SPECIES_GOLBAT },
    { 61, 61, SPECIES_WOBBUFFET },
};

const struct WildPokemonInfo sCeruleanCaveB1F_LandMonsInfo = { 7, sCeruleanCaveB1F_LandMons };
const struct WildPokemon sCeruleanCaveB1F_WaterMons[] =
{
    { 40, 50, SPECIES_PSYDUCK },
    { 50, 60, SPECIES_GOLDUCK },
    { 55, 65, SPECIES_GOLDUCK },
    { 50, 60, SPECIES_PSYDUCK },
    { 50, 60, SPECIES_PSYDUCK },
};

const struct WildPokemonInfo sCeruleanCaveB1F_WaterMonsInfo = { 2, sCeruleanCaveB1F_WaterMons };
const struct WildPokemon sCeruleanCaveB1F_RockSmashMons[] =
{
    { 40, 50, SPECIES_GEODUDE },
    { 50, 60, SPECIES_GRAVELER },
    { 55, 65, SPECIES_GRAVELER },
    { 50, 60, SPECIES_GEODUDE },
    { 50, 60, SPECIES_GEODUDE },
};

const struct WildPokemonInfo sCeruleanCaveB1F_RockSmashMonsInfo = { 50, sCeruleanCaveB1F_RockSmashMons };
const struct WildPokemon sCeruleanCaveB1F_FishingMons[] =
{
    { 5, 5, SPECIES_MAGIKARP },
    { 5, 5, SPECIES_MAGIKARP },
    { 5, 15, SPECIES_POLIWAG },
    { 5, 15, SPECIES_MAGIKARP },
    { 5, 15, SPECIES_GOLDEEN },
    { 15, 25, SPECIES_POLIWAG },
    { 20, 30, SPECIES_POLIWHIRL },
    { 15, 25, SPECIES_GYARADOS },
    { 15, 25, SPECIES_PSYDUCK },
    { 25, 35, SPECIES_GYARADOS },
};

const struct WildPokemonInfo sCeruleanCaveB1F_FishingMonsInfo = { 20, sCeruleanCaveB1F_FishingMons };



const struct WildPokemon sRockTunnel1F_LandMons[] =
{
    { 15, 15, SPECIES_ZUBAT },
    { 16, 16, SPECIES_GEODUDE },
    { 16, 16, SPECIES_MANKEY },
    { 17, 17, SPECIES_GEODUDE },
    { 16, 16, SPECIES_ZUBAT },
    { 16, 16, SPECIES_MACHOP },
    { 17, 17, SPECIES_MANKEY },
    { 17, 17, SPECIES_MACHOP },
    { 15, 15, SPECIES_GEODUDE },
    { 13, 13, SPECIES_ONIX },
    { 15, 15, SPECIES_GEODUDE },
    { 15, 15, SPECIES_ONIX },
};

const struct WildPokemonInfo sRockTunnel1F_LandMonsInfo = { 7, sRockTunnel1F_LandMons };



const struct WildPokemon sRockTunnelB1F_LandMons[] =
{
    { 16, 16, SPECIES_ZUBAT },
    { 17, 17, SPECIES_GEODUDE },
    { 17, 17, SPECIES_MANKEY },
    { 16, 16, SPECIES_GEODUDE },
    { 15, 15, SPECIES_ZUBAT },
    { 17, 17, SPECIES_MACHOP },
    { 16, 16, SPECIES_MANKEY },
    { 13, 13, SPECIES_ONIX },
    { 15, 15, SPECIES_GEODUDE },
    { 15, 15, SPECIES_ONIX },
    { 15, 15, SPECIES_GEODUDE },
    { 17, 17, SPECIES_ONIX },
};

const struct WildPokemonInfo sRockTunnelB1F_LandMonsInfo = { 7, sRockTunnelB1F_LandMons };
const struct WildPokemon sRockTunnelB1F_RockSmashMons[] =
{
    { 5, 20, SPECIES_GEODUDE },
    { 10, 20, SPECIES_GEODUDE },
    { 15, 30, SPECIES_GEODUDE },
    { 25, 40, SPECIES_GRAVELER },
    { 30, 40, SPECIES_GRAVELER },
};

const struct WildPokemonInfo sRockTunnelB1F_RockSmashMonsInfo = { 50, sRockTunnelB1F_RockSmashMons };



const struct WildPokemon sSeafoamIslands1F_LandMons[] =
{
    { 27, 27, SPECIES_PSYDUCK },
    { 29, 29, SPECIES_PSYDUCK },
    { 31, 31, SPECIES_PSYDUCK },
    { 22, 22, SPECIES_ZUBAT },
    { 22, 22, SPECIES_ZUBAT },
    { 24, 24, SPECIES_ZUBAT },
    { 26, 26, SPECIES_GOLBAT },
    { 28, 28, SPECIES_GOLBAT },
    { 33, 33, SPECIES_PSYDUCK },
    { 26, 26, SPECIES_ZUBAT },
    { 26, 26, SPECIES_PSYDUCK },
    { 30, 30, SPECIES_GOLBAT },
};

const struct WildPokemonInfo sSeafoamIslands1F_LandMonsInfo = { 7, sSeafoamIslands1F_LandMons };



const struct WildPokemon sSeafoamIslandsB1F_LandMons[] =
{
    { 29, 29, SPECIES_PSYDUCK },
    { 31, 31, SPECIES_PSYDUCK },
    { 28, 28, SPECIES_SEEL },
    { 22, 22, SPECIES_ZUBAT },
    { 22, 22, SPECIES_ZUBAT },
    { 24, 24, SPECIES_ZUBAT },
    { 26, 26, SPECIES_GOLBAT },
    { 28, 28, SPECIES_GOLBAT },
    { 33, 33, SPECIES_GOLDUCK },
    { 26, 26, SPECIES_ZUBAT },
    { 35, 35, SPECIES_GOLDUCK },
    { 30, 30, SPECIES_GOLBAT },
};

const struct WildPokemonInfo sSeafoamIslandsB1F_LandMonsInfo = { 7, sSeafoamIslandsB1F_LandMons };



const struct WildPokemon sSeafoamIslandsB2F_LandMons[] =
{
    { 30, 30, SPECIES_PSYDUCK },
    { 32, 32, SPECIES_PSYDUCK },
    { 30, 30, SPECIES_SEEL },
    { 32, 32, SPECIES_SEEL },
    { 22, 22, SPECIES_ZUBAT },
    { 24, 24, SPECIES_ZUBAT },
    { 26, 26, SPECIES_GOLBAT },
    { 34, 34, SPECIES_GOLDUCK },
    { 32, 32, SPECIES_GOLDUCK },
    { 28, 28, SPECIES_GOLBAT },
    { 32, 32, SPECIES_GOLDUCK },
    { 30, 30, SPECIES_GOLBAT },
};

const struct WildPokemonInfo sSeafoamIslandsB2F_LandMonsInfo = { 7, sSeafoamIslandsB2F_LandMons };



const struct WildPokemon sSeafoamIslandsB3F_LandMons[] =
{
    { 30, 30, SPECIES_SEEL },
    { 32, 32, SPECIES_SEEL },
    { 32, 32, SPECIES_PSYDUCK },
    { 30, 30, SPECIES_PSYDUCK },
    { 32, 32, SPECIES_GOLDUCK },
    { 24, 24, SPECIES_ZUBAT },
    { 26, 26, SPECIES_GOLBAT },
    { 34, 34, SPECIES_GOLDUCK },
    { 32, 32, SPECIES_DEWGONG },
    { 28, 28, SPECIES_GOLBAT },
    { 34, 34, SPECIES_DEWGONG },
    { 30, 30, SPECIES_GOLBAT },
};

const struct WildPokemonInfo sSeafoamIslandsB3F_LandMonsInfo = { 7, sSeafoamIslandsB3F_LandMons };
const struct WildPokemon sSeafoamIslandsB3F_WaterMons[] =
{
    { 25, 35, SPECIES_SEEL },
    { 25, 30, SPECIES_HORSEA },
    { 35, 40, SPECIES_DEWGONG },
    { 30, 40, SPECIES_PSYDUCK },
    { 35, 40, SPECIES_GOLDUCK },
};

const struct WildPokemonInfo sSeafoamIslandsB3F_WaterMonsInfo = { 2, sSeafoamIslandsB3F_WaterMons };
const struct WildPokemon sSeafoamIslandsB3F_FishingMons[] =
{
    { 5, 5, SPECIES_MAGIKARP },
    { 5, 5, SPECIES_MAGIKARP },
    { 5, 15, SPECIES_HORSEA },
    { 5, 15, SPECIES_MAGIKARP },
    { 5, 15, SPECIES_KRABBY },
    { 15, 25, SPECIES_HORSEA },
    { 20, 30, SPECIES_HORSEA },
    { 15, 25, SPECIES_GYARADOS },
    { 15, 25, SPECIES_PSYDUCK },
    { 25, 35, SPECIES_GYARADOS },
};

const struct WildPokemonInfo sSeafoamIslandsB3F_FishingMonsInfo = { 20, sSeafoamIslandsB3F_FishingMons };



const struct WildPokemon sSeafoamIslandsB4F_LandMons[] =
{
    { 30, 30, SPECIES_SEEL },
    { 32, 32, SPECIES_SEEL },
    { 32, 32, SPECIES_PSYDUCK },
    { 34, 34, SPECIES_SEEL },
    { 32, 32, SPECIES_GOLDUCK },
    { 26, 26, SPECIES_GOLBAT },
    { 34, 34, SPECIES_DEWGONG },
    { 34, 34, SPECIES_GOLDUCK },
    { 36, 36, SPECIES_DEWGONG },
    { 28, 28, SPECIES_GOLBAT },
    { 36, 36, SPECIES_DEWGONG },
    { 30, 30, SPECIES_GOLBAT },
};

const struct WildPokemonInfo sSeafoamIslandsB4F_LandMonsInfo = { 7, sSeafoamIslandsB4F_LandMons };
const struct WildPokemon sSeafoamIslandsB4F_WaterMons[] =
{
    { 25, 35, SPECIES_SEEL },
    { 25, 30, SPECIES_HORSEA },
    { 35, 40, SPECIES_DEWGONG },
    { 30, 40, SPECIES_PSYDUCK },
    { 35, 40, SPECIES_GOLDUCK },
};

const struct WildPokemonInfo sSeafoamIslandsB4F_WaterMonsInfo = { 2, sSeafoamIslandsB4F_WaterMons };
const struct WildPokemon sSeafoamIslandsB4F_FishingMons[] =
{
    { 5, 5, SPECIES_MAGIKARP },
    { 5, 5, SPECIES_MAGIKARP },
    { 5, 15, SPECIES_HORSEA },
    { 5, 15, SPECIES_MAGIKARP },
    { 5, 15, SPECIES_KRABBY },
    { 15, 25, SPECIES_HORSEA },
    { 20, 30, SPECIES_HORSEA },
    { 15, 25, SPECIES_GYARADOS },
    { 15, 25, SPECIES_PSYDUCK },
    { 25, 35, SPECIES_GYARADOS },
};

const struct WildPokemonInfo sSeafoamIslandsB4F_FishingMonsInfo = { 20, sSeafoamIslandsB4F_FishingMons };



const struct WildPokemon sPokemonTower3F_LandMons[] =
{
    { 15, 15, SPECIES_GASTLY },
    { 16, 16, SPECIES_GASTLY },
    { 17, 17, SPECIES_GASTLY },
    { 13, 13, SPECIES_GASTLY },
    { 14, 14, SPECIES_GASTLY },
    { 18, 18, SPECIES_GASTLY },
    { 19, 19, SPECIES_GASTLY },
    { 15, 15, SPECIES_CUBONE },
    { 17, 17, SPECIES_GASTLY },
    { 17, 17, SPECIES_CUBONE },
    { 17, 17, SPECIES_GASTLY },
    { 20, 20, SPECIES_HAUNTER },
};

const struct WildPokemonInfo sPokemonTower3F_LandMonsInfo = { 2, sPokemonTower3F_LandMons };



const struct WildPokemon sPokemonTower4F_LandMons[] =
{
    { 15, 15, SPECIES_GASTLY },
    { 16, 16, SPECIES_GASTLY },
    { 17, 17, SPECIES_GASTLY },
    { 13, 13, SPECIES_GASTLY },
    { 14, 14, SPECIES_GASTLY },
    { 18, 18, SPECIES_GASTLY },
    { 20, 20, SPECIES_HAUNTER },
    { 15, 15, SPECIES_CUBONE },
    { 17, 17, SPECIES_GASTLY },
    { 17, 17, SPECIES_CUBONE },
    { 17, 17, SPECIES_GASTLY },
    { 19, 19, SPECIES_GASTLY },
};

const struct WildPokemonInfo sPokemonTower4F_LandMonsInfo = { 4, sPokemonTower4F_LandMons };



const struct WildPokemon sPokemonTower5F_LandMons[] =
{
    { 15, 15, SPECIES_GASTLY },
    { 16, 16, SPECIES_GASTLY },
    { 17, 17, SPECIES_GASTLY },
    { 13, 13, SPECIES_GASTLY },
    { 14, 14, SPECIES_GASTLY },
    { 18, 18, SPECIES_GASTLY },
    { 20, 20, SPECIES_HAUNTER },
    { 15, 15, SPECIES_CUBONE },
    { 17, 17, SPECIES_GASTLY },
    { 17, 17, SPECIES_CUBONE },
    { 17, 17, SPECIES_GASTLY },
    { 19, 19, SPECIES_GASTLY },
};

const struct WildPokemonInfo sPokemonTower5F_LandMonsInfo = { 6, sPokemonTower5F_LandMons };



const struct WildPokemon sPokemonTower6F_LandMons[] =
{
    { 16, 16, SPECIES_GASTLY },
    { 17, 17, SPECIES_GASTLY },
    { 18, 18, SPECIES_GASTLY },
    { 14, 14, SPECIES_GASTLY },
    { 15, 15, SPECIES_GASTLY },
    { 19, 19, SPECIES_GASTLY },
    { 21, 21, SPECIES_HAUNTER },
    { 17, 17, SPECIES_CUBONE },
    { 18, 18, SPECIES_GASTLY },
    { 19, 19, SPECIES_CUBONE },
    { 18, 18, SPECIES_GASTLY },
    { 23, 23, SPECIES_HAUNTER },
};

const struct WildPokemonInfo sPokemonTower6F_LandMonsInfo = { 8, sPokemonTower6F_LandMons };



const struct WildPokemon sPokemonTower7F_LandMons[] =
{
    { 16, 16, SPECIES_GASTLY },
    { 17, 17, SPECIES_GASTLY },
    { 18, 18, SPECIES_GASTLY },
    { 15, 15, SPECIES_GASTLY },
    { 19, 19, SPECIES_GASTLY },
    { 23, 23, SPECIES_HAUNTER },
    { 17, 17, SPECIES_CUBONE },
    { 19, 19, SPECIES_CUBONE },
    { 18, 18, SPECIES_GASTLY },
    { 23, 23, SPECIES_HAUNTER },
    { 18, 18, SPECIES_GASTLY },
    { 25, 25, SPECIES_HAUNTER },
};

const struct WildPokemonInfo sPokemonTower7F_LandMonsInfo = { 10, sPokemonTower7F_LandMons };



const struct WildPokemon sPowerPlant_LandMons[] =
{
    { 22, 22, SPECIES_VOLTORB },
    { 22, 22, SPECIES_MAGNEMITE },
    { 25, 25, SPECIES_VOLTORB },
    { 25, 25, SPECIES_MAGNEMITE },
    { 22, 22, SPECIES_PIKACHU },
    { 24, 24, SPECIES_PIKACHU },
    { 31, 31, SPECIES_MAGNETON },
    { 34, 34, SPECIES_MAGNETON },
    { 26, 26, SPECIES_PIKACHU },
    { 32, 32, SPECIES_ELECTABUZZ },
    { 26, 26, SPECIES_PIKACHU },
    { 35, 35, SPECIES_ELECTABUZZ },
};

const struct WildPokemonInfo sPowerPlant_LandMonsInfo = { 7, sPowerPlant_LandMons };



const struct WildPokemon sMtEmberExterior_LandMons[] =
{
    { 30, 30, SPECIES_PONYTA },
    { 38, 38, SPECIES_FEAROW },
    { 33, 33, SPECIES_PONYTA },
    { 32, 32, SPECIES_SPEAROW },
    { 35, 35, SPECIES_MACHOP },
    { 33, 33, SPECIES_GEODUDE },
    { 36, 36, SPECIES_PONYTA },
    { 40, 40, SPECIES_FEAROW },
    { 30, 30, SPECIES_SPEAROW },
    { 39, 39, SPECIES_RAPIDASH },
    { 30, 30, SPECIES_SPEAROW },
    { 42, 42, SPECIES_RAPIDASH },
};

const struct WildPokemonInfo sMtEmberExterior_LandMonsInfo = { 21, sMtEmberExterior_LandMons };
const struct WildPokemon sMtEmberExterior_RockSmashMons[] =
{
    { 5, 20, SPECIES_GEODUDE },
    { 10, 20, SPECIES_GEODUDE },
    { 15, 30, SPECIES_GEODUDE },
    { 25, 40, SPECIES_GRAVELER },
    { 30, 40, SPECIES_GRAVELER },
};

const struct WildPokemonInfo sMtEmberExterior_RockSmashMonsInfo = { 50, sMtEmberExterior_RockSmashMons };



const struct WildPokemon sMtEmberSummitPath1F_LandMons[] =
{
    { 33, 33, SPECIES_GEODUDE },
    { 35, 35, SPECIES_MACHOP },
    { 29, 29, SPECIES_GEODUDE },
    { 31, 31, SPECIES_GEODUDE },
    { 31, 31, SPECIES_MACHOP },
    { 33, 33, SPECIES_MACHOP },
    { 35, 35, SPECIES_GEODUDE },
    { 37, 37, SPECIES_MACHOP },
    { 37, 37, SPECIES_GEODUDE },
    { 39, 39, SPECIES_MACHOP },
    { 37, 37, SPECIES_GEODUDE },
    { 39, 39, SPECIES_MACHOP },
};

const struct WildPokemonInfo sMtEmberSummitPath1F_LandMonsInfo = { 7, sMtEmberSummitPath1F_LandMons };



const struct WildPokemon sMtEmberSummitPath2F_LandMons[] =
{
    { 34, 34, SPECIES_GEODUDE },
    { 36, 36, SPECIES_MACHOP },
    { 30, 30, SPECIES_GEODUDE },
    { 32, 32, SPECIES_GEODUDE },
    { 32, 32, SPECIES_MACHOP },
    { 34, 34, SPECIES_MACHOP },
    { 38, 38, SPECIES_MACHOKE },
    { 38, 38, SPECIES_MACHOKE },
    { 40, 40, SPECIES_MACHOKE },
    { 40, 40, SPECIES_MACHOKE },
    { 40, 40, SPECIES_MACHOKE },
    { 40, 40, SPECIES_MACHOKE },
};

const struct WildPokemonInfo sMtEmberSummitPath2F_LandMonsInfo = { 7, sMtEmberSummitPath2F_LandMons };
const struct WildPokemon sMtEmberSummitPath2F_RockSmashMons[] =
{
    { 5, 20, SPECIES_GEODUDE },
    { 10, 20, SPECIES_GEODUDE },
    { 15, 30, SPECIES_GEODUDE },
    { 25, 40, SPECIES_GRAVELER },
    { 30, 40, SPECIES_GRAVELER },
};

const struct WildPokemonInfo sMtEmberSummitPath2F_RockSmashMonsInfo = { 50, sMtEmberSummitPath2F_RockSmashMons };



const struct WildPokemon sMtEmberSummitPath3F_LandMons[] =
{
    { 33, 33, SPECIES_GEODUDE },
    { 35, 35, SPECIES_MACHOP },
    { 29, 29, SPECIES_GEODUDE },
    { 31, 31, SPECIES_GEODUDE },
    { 31, 31, SPECIES_MACHOP },
    { 33, 33, SPECIES_MACHOP },
    { 35, 35, SPECIES_GEODUDE },
    { 37, 37, SPECIES_MACHOP },
    { 37, 37, SPECIES_GEODUDE },
    { 39, 39, SPECIES_MACHOP },
    { 37, 37, SPECIES_GEODUDE },
    { 39, 39, SPECIES_MACHOP },
};

const struct WildPokemonInfo sMtEmberSummitPath3F_LandMonsInfo = { 7, sMtEmberSummitPath3F_LandMons };



const struct WildPokemon sMtEmberRubyPath1F_LandMons[] =
{
    { 36, 36, SPECIES_GEODUDE },
    { 38, 38, SPECIES_MACHOP },
    { 32, 32, SPECIES_GEODUDE },
    { 34, 34, SPECIES_GEODUDE },
    { 34, 34, SPECIES_MACHOP },
    { 36, 36, SPECIES_MACHOP },
    { 38, 38, SPECIES_GEODUDE },
    { 40, 40, SPECIES_MACHOKE },
    { 40, 40, SPECIES_GEODUDE },
    { 42, 42, SPECIES_MACHOKE },
    { 40, 40, SPECIES_GEODUDE },
    { 42, 42, SPECIES_MACHOKE },
};

const struct WildPokemonInfo sMtEmberRubyPath1F_LandMonsInfo = { 7, sMtEmberRubyPath1F_LandMons };
const struct WildPokemon sMtEmberRubyPath1F_RockSmashMons[] =
{
    { 25, 35, SPECIES_GEODUDE },
    { 30, 45, SPECIES_GRAVELER },
    { 35, 50, SPECIES_GRAVELER },
    { 30, 40, SPECIES_GEODUDE },
    { 30, 40, SPECIES_GEODUDE },
};

const struct WildPokemonInfo sMtEmberRubyPath1F_RockSmashMonsInfo = { 50, sMtEmberRubyPath1F_RockSmashMons };



const struct WildPokemon sMtEmberRubyPathB1F_LandMons[] =
{
    { 38, 38, SPECIES_GEODUDE },
    { 36, 36, SPECIES_GEODUDE },
    { 34, 34, SPECIES_GEODUDE },
    { 40, 40, SPECIES_GEODUDE },
    { 24, 24, SPECIES_SLUGMA },
    { 26, 26, SPECIES_SLUGMA },
    { 42, 42, SPECIES_GEODUDE },
    { 28, 28, SPECIES_SLUGMA },
    { 42, 42, SPECIES_GEODUDE },
    { 30, 30, SPECIES_SLUGMA },
    { 42, 42, SPECIES_GEODUDE },
    { 30, 30, SPECIES_SLUGMA },
};

const struct WildPokemonInfo sMtEmberRubyPathB1F_LandMonsInfo = { 7, sMtEmberRubyPathB1F_LandMons };
const struct WildPokemon sMtEmberRubyPathB1F_RockSmashMons[] =
{
    { 25, 35, SPECIES_GEODUDE },
    { 30, 45, SPECIES_GRAVELER },
    { 35, 50, SPECIES_GRAVELER },
    { 30, 40, SPECIES_GEODUDE },
    { 30, 40, SPECIES_GEODUDE },
};

const struct WildPokemonInfo sMtEmberRubyPathB1F_RockSmashMonsInfo = { 50, sMtEmberRubyPathB1F_RockSmashMons };



const struct WildPokemon sMtEmberRubyPathB2F_LandMons[] =
{
    { 40, 40, SPECIES_GEODUDE },
    { 26, 26, SPECIES_SLUGMA },
    { 42, 42, SPECIES_GEODUDE },
    { 24, 24, SPECIES_SLUGMA },
    { 28, 28, SPECIES_SLUGMA },
    { 30, 30, SPECIES_SLUGMA },
    { 44, 44, SPECIES_GEODUDE },
    { 32, 32, SPECIES_SLUGMA },
    { 44, 44, SPECIES_GEODUDE },
    { 22, 22, SPECIES_SLUGMA },
    { 44, 44, SPECIES_GEODUDE },
    { 22, 22, SPECIES_SLUGMA },
};

const struct WildPokemonInfo sMtEmberRubyPathB2F_LandMonsInfo = { 7, sMtEmberRubyPathB2F_LandMons };
const struct WildPokemon sMtEmberRubyPathB2F_RockSmashMons[] =
{
    { 25, 35, SPECIES_GEODUDE },
    { 30, 45, SPECIES_GRAVELER },
    { 35, 50, SPECIES_GRAVELER },
    { 30, 40, SPECIES_GEODUDE },
    { 30, 40, SPECIES_GEODUDE },
};

const struct WildPokemonInfo sMtEmberRubyPathB2F_RockSmashMonsInfo = { 50, sMtEmberRubyPathB2F_RockSmashMons };



const struct WildPokemon sMtEmberRubyPathB3F_LandMons[] =
{
    { 26, 26, SPECIES_SLUGMA },
    { 28, 28, SPECIES_SLUGMA },
    { 30, 30, SPECIES_SLUGMA },
    { 32, 32, SPECIES_SLUGMA },
    { 24, 24, SPECIES_SLUGMA },
    { 22, 22, SPECIES_SLUGMA },
    { 20, 20, SPECIES_SLUGMA },
    { 34, 34, SPECIES_SLUGMA },
    { 36, 36, SPECIES_SLUGMA },
    { 18, 18, SPECIES_SLUGMA },
    { 36, 36, SPECIES_SLUGMA },
    { 18, 18, SPECIES_SLUGMA },
};

const struct WildPokemonInfo sMtEmberRubyPathB3F_LandMonsInfo = { 7, sMtEmberRubyPathB3F_LandMons };
const struct WildPokemon sMtEmberRubyPathB3F_RockSmashMons[] =
{
    { 15, 25, SPECIES_SLUGMA },
    { 25, 35, SPECIES_SLUGMA },
    { 40, 45, SPECIES_MAGCARGO },
    { 35, 45, SPECIES_MAGCARGO },
    { 25, 35, SPECIES_MAGCARGO },
};

const struct WildPokemonInfo sMtEmberRubyPathB3F_RockSmashMonsInfo = { 50, sMtEmberRubyPathB3F_RockSmashMons };



const struct WildPokemon sMtEmberRubyPathB1FStairs_LandMons[] =
{
    { 40, 40, SPECIES_GEODUDE },
    { 26, 26, SPECIES_SLUGMA },
    { 42, 42, SPECIES_GEODUDE },
    { 24, 24, SPECIES_SLUGMA },
    { 28, 28, SPECIES_SLUGMA },
    { 30, 30, SPECIES_SLUGMA },
    { 44, 44, SPECIES_GEODUDE },
    { 32, 32, SPECIES_SLUGMA },
    { 44, 44, SPECIES_GEODUDE },
    { 22, 22, SPECIES_SLUGMA },
    { 44, 44, SPECIES_GEODUDE },
    { 22, 22, SPECIES_SLUGMA },
};

const struct WildPokemonInfo sMtEmberRubyPathB1FStairs_LandMonsInfo = { 7, sMtEmberRubyPathB1FStairs_LandMons };
const struct WildPokemon sMtEmberRubyPathB1FStairs_RockSmashMons[] =
{
    { 25, 35, SPECIES_GEODUDE },
    { 30, 45, SPECIES_GRAVELER },
    { 35, 50, SPECIES_GRAVELER },
    { 30, 40, SPECIES_GEODUDE },
    { 30, 40, SPECIES_GEODUDE },
};

const struct WildPokemonInfo sMtEmberRubyPathB1FStairs_RockSmashMonsInfo = { 50, sMtEmberRubyPathB1FStairs_RockSmashMons };



const struct WildPokemon sMtEmberRubyPathB2FStairs_LandMons[] =
{
    { 38, 38, SPECIES_GEODUDE },
    { 36, 36, SPECIES_GEODUDE },
    { 34, 34, SPECIES_GEODUDE },
    { 40, 40, SPECIES_GEODUDE },
    { 24, 24, SPECIES_SLUGMA },
    { 26, 26, SPECIES_SLUGMA },
    { 42, 42, SPECIES_GEODUDE },
    { 28, 28, SPECIES_SLUGMA },
    { 42, 42, SPECIES_GEODUDE },
    { 30, 30, SPECIES_SLUGMA },
    { 42, 42, SPECIES_GEODUDE },
    { 30, 30, SPECIES_SLUGMA },
};

const struct WildPokemonInfo sMtEmberRubyPathB2FStairs_LandMonsInfo = { 7, sMtEmberRubyPathB2FStairs_LandMons };
const struct WildPokemon sMtEmberRubyPathB2FStairs_RockSmashMons[] =
{
    { 25, 35, SPECIES_GEODUDE },
    { 30, 45, SPECIES_GRAVELER },
    { 35, 50, SPECIES_GRAVELER },
    { 30, 40, SPECIES_GEODUDE },
    { 30, 40, SPECIES_GEODUDE },
};

const struct WildPokemonInfo sMtEmberRubyPathB2FStairs_RockSmashMonsInfo = { 50, sMtEmberRubyPathB2FStairs_RockSmashMons };



const struct WildPokemon sThreeIslandBerryForest_LandMons[] =
{
    { 37, 37, SPECIES_PIDGEOTTO },
    { 35, 35, SPECIES_GLOOM },
    { 32, 32, SPECIES_PIDGEY },
    { 30, 30, SPECIES_ODDISH },
    { 34, 34, SPECIES_VENONAT },
    { 34, 34, SPECIES_DROWZEE },
    { 35, 35, SPECIES_EXEGGCUTE },
    { 31, 31, SPECIES_PSYDUCK },
    { 37, 37, SPECIES_VENOMOTH },
    { 37, 37, SPECIES_HYPNO },
    { 40, 40, SPECIES_VENOMOTH },
    { 40, 40, SPECIES_HYPNO },
};

const struct WildPokemonInfo sThreeIslandBerryForest_LandMonsInfo = { 21, sThreeIslandBerryForest_LandMons };
const struct WildPokemon sThreeIslandBerryForest_WaterMons[] =
{
    { 5, 20, SPECIES_PSYDUCK },
    { 20, 35, SPECIES_PSYDUCK },
    { 35, 40, SPECIES_PSYDUCK },
    { 35, 40, SPECIES_GOLDUCK },
    { 35, 40, SPECIES_GOLDUCK },
};

const struct WildPokemonInfo sThreeIslandBerryForest_WaterMonsInfo = { 2, sThreeIslandBerryForest_WaterMons };
const struct WildPokemon sThreeIslandBerryForest_FishingMons[] =
{
    { 5, 5, SPECIES_MAGIKARP },
    { 5, 5, SPECIES_MAGIKARP },
    { 5, 15, SPECIES_GOLDEEN },
    { 5, 15, SPECIES_MAGIKARP },
    { 5, 15, SPECIES_POLIWAG },
    { 15, 25, SPECIES_GOLDEEN },
    { 20, 30, SPECIES_SEAKING },
    { 15, 25, SPECIES_GYARADOS },
    { 15, 25, SPECIES_PSYDUCK },
    { 25, 35, SPECIES_PSYDUCK },
};

const struct WildPokemonInfo sThreeIslandBerryForest_FishingMonsInfo = { 20, sThreeIslandBerryForest_FishingMons };



const struct WildPokemon sFourIslandIcefallCaveEntrance_LandMons[] =
{
    { 43, 43, SPECIES_SEEL },
    { 45, 45, SPECIES_GOLBAT },
    { 45, 45, SPECIES_SEEL },
    { 47, 47, SPECIES_SEEL },
    { 40, 40, SPECIES_ZUBAT },
    { 49, 49, SPECIES_DEWGONG },
    { 51, 51, SPECIES_DEWGONG },
    { 41, 41, SPECIES_PSYDUCK },
    { 48, 48, SPECIES_GOLBAT },
    { 53, 53, SPECIES_DEWGONG },
    { 48, 48, SPECIES_GOLBAT },
    { 53, 53, SPECIES_DEWGONG },
};

const struct WildPokemonInfo sFourIslandIcefallCaveEntrance_LandMonsInfo = { 7, sFourIslandIcefallCaveEntrance_LandMons };
const struct WildPokemon sFourIslandIcefallCaveEntrance_WaterMons[] =
{
    { 5, 35, SPECIES_SEEL },
    { 5, 35, SPECIES_PSYDUCK },
    { 35, 40, SPECIES_DEWGONG },
    { 5, 15, SPECIES_WOOPER },
    { 5, 15, SPECIES_WOOPER },
};

const struct WildPokemonInfo sFourIslandIcefallCaveEntrance_WaterMonsInfo = { 2, sFourIslandIcefallCaveEntrance_WaterMons };
const struct WildPokemon sFourIslandIcefallCaveEntrance_FishingMons[] =
{
    { 5, 5, SPECIES_MAGIKARP },
    { 5, 5, SPECIES_MAGIKARP },
    { 5, 15, SPECIES_POLIWAG },
    { 5, 15, SPECIES_MAGIKARP },
    { 5, 15, SPECIES_GOLDEEN },
    { 15, 25, SPECIES_POLIWAG },
    { 20, 30, SPECIES_POLIWHIRL },
    { 15, 25, SPECIES_GYARADOS },
    { 15, 25, SPECIES_PSYDUCK },
    { 25, 35, SPECIES_PSYDUCK },
};

const struct WildPokemonInfo sFourIslandIcefallCaveEntrance_FishingMonsInfo = { 20, sFourIslandIcefallCaveEntrance_FishingMons };



const struct WildPokemon sFourIslandIcefallCave1F_LandMons[] =
{
    { 25, 25, SPECIES_SWINUB },
    { 45, 45, SPECIES_GOLBAT },
    { 45, 45, SPECIES_SEEL },
    { 27, 27, SPECIES_SWINUB },
    { 40, 40, SPECIES_ZUBAT },
    { 29, 29, SPECIES_SWINUB },
    { 30, 30, SPECIES_DELIBIRD },
    { 31, 31, SPECIES_SWINUB },
    { 48, 48, SPECIES_GOLBAT },
    { 23, 23, SPECIES_SWINUB },
    { 48, 48, SPECIES_GOLBAT },
    { 23, 23, SPECIES_SWINUB },
};

const struct WildPokemonInfo sFourIslandIcefallCave1F_LandMonsInfo = { 7, sFourIslandIcefallCave1F_LandMons };



const struct WildPokemon sFourIslandIcefallCaveB1F_LandMons[] =
{
    { 25, 25, SPECIES_SWINUB },
    { 45, 45, SPECIES_GOLBAT },
    { 45, 45, SPECIES_SEEL },
    { 27, 27, SPECIES_SWINUB },
    { 40, 40, SPECIES_ZUBAT },
    { 29, 29, SPECIES_SWINUB },
    { 30, 30, SPECIES_DELIBIRD },
    { 31, 31, SPECIES_SWINUB },
    { 48, 48, SPECIES_GOLBAT },
    { 23, 23, SPECIES_SWINUB },
    { 48, 48, SPECIES_GOLBAT },
    { 23, 23, SPECIES_SWINUB },
};

const struct WildPokemonInfo sFourIslandIcefallCaveB1F_LandMonsInfo = { 7, sFourIslandIcefallCaveB1F_LandMons };



const struct WildPokemon sFourIslandIcefallCaveBack_LandMons[] =
{
    { 43, 43, SPECIES_SEEL },
    { 45, 45, SPECIES_GOLBAT },
    { 45, 45, SPECIES_SEEL },
    { 47, 47, SPECIES_SEEL },
    { 40, 40, SPECIES_ZUBAT },
    { 49, 49, SPECIES_DEWGONG },
    { 51, 51, SPECIES_DEWGONG },
    { 41, 41, SPECIES_PSYDUCK },
    { 48, 48, SPECIES_GOLBAT },
    { 53, 53, SPECIES_DEWGONG },
    { 48, 48, SPECIES_GOLBAT },
    { 53, 53, SPECIES_DEWGONG },
};

const struct WildPokemonInfo sFourIslandIcefallCaveBack_LandMonsInfo = { 7, sFourIslandIcefallCaveBack_LandMons };
const struct WildPokemon sFourIslandIcefallCaveBack_WaterMons[] =
{
    { 5, 20, SPECIES_TENTACOOL },
    { 20, 35, SPECIES_TENTACOOL },
    { 35, 45, SPECIES_TENTACOOL },
    { 35, 45, SPECIES_TENTACRUEL },
    { 30, 45, SPECIES_LAPRAS },
};

const struct WildPokemonInfo sFourIslandIcefallCaveBack_WaterMonsInfo = { 2, sFourIslandIcefallCaveBack_WaterMons };
const struct WildPokemon sFourIslandIcefallCaveBack_FishingMons[] =
{
    { 5, 5, SPECIES_MAGIKARP },
    { 5, 5, SPECIES_MAGIKARP },
    { 5, 15, SPECIES_HORSEA },
    { 5, 15, SPECIES_MAGIKARP },
    { 5, 15, SPECIES_HORSEA },
    { 15, 25, SPECIES_HORSEA },
    { 15, 25, SPECIES_SHELLDER },
    { 15, 25, SPECIES_GYARADOS },
    { 25, 35, SPECIES_SEADRA },
    { 25, 35, SPECIES_PSYDUCK },
};

const struct WildPokemonInfo sFourIslandIcefallCaveBack_FishingMonsInfo = { 20, sFourIslandIcefallCaveBack_FishingMons };



const struct WildPokemon sSixIslandPatternBush_LandMons[] =
{
    { 9, 9, SPECIES_SPINARAK },
    { 9, 9, SPECIES_KAKUNA },
    { 14, 14, SPECIES_SPINARAK },
    { 6, 6, SPECIES_CATERPIE },
    { 6, 6, SPECIES_WEEDLE },
    { 15, 15, SPECIES_HERACROSS },
    { 9, 9, SPECIES_METAPOD },
    { 20, 20, SPECIES_HERACROSS },
    { 9, 9, SPECIES_LEDYBA },
    { 25, 25, SPECIES_HERACROSS },
    { 14, 14, SPECIES_LEDYBA },
    { 30, 30, SPECIES_HERACROSS },
};

const struct WildPokemonInfo sSixIslandPatternBush_LandMonsInfo = { 21, sSixIslandPatternBush_LandMons };



const struct WildPokemon sFiveIslandLostCaveRoom1_LandMons[] =
{
    { 40, 40, SPECIES_GASTLY },
    { 37, 37, SPECIES_ZUBAT },
    { 44, 44, SPECIES_HAUNTER },
    { 46, 46, SPECIES_HAUNTER },
    { 41, 41, SPECIES_GOLBAT },
    { 43, 43, SPECIES_GOLBAT },
    { 38, 38, SPECIES_GASTLY },
    { 48, 48, SPECIES_HAUNTER },
    { 50, 50, SPECIES_HAUNTER },
    { 22, 22, SPECIES_MURKROW },
    { 52, 52, SPECIES_HAUNTER },
    { 22, 22, SPECIES_MURKROW },
};

const struct WildPokemonInfo sFiveIslandLostCaveRoom1_LandMonsInfo = { 1, sFiveIslandLostCaveRoom1_LandMons };



const struct WildPokemon sFiveIslandLostCaveRoom2_LandMons[] =
{
    { 40, 40, SPECIES_GASTLY },
    { 37, 37, SPECIES_ZUBAT },
    { 44, 44, SPECIES_HAUNTER },
    { 46, 46, SPECIES_HAUNTER },
    { 41, 41, SPECIES_GOLBAT },
    { 43, 43, SPECIES_GOLBAT },
    { 38, 38, SPECIES_GASTLY },
    { 48, 48, SPECIES_HAUNTER },
    { 50, 50, SPECIES_HAUNTER },
    { 22, 22, SPECIES_MURKROW },
    { 52, 52, SPECIES_HAUNTER },
    { 22, 22, SPECIES_MURKROW },
};

const struct WildPokemonInfo sFiveIslandLostCaveRoom2_LandMonsInfo = { 2, sFiveIslandLostCaveRoom2_LandMons };



const struct WildPokemon sFiveIslandLostCaveRoom3_LandMons[] =
{
    { 40, 40, SPECIES_GASTLY },
    { 37, 37, SPECIES_ZUBAT },
    { 44, 44, SPECIES_HAUNTER },
    { 46, 46, SPECIES_HAUNTER },
    { 41, 41, SPECIES_GOLBAT },
    { 43, 43, SPECIES_GOLBAT },
    { 38, 38, SPECIES_GASTLY },
    { 48, 48, SPECIES_HAUNTER },
    { 50, 50, SPECIES_HAUNTER },
    { 22, 22, SPECIES_MURKROW },
    { 52, 52, SPECIES_HAUNTER },
    { 22, 22, SPECIES_MURKROW },
};

const struct WildPokemonInfo sFiveIslandLostCaveRoom3_LandMonsInfo = { 3, sFiveIslandLostCaveRoom3_LandMons };



const struct WildPokemon sFiveIslandLostCaveRoom4_LandMons[] =
{
    { 40, 40, SPECIES_GASTLY },
    { 37, 37, SPECIES_ZUBAT },
    { 44, 44, SPECIES_HAUNTER },
    { 46, 46, SPECIES_HAUNTER },
    { 41, 41, SPECIES_GOLBAT },
    { 43, 43, SPECIES_GOLBAT },
    { 38, 38, SPECIES_GASTLY },
    { 48, 48, SPECIES_HAUNTER },
    { 50, 50, SPECIES_HAUNTER },
    { 22, 22, SPECIES_MURKROW },
    { 52, 52, SPECIES_HAUNTER },
    { 22, 22, SPECIES_MURKROW },
};

const struct WildPokemonInfo sFiveIslandLostCaveRoom4_LandMonsInfo = { 4, sFiveIslandLostCaveRoom4_LandMons };



const struct WildPokemon sFiveIslandLostCaveRoom5_LandMons[] =
{
    { 40, 40, SPECIES_GASTLY },
    { 37, 37, SPECIES_ZUBAT },
    { 44, 44, SPECIES_HAUNTER },
    { 46, 46, SPECIES_HAUNTER },
    { 41, 41, SPECIES_GOLBAT },
    { 43, 43, SPECIES_GOLBAT },
    { 38, 38, SPECIES_GASTLY },
    { 48, 48, SPECIES_HAUNTER },
    { 50, 50, SPECIES_HAUNTER },
    { 22, 22, SPECIES_MURKROW },
    { 52, 52, SPECIES_HAUNTER },
    { 22, 22, SPECIES_MURKROW },
};

const struct WildPokemonInfo sFiveIslandLostCaveRoom5_LandMonsInfo = { 5, sFiveIslandLostCaveRoom5_LandMons };



const struct WildPokemon sFiveIslandLostCaveRoom6_LandMons[] =
{
    { 40, 40, SPECIES_GASTLY },
    { 37, 37, SPECIES_ZUBAT },
    { 44, 44, SPECIES_HAUNTER },
    { 46, 46, SPECIES_HAUNTER },
    { 41, 41, SPECIES_GOLBAT },
    { 43, 43, SPECIES_GOLBAT },
    { 38, 38, SPECIES_GASTLY },
    { 48, 48, SPECIES_HAUNTER },
    { 50, 50, SPECIES_HAUNTER },
    { 22, 22, SPECIES_MURKROW },
    { 52, 52, SPECIES_HAUNTER },
    { 22, 22, SPECIES_MURKROW },
};

const struct WildPokemonInfo sFiveIslandLostCaveRoom6_LandMonsInfo = { 6, sFiveIslandLostCaveRoom6_LandMons };



const struct WildPokemon sFiveIslandLostCaveRoom7_LandMons[] =
{
    { 40, 40, SPECIES_GASTLY },
    { 37, 37, SPECIES_ZUBAT },
    { 44, 44, SPECIES_HAUNTER },
    { 46, 46, SPECIES_HAUNTER },
    { 41, 41, SPECIES_GOLBAT },
    { 43, 43, SPECIES_GOLBAT },
    { 38, 38, SPECIES_GASTLY },
    { 48, 48, SPECIES_HAUNTER },
    { 50, 50, SPECIES_HAUNTER },
    { 22, 22, SPECIES_MURKROW },
    { 52, 52, SPECIES_HAUNTER },
    { 22, 22, SPECIES_MURKROW },
};

const struct WildPokemonInfo sFiveIslandLostCaveRoom7_LandMonsInfo = { 7, sFiveIslandLostCaveRoom7_LandMons };



const struct WildPokemon sFiveIslandLostCaveRoom8_LandMons[] =
{
    { 40, 40, SPECIES_GASTLY },
    { 37, 37, SPECIES_ZUBAT },
    { 44, 44, SPECIES_HAUNTER },
    { 46, 46, SPECIES_HAUNTER },
    { 41, 41, SPECIES_GOLBAT },
    { 43, 43, SPECIES_GOLBAT },
    { 38, 38, SPECIES_GASTLY },
    { 48, 48, SPECIES_HAUNTER },
    { 50, 50, SPECIES_HAUNTER },
    { 22, 22, SPECIES_MURKROW },
    { 52, 52, SPECIES_HAUNTER },
    { 22, 22, SPECIES_MURKROW },
};

const struct WildPokemonInfo sFiveIslandLostCaveRoom8_LandMonsInfo = { 8, sFiveIslandLostCaveRoom8_LandMons };



const struct WildPokemon sFiveIslandLostCaveRoom9_LandMons[] =
{
    { 40, 40, SPECIES_GASTLY },
    { 37, 37, SPECIES_ZUBAT },
    { 44, 44, SPECIES_HAUNTER },
    { 46, 46, SPECIES_HAUNTER },
    { 41, 41, SPECIES_GOLBAT },
    { 43, 43, SPECIES_GOLBAT },
    { 38, 38, SPECIES_GASTLY },
    { 48, 48, SPECIES_HAUNTER },
    { 50, 50, SPECIES_HAUNTER },
    { 22, 22, SPECIES_MURKROW },
    { 52, 52, SPECIES_HAUNTER },
    { 22, 22, SPECIES_MURKROW },
};

const struct WildPokemonInfo sFiveIslandLostCaveRoom9_LandMonsInfo = { 9, sFiveIslandLostCaveRoom9_LandMons };



const struct WildPokemon sFiveIslandLostCaveRoom10_LandMons[] =
{
    { 40, 40, SPECIES_GASTLY },
    { 37, 37, SPECIES_ZUBAT },
    { 44, 44, SPECIES_HAUNTER },
    { 46, 46, SPECIES_HAUNTER },
    { 41, 41, SPECIES_GOLBAT },
    { 43, 43, SPECIES_GOLBAT },
    { 38, 38, SPECIES_GASTLY },
    { 48, 48, SPECIES_HAUNTER },
    { 50, 50, SPECIES_HAUNTER },
    { 22, 22, SPECIES_MURKROW },
    { 52, 52, SPECIES_HAUNTER },
    { 22, 22, SPECIES_MURKROW },
};

const struct WildPokemonInfo sFiveIslandLostCaveRoom10_LandMonsInfo = { 10, sFiveIslandLostCaveRoom10_LandMons };



const struct WildPokemon sFiveIslandLostCaveRoom11_LandMons[] =
{
    { 40, 40, SPECIES_GASTLY },
    { 37, 37, SPECIES_ZUBAT },
    { 44, 44, SPECIES_HAUNTER },
    { 46, 46, SPECIES_HAUNTER },
    { 41, 41, SPECIES_GOLBAT },
    { 15, 15, SPECIES_MURKROW },
    { 20, 20, SPECIES_MURKROW },
    { 48, 48, SPECIES_HAUNTER },
    { 50, 50, SPECIES_HAUNTER },
    { 22, 22, SPECIES_MURKROW },
    { 52, 52, SPECIES_HAUNTER },
    { 22, 22, SPECIES_MURKROW },
};

const struct WildPokemonInfo sFiveIslandLostCaveRoom11_LandMonsInfo = { 5, sFiveIslandLostCaveRoom11_LandMons };



const struct WildPokemon sFiveIslandLostCaveRoom12_LandMons[] =
{
    { 40, 40, SPECIES_GASTLY },
    { 37, 37, SPECIES_ZUBAT },
    { 44, 44, SPECIES_HAUNTER },
    { 46, 46, SPECIES_HAUNTER },
    { 41, 41, SPECIES_GOLBAT },
    { 15, 15, SPECIES_MURKROW },
    { 20, 20, SPECIES_MURKROW },
    { 48, 48, SPECIES_HAUNTER },
    { 50, 50, SPECIES_HAUNTER },
    { 22, 22, SPECIES_MURKROW },
    { 52, 52, SPECIES_HAUNTER },
    { 22, 22, SPECIES_MURKROW },
};

const struct WildPokemonInfo sFiveIslandLostCaveRoom12_LandMonsInfo = { 5, sFiveIslandLostCaveRoom12_LandMons };



const struct WildPokemon sFiveIslandLostCaveRoom13_LandMons[] =
{
    { 40, 40, SPECIES_GASTLY },
    { 37, 37, SPECIES_ZUBAT },
    { 44, 44, SPECIES_HAUNTER },
    { 46, 46, SPECIES_HAUNTER },
    { 41, 41, SPECIES_GOLBAT },
    { 15, 15, SPECIES_MURKROW },
    { 20, 20, SPECIES_MURKROW },
    { 48, 48, SPECIES_HAUNTER },
    { 50, 50, SPECIES_HAUNTER },
    { 22, 22, SPECIES_MURKROW },
    { 52, 52, SPECIES_HAUNTER },
    { 22, 22, SPECIES_MURKROW },
};

const struct WildPokemonInfo sFiveIslandLostCaveRoom13_LandMonsInfo = { 5, sFiveIslandLostCaveRoom13_LandMons };



const struct WildPokemon sFiveIslandLostCaveRoom14_LandMons[] =
{
    { 40, 40, SPECIES_GASTLY },
    { 37, 37, SPECIES_ZUBAT },
    { 44, 44, SPECIES_HAUNTER },
    { 46, 46, SPECIES_HAUNTER },
    { 41, 41, SPECIES_GOLBAT },
    { 15, 15, SPECIES_MURKROW },
    { 20, 20, SPECIES_MURKROW },
    { 48, 48, SPECIES_HAUNTER },
    { 50, 50, SPECIES_HAUNTER },
    { 22, 22, SPECIES_MURKROW },
    { 52, 52, SPECIES_HAUNTER },
    { 22, 22, SPECIES_MURKROW },
};

const struct WildPokemonInfo sFiveIslandLostCaveRoom14_LandMonsInfo = { 5, sFiveIslandLostCaveRoom14_LandMons };



const struct WildPokemon sOneIslandKindleRoad_LandMons[] =
{
    { 32, 32, SPECIES_SPEAROW },
    { 34, 34, SPECIES_PONYTA },
    { 36, 36, SPECIES_FEAROW },
    { 31, 31, SPECIES_PONYTA },
    { 31, 31, SPECIES_GEODUDE },
    { 31, 31, SPECIES_MEOWTH },
    { 30, 30, SPECIES_SPEAROW },
    { 34, 34, SPECIES_PSYDUCK },
    { 37, 37, SPECIES_RAPIDASH },
    { 37, 37, SPECIES_PERSIAN },
    { 40, 40, SPECIES_RAPIDASH },
    { 40, 40, SPECIES_PERSIAN },
};

const struct WildPokemonInfo sOneIslandKindleRoad_LandMonsInfo = { 21, sOneIslandKindleRoad_LandMons };
const struct WildPokemon sOneIslandKindleRoad_WaterMons[] =
{
    { 5, 20, SPECIES_TENTACOOL },
    { 20, 35, SPECIES_TENTACOOL },
    { 35, 40, SPECIES_TENTACOOL },
    { 35, 40, SPECIES_TENTACRUEL },
    { 35, 40, SPECIES_TENTACRUEL },
};

const struct WildPokemonInfo sOneIslandKindleRoad_WaterMonsInfo = { 2, sOneIslandKindleRoad_WaterMons };
const struct WildPokemon sOneIslandKindleRoad_RockSmashMons[] =
{
    { 5, 20, SPECIES_GEODUDE },
    { 10, 20, SPECIES_GEODUDE },
    { 15, 30, SPECIES_GEODUDE },
    { 25, 40, SPECIES_GRAVELER },
    { 30, 40, SPECIES_GRAVELER },
};

const struct WildPokemonInfo sOneIslandKindleRoad_RockSmashMonsInfo = { 25, sOneIslandKindleRoad_RockSmashMons };
const struct WildPokemon sOneIslandKindleRoad_FishingMons[] =
{
    { 5, 5, SPECIES_MAGIKARP },
    { 5, 5, SPECIES_MAGIKARP },
    { 5, 15, SPECIES_HORSEA },
    { 5, 15, SPECIES_MAGIKARP },
    { 5, 15, SPECIES_HORSEA },
    { 15, 25, SPECIES_HORSEA },
    { 15, 25, SPECIES_HORSEA },
    { 15, 25, SPECIES_GYARADOS },
    { 25, 35, SPECIES_SEADRA },
    { 25, 35, SPECIES_PSYDUCK },
};

const struct WildPokemonInfo sOneIslandKindleRoad_FishingMonsInfo = { 20, sOneIslandKindleRoad_FishingMons };



const struct WildPokemon sOneIslandTreasureBeach_LandMons[] =
{
    { 32, 32, SPECIES_SPEAROW },
    { 33, 33, SPECIES_TANGELA },
    { 31, 31, SPECIES_SPEAROW },
    { 35, 35, SPECIES_TANGELA },
    { 36, 36, SPECIES_FEAROW },
    { 31, 31, SPECIES_MEOWTH },
    { 38, 38, SPECIES_FEAROW },
    { 31, 31, SPECIES_PSYDUCK },
    { 40, 40, SPECIES_FEAROW },
    { 37, 37, SPECIES_PERSIAN },
    { 40, 40, SPECIES_FEAROW },
    { 40, 40, SPECIES_PERSIAN },
};

const struct WildPokemonInfo sOneIslandTreasureBeach_LandMonsInfo = { 21, sOneIslandTreasureBeach_LandMons };
const struct WildPokemon sOneIslandTreasureBeach_WaterMons[] =
{
    { 5, 20, SPECIES_TENTACOOL },
    { 20, 35, SPECIES_TENTACOOL },
    { 35, 40, SPECIES_TENTACOOL },
    { 35, 40, SPECIES_TENTACRUEL },
    { 35, 40, SPECIES_TENTACRUEL },
};

const struct WildPokemonInfo sOneIslandTreasureBeach_WaterMonsInfo = { 2, sOneIslandTreasureBeach_WaterMons };
const struct WildPokemon sOneIslandTreasureBeach_FishingMons[] =
{
    { 5, 5, SPECIES_MAGIKARP },
    { 5, 5, SPECIES_MAGIKARP },
    { 5, 15, SPECIES_HORSEA },
    { 5, 15, SPECIES_MAGIKARP },
    { 5, 15, SPECIES_HORSEA },
    { 15, 25, SPECIES_HORSEA },
    { 15, 25, SPECIES_HORSEA },
    { 15, 25, SPECIES_GYARADOS },
    { 25, 35, SPECIES_SEADRA },
    { 25, 35, SPECIES_PSYDUCK },
};

const struct WildPokemonInfo sOneIslandTreasureBeach_FishingMonsInfo = { 20, sOneIslandTreasureBeach_FishingMons };



const struct WildPokemon sTwoIslandCapeBrink_LandMons[] =
{
    { 31, 31, SPECIES_SPEAROW },
    { 30, 30, SPECIES_ODDISH },
    { 32, 32, SPECIES_ODDISH },
    { 36, 36, SPECIES_GLOOM },
    { 36, 36, SPECIES_FEAROW },
    { 31, 31, SPECIES_MEOWTH },
    { 38, 38, SPECIES_GLOOM },
    { 31, 31, SPECIES_PSYDUCK },
    { 37, 37, SPECIES_GOLDUCK },
    { 37, 37, SPECIES_PERSIAN },
    { 40, 40, SPECIES_GOLDUCK },
    { 40, 40, SPECIES_PERSIAN },
};

const struct WildPokemonInfo sTwoIslandCapeBrink_LandMonsInfo = { 21, sTwoIslandCapeBrink_LandMons };
const struct WildPokemon sTwoIslandCapeBrink_WaterMons[] =
{
    { 5, 20, SPECIES_PSYDUCK },
    { 20, 35, SPECIES_PSYDUCK },
    { 35, 40, SPECIES_PSYDUCK },
    { 35, 40, SPECIES_GOLDUCK },
    { 35, 40, SPECIES_GOLDUCK },
};

const struct WildPokemonInfo sTwoIslandCapeBrink_WaterMonsInfo = { 2, sTwoIslandCapeBrink_WaterMons };
const struct WildPokemon sTwoIslandCapeBrink_FishingMons[] =
{
    { 5, 5, SPECIES_MAGIKARP },
    { 5, 5, SPECIES_MAGIKARP },
    { 5, 15, SPECIES_POLIWAG },
    { 5, 15, SPECIES_MAGIKARP },
    { 5, 15, SPECIES_GOLDEEN },
    { 15, 25, SPECIES_POLIWAG },
    { 20, 30, SPECIES_POLIWHIRL },
    { 15, 25, SPECIES_GYARADOS },
    { 15, 25, SPECIES_PSYDUCK },
    { 25, 35, SPECIES_PSYDUCK },
};

const struct WildPokemonInfo sTwoIslandCapeBrink_FishingMonsInfo = { 20, sTwoIslandCapeBrink_FishingMons };



const struct WildPokemon sThreeIslandBondBridge_LandMons[] =
{
    { 32, 32, SPECIES_PIDGEY },
    { 31, 31, SPECIES_ODDISH },
    { 29, 29, SPECIES_PIDGEY },
    { 36, 36, SPECIES_GLOOM },
    { 34, 34, SPECIES_PIDGEOTTO },
    { 31, 31, SPECIES_MEOWTH },
    { 34, 34, SPECIES_VENONAT },
    { 31, 31, SPECIES_PSYDUCK },
    { 37, 37, SPECIES_PIDGEOTTO },
    { 37, 37, SPECIES_PERSIAN },
    { 40, 40, SPECIES_PIDGEOTTO },
    { 40, 40, SPECIES_PERSIAN },
};

const struct WildPokemonInfo sThreeIslandBondBridge_LandMonsInfo = { 21, sThreeIslandBondBridge_LandMons };
const struct WildPokemon sThreeIslandBondBridge_WaterMons[] =
{
    { 5, 20, SPECIES_TENTACOOL },
    { 20, 35, SPECIES_TENTACOOL },
    { 35, 40, SPECIES_TENTACOOL },
    { 35, 40, SPECIES_TENTACRUEL },
    { 35, 40, SPECIES_TENTACRUEL },
};

const struct WildPokemonInfo sThreeIslandBondBridge_WaterMonsInfo = { 2, sThreeIslandBondBridge_WaterMons };
const struct WildPokemon sThreeIslandBondBridge_FishingMons[] =
{
    { 5, 5, SPECIES_MAGIKARP },
    { 5, 5, SPECIES_MAGIKARP },
    { 5, 15, SPECIES_HORSEA },
    { 5, 15, SPECIES_MAGIKARP },
    { 5, 15, SPECIES_HORSEA },
    { 15, 25, SPECIES_HORSEA },
    { 15, 25, SPECIES_HORSEA },
    { 15, 25, SPECIES_GYARADOS },
    { 25, 35, SPECIES_SEADRA },
    { 25, 35, SPECIES_PSYDUCK },
};

const struct WildPokemonInfo sThreeIslandBondBridge_FishingMonsInfo = { 20, sThreeIslandBondBridge_FishingMons };



const struct WildPokemon sThreeIslandPort_LandMons[] =
{
    { 15, 15, SPECIES_DUNSPARCE },
    { 15, 15, SPECIES_DUNSPARCE },
    { 10, 10, SPECIES_DUNSPARCE },
    { 10, 10, SPECIES_DUNSPARCE },
    { 20, 20, SPECIES_DUNSPARCE },
    { 20, 20, SPECIES_DUNSPARCE },
    { 25, 25, SPECIES_DUNSPARCE },
    { 30, 30, SPECIES_DUNSPARCE },
    { 25, 25, SPECIES_DUNSPARCE },
    { 30, 30, SPECIES_DUNSPARCE },
    { 5, 5, SPECIES_DUNSPARCE },
    { 35, 35, SPECIES_DUNSPARCE },
};

const struct WildPokemonInfo sThreeIslandPort_LandMonsInfo = { 1, sThreeIslandPort_LandMons };



const struct WildPokemon sFiveIslandResortGorgeous_WaterMons[] =
{
    { 5, 35, SPECIES_TENTACOOL },
    { 5, 15, SPECIES_HOPPIP },
    { 35, 40, SPECIES_TENTACOOL },
    { 35, 40, SPECIES_TENTACRUEL },
    { 35, 40, SPECIES_TENTACRUEL },
};

const struct WildPokemonInfo sFiveIslandResortGorgeous_WaterMonsInfo = { 2, sFiveIslandResortGorgeous_WaterMons };
const struct WildPokemon sFiveIslandResortGorgeous_FishingMons[] =
{
    { 5, 5, SPECIES_MAGIKARP },
    { 5, 5, SPECIES_MAGIKARP },
    { 5, 15, SPECIES_HORSEA },
    { 5, 15, SPECIES_MAGIKARP },
    { 5, 15, SPECIES_HORSEA },
    { 15, 25, SPECIES_HORSEA },
    { 15, 25, SPECIES_QWILFISH },
    { 15, 25, SPECIES_GYARADOS },
    { 25, 35, SPECIES_SEADRA },
    { 25, 35, SPECIES_PSYDUCK },
};

const struct WildPokemonInfo sFiveIslandResortGorgeous_FishingMonsInfo = { 20, sFiveIslandResortGorgeous_FishingMons };



const struct WildPokemon sFiveIslandWaterLabyrinth_WaterMons[] =
{
    { 5, 20, SPECIES_TENTACOOL },
    { 5, 15, SPECIES_HOPPIP },
    { 35, 40, SPECIES_TENTACOOL },
    { 35, 40, SPECIES_TENTACRUEL },
    { 35, 40, SPECIES_TENTACRUEL },
};

const struct WildPokemonInfo sFiveIslandWaterLabyrinth_WaterMonsInfo = { 2, sFiveIslandWaterLabyrinth_WaterMons };
const struct WildPokemon sFiveIslandWaterLabyrinth_FishingMons[] =
{
    { 5, 5, SPECIES_MAGIKARP },
    { 5, 5, SPECIES_MAGIKARP },
    { 5, 15, SPECIES_HORSEA },
    { 5, 15, SPECIES_MAGIKARP },
    { 5, 15, SPECIES_HORSEA },
    { 15, 25, SPECIES_HORSEA },
    { 15, 25, SPECIES_QWILFISH },
    { 15, 25, SPECIES_GYARADOS },
    { 25, 35, SPECIES_SEADRA },
    { 25, 35, SPECIES_PSYDUCK },
};

const struct WildPokemonInfo sFiveIslandWaterLabyrinth_FishingMonsInfo = { 20, sFiveIslandWaterLabyrinth_FishingMons };



const struct WildPokemon sFiveIslandMeadow_LandMons[] =
{
    { 44, 44, SPECIES_PIDGEY },
    { 10, 10, SPECIES_SENTRET },
    { 48, 48, SPECIES_PIDGEOTTO },
    { 10, 10, SPECIES_HOPPIP },
    { 15, 15, SPECIES_SENTRET },
    { 41, 41, SPECIES_MEOWTH },
    { 15, 15, SPECIES_HOPPIP },
    { 41, 41, SPECIES_PSYDUCK },
    { 50, 50, SPECIES_PIDGEOTTO },
    { 47, 47, SPECIES_PERSIAN },
    { 50, 50, SPECIES_PIDGEOTTO },
    { 50, 50, SPECIES_PERSIAN },
};

const struct WildPokemonInfo sFiveIslandMeadow_LandMonsInfo = { 21, sFiveIslandMeadow_LandMons };
const struct WildPokemon sFiveIslandMeadow_WaterMons[] =
{
    { 5, 35, SPECIES_TENTACOOL },
    { 5, 15, SPECIES_HOPPIP },
    { 35, 40, SPECIES_TENTACOOL },
    { 35, 40, SPECIES_TENTACRUEL },
    { 35, 40, SPECIES_TENTACRUEL },
};

const struct WildPokemonInfo sFiveIslandMeadow_WaterMonsInfo = { 2, sFiveIslandMeadow_WaterMons };
const struct WildPokemon sFiveIslandMeadow_FishingMons[] =
{
    { 5, 5, SPECIES_MAGIKARP },
    { 5, 5, SPECIES_MAGIKARP },
    { 5, 15, SPECIES_HORSEA },
    { 5, 15, SPECIES_MAGIKARP },
    { 5, 15, SPECIES_HORSEA },
    { 15, 25, SPECIES_HORSEA },
    { 15, 25, SPECIES_QWILFISH },
    { 15, 25, SPECIES_GYARADOS },
    { 25, 35, SPECIES_SEADRA },
    { 25, 35, SPECIES_PSYDUCK },
};

const struct WildPokemonInfo sFiveIslandMeadow_FishingMonsInfo = { 20, sFiveIslandMeadow_FishingMons };



const struct WildPokemon sFiveIslandMemorialPillar_LandMons[] =
{
    { 10, 10, SPECIES_HOPPIP },
    { 12, 12, SPECIES_HOPPIP },
    { 8, 8, SPECIES_HOPPIP },
    { 14, 14, SPECIES_HOPPIP },
    { 10, 10, SPECIES_HOPPIP },
    { 12, 12, SPECIES_HOPPIP },
    { 16, 16, SPECIES_HOPPIP },
    { 6, 6, SPECIES_HOPPIP },
    { 8, 8, SPECIES_HOPPIP },
    { 14, 14, SPECIES_HOPPIP },
    { 8, 8, SPECIES_HOPPIP },
    { 14, 14, SPECIES_HOPPIP },
};

const struct WildPokemonInfo sFiveIslandMemorialPillar_LandMonsInfo = { 21, sFiveIslandMemorialPillar_LandMons };
const struct WildPokemon sFiveIslandMemorialPillar_WaterMons[] =
{
    { 5, 35, SPECIES_TENTACOOL },
    { 5, 15, SPECIES_HOPPIP },
    { 35, 40, SPECIES_TENTACOOL },
    { 35, 40, SPECIES_TENTACRUEL },
    { 35, 40, SPECIES_TENTACRUEL },
};

const struct WildPokemonInfo sFiveIslandMemorialPillar_WaterMonsInfo = { 2, sFiveIslandMemorialPillar_WaterMons };
const struct WildPokemon sFiveIslandMemorialPillar_FishingMons[] =
{
    { 5, 5, SPECIES_MAGIKARP },
    { 5, 5, SPECIES_MAGIKARP },
    { 5, 15, SPECIES_HORSEA },
    { 5, 15, SPECIES_MAGIKARP },
    { 5, 15, SPECIES_HORSEA },
    { 15, 25, SPECIES_HORSEA },
    { 15, 25, SPECIES_QWILFISH },
    { 15, 25, SPECIES_GYARADOS },
    { 25, 35, SPECIES_SEADRA },
    { 25, 35, SPECIES_PSYDUCK },
};

const struct WildPokemonInfo sFiveIslandMemorialPillar_FishingMonsInfo = { 20, sFiveIslandMemorialPillar_FishingMons };



const struct WildPokemon sSixIslandOutcastIsland_WaterMons[] =
{
    { 5, 20, SPECIES_TENTACOOL },
    { 20, 35, SPECIES_TENTACOOL },
    { 35, 40, SPECIES_TENTACOOL },
    { 35, 40, SPECIES_TENTACRUEL },
    { 35, 40, SPECIES_TENTACRUEL },
};

const struct WildPokemonInfo sSixIslandOutcastIsland_WaterMonsInfo = { 2, sSixIslandOutcastIsland_WaterMons };
const struct WildPokemon sSixIslandOutcastIsland_FishingMons[] =
{
    { 5, 5, SPECIES_MAGIKARP },
    { 5, 5, SPECIES_MAGIKARP },
    { 5, 15, SPECIES_HORSEA },
    { 5, 15, SPECIES_MAGIKARP },
    { 5, 15, SPECIES_HORSEA },
    { 15, 25, SPECIES_HORSEA },
    { 15, 25, SPECIES_QWILFISH },
    { 15, 25, SPECIES_GYARADOS },
    { 25, 35, SPECIES_SEADRA },
    { 25, 35, SPECIES_PSYDUCK },
};

const struct WildPokemonInfo sSixIslandOutcastIsland_FishingMonsInfo = { 20, sSixIslandOutcastIsland_FishingMons };



const struct WildPokemon sSixIslandGreenPath_WaterMons[] =
{
    { 5, 20, SPECIES_TENTACOOL },
    { 20, 35, SPECIES_TENTACOOL },
    { 35, 40, SPECIES_TENTACOOL },
    { 35, 40, SPECIES_TENTACRUEL },
    { 35, 40, SPECIES_TENTACRUEL },
};

const struct WildPokemonInfo sSixIslandGreenPath_WaterMonsInfo = { 2, sSixIslandGreenPath_WaterMons };
const struct WildPokemon sSixIslandGreenPath_FishingMons[] =
{
    { 5, 5, SPECIES_MAGIKARP },
    { 5, 5, SPECIES_MAGIKARP },
    { 5, 15, SPECIES_HORSEA },
    { 5, 15, SPECIES_MAGIKARP },
    { 5, 15, SPECIES_HORSEA },
    { 15, 25, SPECIES_HORSEA },
    { 15, 25, SPECIES_QWILFISH },
    { 15, 25, SPECIES_GYARADOS },
    { 25, 35, SPECIES_SEADRA },
    { 25, 35, SPECIES_PSYDUCK },
};

const struct WildPokemonInfo sSixIslandGreenPath_FishingMonsInfo = { 20, sSixIslandGreenPath_FishingMons };



const struct WildPokemon sSixIslandWaterPath_LandMons[] =
{
    { 44, 44, SPECIES_SPEAROW },
    { 10, 10, SPECIES_SENTRET },
    { 44, 44, SPECIES_ODDISH },
    { 48, 48, SPECIES_FEAROW },
    { 15, 15, SPECIES_SENTRET },
    { 41, 41, SPECIES_MEOWTH },
    { 48, 48, SPECIES_GLOOM },
    { 41, 41, SPECIES_PSYDUCK },
    { 50, 50, SPECIES_FEAROW },
    { 47, 47, SPECIES_PERSIAN },
    { 50, 50, SPECIES_FEAROW },
    { 50, 50, SPECIES_PERSIAN },
};

const struct WildPokemonInfo sSixIslandWaterPath_LandMonsInfo = { 21, sSixIslandWaterPath_LandMons };
const struct WildPokemon sSixIslandWaterPath_WaterMons[] =
{
    { 5, 20, SPECIES_TENTACOOL },
    { 20, 35, SPECIES_TENTACOOL },
    { 35, 40, SPECIES_TENTACOOL },
    { 35, 40, SPECIES_TENTACRUEL },
    { 35, 40, SPECIES_TENTACRUEL },
};

const struct WildPokemonInfo sSixIslandWaterPath_WaterMonsInfo = { 2, sSixIslandWaterPath_WaterMons };
const struct WildPokemon sSixIslandWaterPath_FishingMons[] =
{
    { 5, 5, SPECIES_MAGIKARP },
    { 5, 5, SPECIES_MAGIKARP },
    { 5, 15, SPECIES_HORSEA },
    { 5, 15, SPECIES_MAGIKARP },
    { 5, 15, SPECIES_HORSEA },
    { 15, 25, SPECIES_HORSEA },
    { 15, 25, SPECIES_QWILFISH },
    { 15, 25, SPECIES_GYARADOS },
    { 25, 35, SPECIES_SEADRA },
    { 25, 35, SPECIES_PSYDUCK },
};

const struct WildPokemonInfo sSixIslandWaterPath_FishingMonsInfo = { 20, sSixIslandWaterPath_FishingMons };



const struct WildPokemon sSixIslandRuinValley_LandMons[] =
{
    { 15, 15, SPECIES_NATU },
    { 44, 44, SPECIES_SPEAROW },
    { 18, 18, SPECIES_YANMA },
    { 15, 15, SPECIES_WOOPER },
    { 49, 49, SPECIES_FEAROW },
    { 43, 43, SPECIES_MEOWTH },
    { 25, 25, SPECIES_WOBBUFFET },
    { 41, 41, SPECIES_PSYDUCK },
    { 20, 20, SPECIES_NATU },
    { 49, 49, SPECIES_PERSIAN },
    { 20, 20, SPECIES_NATU },
    { 52, 52, SPECIES_PERSIAN },
};

const struct WildPokemonInfo sSixIslandRuinValley_LandMonsInfo = { 21, sSixIslandRuinValley_LandMons };
const struct WildPokemon sSixIslandRuinValley_WaterMons[] =
{
    { 5, 20, SPECIES_WOOPER },
    { 10, 20, SPECIES_WOOPER },
    { 15, 25, SPECIES_WOOPER },
    { 20, 25, SPECIES_WOOPER },
    { 20, 25, SPECIES_WOOPER },
};

const struct WildPokemonInfo sSixIslandRuinValley_WaterMonsInfo = { 2, sSixIslandRuinValley_WaterMons };
const struct WildPokemon sSixIslandRuinValley_FishingMons[] =
{
    { 5, 5, SPECIES_MAGIKARP },
    { 5, 5, SPECIES_MAGIKARP },
    { 5, 15, SPECIES_POLIWAG },
    { 5, 15, SPECIES_MAGIKARP },
    { 5, 15, SPECIES_GOLDEEN },
    { 15, 25, SPECIES_POLIWAG },
    { 20, 30, SPECIES_POLIWHIRL },
    { 15, 25, SPECIES_GYARADOS },
    { 15, 25, SPECIES_PSYDUCK },
    { 25, 35, SPECIES_PSYDUCK },
};

const struct WildPokemonInfo sSixIslandRuinValley_FishingMonsInfo = { 20, sSixIslandRuinValley_FishingMons };



const struct WildPokemon sSevenIslandTrainerTower_WaterMons[] =
{
    { 5, 20, SPECIES_TENTACOOL },
    { 20, 35, SPECIES_TENTACOOL },
    { 35, 40, SPECIES_TENTACOOL },
    { 35, 40, SPECIES_TENTACRUEL },
    { 35, 40, SPECIES_TENTACRUEL },
};

const struct WildPokemonInfo sSevenIslandTrainerTower_WaterMonsInfo = { 2, sSevenIslandTrainerTower_WaterMons };
const struct WildPokemon sSevenIslandTrainerTower_FishingMons[] =
{
    { 5, 5, SPECIES_MAGIKARP },
    { 5, 5, SPECIES_MAGIKARP },
    { 5, 15, SPECIES_HORSEA },
    { 5, 15, SPECIES_MAGIKARP },
    { 5, 15, SPECIES_HORSEA },
    { 15, 25, SPECIES_HORSEA },
    { 15, 25, SPECIES_QWILFISH },
    { 15, 25, SPECIES_GYARADOS },
    { 25, 35, SPECIES_SEADRA },
    { 25, 35, SPECIES_PSYDUCK },
};

const struct WildPokemonInfo sSevenIslandTrainerTower_FishingMonsInfo = { 20, sSevenIslandTrainerTower_FishingMons };



const struct WildPokemon sSevenIslandSevaultCanyonEntrance_LandMons[] =
{
    { 44, 44, SPECIES_SPEAROW },
    { 10, 10, SPECIES_SENTRET },
    { 10, 10, SPECIES_PHANPY },
    { 48, 48, SPECIES_FEAROW },
    { 15, 15, SPECIES_SENTRET },
    { 41, 41, SPECIES_MEOWTH },
    { 50, 50, SPECIES_FEAROW },
    { 41, 41, SPECIES_PSYDUCK },
    { 15, 15, SPECIES_PHANPY },
    { 47, 47, SPECIES_PERSIAN },
    { 15, 15, SPECIES_PHANPY },
    { 50, 50, SPECIES_PERSIAN },
};

const struct WildPokemonInfo sSevenIslandSevaultCanyonEntrance_LandMonsInfo = { 21, sSevenIslandSevaultCanyonEntrance_LandMons };



const struct WildPokemon sSevenIslandSevaultCanyon_LandMons[] =
{
    { 46, 46, SPECIES_GEODUDE },
    { 15, 15, SPECIES_PHANPY },
    { 46, 46, SPECIES_CUBONE },
    { 50, 50, SPECIES_FEAROW },
    { 52, 52, SPECIES_MAROWAK },
    { 43, 43, SPECIES_MEOWTH },
    { 54, 54, SPECIES_ONIX },
    { 30, 30, SPECIES_SKARMORY },
    { 15, 15, SPECIES_LARVITAR },
    { 49, 49, SPECIES_PERSIAN },
    { 20, 20, SPECIES_LARVITAR },
    { 52, 52, SPECIES_PERSIAN },
};

const struct WildPokemonInfo sSevenIslandSevaultCanyon_LandMonsInfo = { 21, sSevenIslandSevaultCanyon_LandMons };
const struct WildPokemon sSevenIslandSevaultCanyon_RockSmashMons[] =
{
    { 25, 35, SPECIES_GEODUDE },
    { 30, 45, SPECIES_GRAVELER },
    { 35, 50, SPECIES_GRAVELER },
    { 30, 40, SPECIES_GEODUDE },
    { 30, 40, SPECIES_GEODUDE },
};

const struct WildPokemonInfo sSevenIslandSevaultCanyon_RockSmashMonsInfo = { 25, sSevenIslandSevaultCanyon_RockSmashMons };



const struct WildPokemon sSevenIslandTanobyRuins_WaterMons[] =
{
    { 5, 20, SPECIES_TENTACOOL },
    { 20, 35, SPECIES_TENTACOOL },
    { 35, 40, SPECIES_TENTACOOL },
    { 35, 40, SPECIES_TENTACRUEL },
    { 35, 40, SPECIES_TENTACRUEL },
};

const struct WildPokemonInfo sSevenIslandTanobyRuins_WaterMonsInfo = { 2, sSevenIslandTanobyRuins_WaterMons };
const struct WildPokemon sSevenIslandTanobyRuins_FishingMons[] =
{
    { 5, 5, SPECIES_MAGIKARP },
    { 5, 5, SPECIES_MAGIKARP },
    { 5, 15, SPECIES_HORSEA },
    { 5, 15, SPECIES_MAGIKARP },
    { 5, 15, SPECIES_HORSEA },
    { 15, 25, SPECIES_HORSEA },
    { 15, 25, SPECIES_QWILFISH },
    { 15, 25, SPECIES_GYARADOS },
    { 25, 35, SPECIES_SEADRA },
    { 25, 35, SPECIES_PSYDUCK },
};

const struct WildPokemonInfo sSevenIslandTanobyRuins_FishingMonsInfo = { 20, sSevenIslandTanobyRuins_FishingMons };

#define NUM_ENCOUTER_SPOTS  1
#define NUM_SLOTS           12

const u16 sForestSpecies[BASE_RANDOM_WILD_COUNT] = { SPECIES_CATERPIE, SPECIES_WEEDLE, SPECIES_PIDGEY, SPECIES_RATTATA, SPECIES_SPEAROW, SPECIES_PIKACHU, SPECIES_VULPIX, SPECIES_FARFETCHD, SPECIES_EEVEE, SPECIES_SENTRET, SPECIES_HOOTHOOT, SPECIES_LEDYBA };

// Forest
// SPECIES_CATERPIE, SPECIES_METAPOD, SPECIES_WEEDLE, SPECIES_KAKUNA, SPECIES_PIDGEY, SPECIES_PIDGEOTTO, SPECIES_RATTATA, SPECIES_SPEAROW, SPECIES_PIKACHU, SPECIES_NIDORAN_F, SPECIES_NIDORAN_M, SPECIES_VULPIX, SPECIES_PARAS, SPECIES_VENONAT, SPECIES_ABRA, SPECIES_BELLSPROUT, SPECIES_FARFETCHD, SPECIES_LICKITUNG, SPECIES_SCYTHER, SPECIES_PINSIR, SPECIES_DITTO, SPECIES_EEVEE.

// Volcano

// Beach
// SPECIES_TENTACOOL, SPECIES_SLOWPOKE, SPECIES_SLOWBRO, SPECIES_SHELLDER, SPECIES_KRABBY, SPECIES_STARYU, SPECIES_DITTO,

// City
// SPECIES_RATTATA, SPECIES_PIKACHU, SPECIES_JIGGLYPUFF, SPECIES_MEOWTH, SPECIES_GROWLITHE, SPECIES_GRIMER, SPECIES_DROWZEE, SPECIES_KOFFING, SPECIES_MR_MIME, SPECIES_DITTO, SPECIES_PORYGON,

// Town
// SPECIES_PIDGEY, SPECIES_SPEAROW, SPECIES_PIKACHU, SPECIES_MEOWTH, SPECIES_GROWLITHE, SPECIES_PONYTA, SPECIES_DROWZEE, SPECIES_TAUROS, SPECIES_DITTO,

// Fields
// SPECIES_BUTTERFREE, SPECIES_BEEDRILL, SPECIES_PIDGEY, SPECIES_PIDGEOTTO, SPECIES_RATTATA, SPECIES_SPEAROW, SPECIES_FEAROW, SPECIES_EKANS, SPECIES_PIKACHU, SPECIES_SANDSHREW, SPECIES_VULPIX, SPECIES_ODDISH, SPECIES_GLOOM, SPECIES_ABRA, SPECIES_PONYTA, SPECIES_EXEGGCUTE, SPECIES_TANGELA, SPECIES_TAUROS, SPECIES_DITTO, SPECIES_EEVEE,

// SPECIES_CLEFAIRY (evening only)
// SPECIES_DIGLETT (evening only)
// SPECIES_DUGTRIO (evening only)

// Rocks
// SPECIES_GEODUDE

// Tunnel
// SPECIES_MACHOP, SPECIES_GEODUDE, SPECIES_GRAVELER, SPECIES_ONIX, SPECIES_RHYHORN, SPECIES_DITTO,

// Cave
// SPECIES_RATTATA, SPECIES_ZUBAT, SPECIES_PARAS, SPECIES_PARASECT, SPECIES_VENOMOTH, SPECIES_DIGLETT, SPECIES_ABRA, SPECIES_DITTO,

// Sea
// SPECIES_TENTACOOL, SPECIES_SEEL, SPECIES_SHELLDER, SPECIES_HORSEA, SPECIES_STARYU, SPECIES_MAGIKARP, SPECIES_OMANYTE, SPECIES_KABUTO, SPECIES_DRATINI,

// Lake
// SPECIES_POLIWAG, SPECIES_GOLDEEN, SPECIES_MAGIKARP,

// Shore
// SPECIES_PSYDUCK, SPECIES_ABRA, SPECIES_SLOWPOKE, SPECIES_FARFETCHD, SPECIES_DITTO,

// Fishing
// SPECIES_TENTACOOL, SPECIES_GOLDEEN, SPECIES_MAGIKARP, SPECIES_DRATINI,

// Garden
// SPECIES_BUTTERFREE, SPECIES_BEEDRILL, SPECIES_MEOWTH, SPECIES_GROWLITHE, SPECIES_ABRA, SPECIES_DITTO,

// Building
// SPECIES_RATTATA, SPECIES_EKANS, SPECIES_PIKACHU, SPECIES_ZUBAT, SPECIES_PARAS, SPECIES_ABRA, SPECIES_MAGNEMITE, SPECIES_GRIMER, SPECIES_GASTLY, SPECIES_VOLTORB, SPECIES_KOFFING, SPECIES_DITTO,

// Safari
// SPECIES_ARBOK, SPECIES_SANDSLASH, SPECIES_NIDORINA, SPECIES_NIDORINO, SPECIES_MANKEY, SPECIES_ABRA, SPECIES_DODUO, SPECIES_CUBONE, SPECIES_RHYHORN, SPECIES_CHANSEY, SPECIES_KANGASKHAN, SPECIES_TAUROS, SPECIES_LAPRAS, 

// Safari lake
// SPECIES_LAPRAS

const struct MapConfiguration sConfiguration[] = 
{
    { FOREST, { SPECIES_CATERPIE, SPECIES_WEEDLE, SPECIES_PIDGEY, SPECIES_RATTATA, SPECIES_SPEAROW, SPECIES_PICHU, SPECIES_NIDORAN_F, SPECIES_NIDORAN_M, SPECIES_VULPIX, SPECIES_PARAS, SPECIES_VENONAT, SPECIES_ABRA, SPECIES_BELLSPROUT, SPECIES_FARFETCHD, SPECIES_LICKITUNG, SPECIES_SCYTHER, SPECIES_PINSIR, SPECIES_DITTO, SPECIES_EEVEE, } },
    { FIELDS, { SPECIES_BUTTERFREE, SPECIES_BEEDRILL, SPECIES_PIDGEY, SPECIES_RATTATA, SPECIES_SPEAROW, SPECIES_EKANS, SPECIES_PICHU, SPECIES_SANDSHREW, SPECIES_VULPIX, SPECIES_ODDISH, SPECIES_ABRA, SPECIES_PONYTA, SPECIES_EXEGGCUTE, SPECIES_TANGELA, SPECIES_TAUROS, SPECIES_DITTO, SPECIES_EEVEE, } },
    { GARDEN, { SPECIES_BUTTERFREE, SPECIES_BEEDRILL, SPECIES_MEOWTH, SPECIES_GROWLITHE, SPECIES_ABRA, SPECIES_DITTO, } },
    { TUNNEL, { SPECIES_MACHOP, SPECIES_GEODUDE, SPECIES_ONIX, SPECIES_RHYHORN, SPECIES_DITTO, } },
    { CAVE, { SPECIES_RATTATA, SPECIES_ZUBAT, SPECIES_PARAS, SPECIES_VENOMOTH, SPECIES_DIGLETT, SPECIES_ABRA, SPECIES_DITTO, } },
    { BUILDING, { SPECIES_RATTATA, SPECIES_EKANS, SPECIES_PICHU, SPECIES_ZUBAT, SPECIES_PARAS, SPECIES_ABRA, SPECIES_MAGNEMITE, SPECIES_GRIMER, SPECIES_GASTLY, SPECIES_VOLTORB, SPECIES_KOFFING, SPECIES_DITTO, } },
    { SAFARI, { SPECIES_MANKEY, SPECIES_ABRA, SPECIES_DODUO, SPECIES_CUBONE, SPECIES_RHYHORN, SPECIES_CHANSEY, SPECIES_KANGASKHAN, SPECIES_TAUROS, } },
    { GHOST, { SPECIES_GASTLY, } },
    { SHORE, { SPECIES_PSYDUCK, SPECIES_ABRA, SPECIES_SLOWPOKE, SPECIES_FARFETCHD, SPECIES_DITTO, } },
    { ROCKS, { SPECIES_GEODUDE, } },
    { SEA, { SPECIES_TENTACOOL, SPECIES_SEEL, SPECIES_SHELLDER, SPECIES_HORSEA, SPECIES_STARYU, SPECIES_MAGIKARP, SPECIES_OMANYTE, SPECIES_KABUTO, SPECIES_DRATINI, } },
    { LAKE, { SPECIES_POLIWAG, SPECIES_GOLDEEN, SPECIES_MAGIKARP, } },
    { BEACH, { SPECIES_TENTACOOL, SPECIES_SLOWPOKE, SPECIES_SLOWBRO, SPECIES_SHELLDER, SPECIES_KRABBY, SPECIES_STARYU, SPECIES_DITTO, } },
    { VOLCANO, { SPECIES_MAGBY } },
    { CITY, { SPECIES_RATTATA, SPECIES_PICHU, SPECIES_JIGGLYPUFF, SPECIES_MEOWTH, SPECIES_GROWLITHE, SPECIES_GRIMER, SPECIES_DROWZEE, SPECIES_KOFFING, SPECIES_MR_MIME, SPECIES_DITTO, SPECIES_PORYGON, } },
    { TOWN, { SPECIES_PIDGEY, SPECIES_SPEAROW, SPECIES_PICHU, SPECIES_MEOWTH, SPECIES_GROWLITHE, SPECIES_PONYTA, SPECIES_DROWZEE, SPECIES_TAUROS, SPECIES_DITTO, } },
    { FISHING, { SPECIES_TENTACOOL, SPECIES_GOLDEEN, SPECIES_MAGIKARP, SPECIES_DRATINI, } },
    { SAFARI_LAKE { SPECIES_LAPRAS, } },
};

const struct BasePokemonRandomizer sLandMonsTable[] = 
{
    // Forest
    { MAP_NUM(VIRIDIAN_FOREST), FOREST },
    
    // Fields
    { MAP_NUM(ROUTE2), FIELDS },
    { MAP_NUM(ROUTE3), FIELDS },
    { MAP_NUM(ROUTE4), FIELDS },
    { MAP_NUM(ROUTE9), FIELDS },
    { MAP_NUM(ROUTE15), FIELDS },
    { MAP_NUM(ROUTE16), FIELDS },
    { MAP_NUM(ROUTE17), FIELDS },
    { MAP_NUM(ROUTE21_SOUTH), FIELDS },

    // Tunnel
    { MAP_NUM(ROCK_TUNNEL_1F), TUNNEL },
    { MAP_NUM(ROCK_TUNNEL_B1F), TUNNEL },
    { MAP_NUM(MT_MOON_1F), TUNNEL },
    { MAP_NUM(VICTORY_ROAD_1F), TUNNEL },
    { MAP_NUM(VICTORY_ROAD_2F), TUNNEL },
    { MAP_NUM(VICTORY_ROAD_3F), TUNNEL },

    // Cave
    { MAP_NUM(CERULEAN_CAVE_1F), CAVE },
    { MAP_NUM(CERULEAN_CAVE_2F), CAVE },
    { MAP_NUM(CERULEAN_CAVE_B1F), CAVE },
    { MAP_NUM(DIGLETTS_CAVE_B1F), CAVE },
    { MAP_NUM(MT_MOON_B1F), CAVE },
    { MAP_NUM(MT_MOON_B2F), CAVE },

    // Garden
    { MAP_NUM(ROUTE1), GARDEN },
    { MAP_NUM(ROUTE6), GARDEN },
    { MAP_NUM(ROUTE7), GARDEN },
    { MAP_NUM(ROUTE8), GARDEN },
    { MAP_NUM(ROUTE10), GARDEN },
    { MAP_NUM(ROUTE11), GARDEN },
    { MAP_NUM(ROUTE18), GARDEN },
    { MAP_NUM(ROUTE21_NORTH), GARDEN },
    { MAP_NUM(ROUTE23), GARDEN },
    { MAP_NUM(ROUTE5), GARDEN },
    { MAP_NUM(ROUTE6), GARDEN },
    { MAP_NUM(ROUTE7), GARDEN },
    { MAP_NUM(ROUTE8), GARDEN },
    { MAP_NUM(ROUTE10), GARDEN },
    { MAP_NUM(ROUTE11), GARDEN },
    { MAP_NUM(ROUTE18), GARDEN },
    { MAP_NUM(ROUTE21_NORTH), GARDEN },
    { MAP_NUM(ROUTE23), GARDEN },

    // Building
    { MAP_NUM(POWER_PLANT), BUILDING },
    { MAP_NUM(POKEMON_MANSION_1F), BUILDING },
    { MAP_NUM(POKEMON_MANSION_2F), BUILDING },
    { MAP_NUM(POKEMON_MANSION_3F), BUILDING },
    { MAP_NUM(POKEMON_MANSION_B1F), BUILDING },

    // Safari
    { MAP_NUM(SAFARI_ZONE_CENTER), SAFARI },
    { MAP_NUM(SAFARI_ZONE_EAST), SAFARI },
    { MAP_NUM(SAFARI_ZONE_NORTH), SAFARI },
    { MAP_NUM(SAFARI_ZONE_WEST), SAFARI },

    // Ghost
    { MAP_NUM(POKEMON_TOWER_3F), GHOST },
    { MAP_NUM(POKEMON_TOWER_4F), GHOST },
    { MAP_NUM(POKEMON_TOWER_5F), GHOST },
    { MAP_NUM(POKEMON_TOWER_6F), GHOST },
    { MAP_NUM(POKEMON_TOWER_7F), GHOST },

    // Shore
    { MAP_NUM(ROUTE12), SHORE },
    { MAP_NUM(ROUTE13), SHORE },
    { MAP_NUM(ROUTE14), SHORE },
    { MAP_NUM(ROUTE22), SHORE },
    { MAP_NUM(ROUTE24), SHORE },
    { MAP_NUM(ROUTE25), SHORE },
};

const struct BasePokemonRandomizer sRockSmashMonsTable[] = 
{
    // Rocks
    { MAP_NUM(ROCK_TUNNEL_1F), ROCKS },
};

const struct BasePokemonRandomizer sWaterMonsTable[] =
{
    // Lake
    { MAP_NUM(ROUTE4), LAKE },
};

const struct BasePokemonRandomizer sFishingMonsTable[] =
{
    // Fishing
    { MAP_NUM(ROUTE4), FISHING },
};

const struct WildPokemon sRoute1_LandMons[] =
{
    { 3, 3, SPECIES_PIDGEY },
    { 3, 3, SPECIES_RATTATA },
    { 3, 3, SPECIES_PIDGEY },
    { 3, 3, SPECIES_RATTATA },
    { 2, 2, SPECIES_PIDGEY },
    { 2, 2, SPECIES_RATTATA },
    { 3, 3, SPECIES_PIDGEY },
    { 3, 3, SPECIES_RATTATA },
    { 4, 4, SPECIES_PIDGEY },
    { 4, 4, SPECIES_RATTATA },
    { 5, 5, SPECIES_PIDGEY },
    { 4, 4, SPECIES_RATTATA },
};
const struct WildPokemonInfo sRoute1_LandMonsInfo = { 21, sRoute1_LandMons };



const struct WildPokemon sRoute2_LandMons[] =
{
    { 3, 3, SPECIES_RATTATA },
    { 3, 3, SPECIES_PIDGEY },
    { 4, 4, SPECIES_RATTATA },
    { 4, 4, SPECIES_PIDGEY },
    { 2, 2, SPECIES_RATTATA },
    { 2, 2, SPECIES_PIDGEY },
    { 5, 5, SPECIES_RATTATA },
    { 5, 5, SPECIES_PIDGEY },
    { 4, 4, SPECIES_CATERPIE },
    { 4, 4, SPECIES_WEEDLE },
    { 5, 5, SPECIES_CATERPIE },
    { 5, 5, SPECIES_WEEDLE },
};

const struct WildPokemonInfo sRoute2_LandMonsInfo = { 21, sRoute2_LandMons };



const struct WildPokemon sRoute3_LandMons[] =
{
    { 6, 6, SPECIES_SPEAROW },
    { 6, 6, SPECIES_PIDGEY },
    { 7, 7, SPECIES_SPEAROW },
    { 7, 7, SPECIES_MANKEY },
    { 6, 6, SPECIES_NIDORAN_M },
    { 7, 7, SPECIES_PIDGEY },
    { 8, 8, SPECIES_SPEAROW },
    { 3, 3, SPECIES_JIGGLYPUFF },
    { 7, 7, SPECIES_NIDORAN_M },
    { 5, 5, SPECIES_JIGGLYPUFF },
    { 6, 6, SPECIES_NIDORAN_F },
    { 7, 7, SPECIES_JIGGLYPUFF },
};

const struct WildPokemonInfo sRoute3_LandMonsInfo = { 21, sRoute3_LandMons };



const struct WildPokemon sRoute4_LandMons[] =
{
    { 10, 10, SPECIES_SPEAROW },
    { 10, 10, SPECIES_RATTATA },
    { 6, 6, SPECIES_EKANS },
    { 10, 10, SPECIES_EKANS },
    { 8, 8, SPECIES_SPEAROW },
    { 8, 8, SPECIES_RATTATA },
    { 12, 12, SPECIES_SPEAROW },
    { 12, 12, SPECIES_RATTATA },
    { 10, 10, SPECIES_MANKEY },
    { 8, 8, SPECIES_EKANS },
    { 12, 12, SPECIES_MANKEY },
    { 12, 12, SPECIES_EKANS },
};

const struct WildPokemonInfo sRoute4_LandMonsInfo = { 21, sRoute4_LandMons };
const struct WildPokemon sRoute4_WaterMons[] =
{
    { 5, 10, SPECIES_TENTACOOL },
    { 10, 20, SPECIES_TENTACOOL },
    { 20, 30, SPECIES_TENTACOOL },
    { 30, 35, SPECIES_TENTACOOL },
    { 35, 40, SPECIES_TENTACOOL },
};

const struct WildPokemonInfo sRoute4_WaterMonsInfo = { 2, sRoute4_WaterMons };
const struct WildPokemon sRoute4_FishingMons[] =
{
    { 5, 5, SPECIES_MAGIKARP },
    { 5, 5, SPECIES_MAGIKARP },
    { 5, 15, SPECIES_HORSEA },
    { 5, 15, SPECIES_MAGIKARP },
    { 5, 15, SPECIES_KRABBY },
    { 15, 25, SPECIES_HORSEA },
    { 15, 25, SPECIES_HORSEA },
    { 15, 25, SPECIES_GYARADOS },
    { 25, 35, SPECIES_HORSEA },
    { 25, 35, SPECIES_PSYDUCK },
};

const struct WildPokemonInfo sRoute4_FishingMonsInfo = { 20, sRoute4_FishingMons };



const struct WildPokemon sRoute5_LandMons[] =
{
    { 10, 10, SPECIES_MEOWTH },
    { 13, 13, SPECIES_PIDGEY },
    { 13, 13, SPECIES_ODDISH },
    { 12, 12, SPECIES_MEOWTH },
    { 15, 15, SPECIES_ODDISH },
    { 15, 15, SPECIES_PIDGEY },
    { 16, 16, SPECIES_ODDISH },
    { 16, 16, SPECIES_PIDGEY },
    { 15, 15, SPECIES_PIDGEY },
    { 14, 14, SPECIES_MEOWTH },
    { 15, 15, SPECIES_PIDGEY },
    { 16, 16, SPECIES_MEOWTH },
};

const struct WildPokemonInfo sRoute5_LandMonsInfo = { 21, sRoute5_LandMons };



const struct WildPokemon sRoute6_LandMons[] =
{
    { 10, 10, SPECIES_MEOWTH },
    { 13, 13, SPECIES_PIDGEY },
    { 13, 13, SPECIES_ODDISH },
    { 12, 12, SPECIES_MEOWTH },
    { 15, 15, SPECIES_ODDISH },
    { 15, 15, SPECIES_PIDGEY },
    { 16, 16, SPECIES_ODDISH },
    { 16, 16, SPECIES_PIDGEY },
    { 15, 15, SPECIES_PIDGEY },
    { 14, 14, SPECIES_MEOWTH },
    { 15, 15, SPECIES_PIDGEY },
    { 16, 16, SPECIES_MEOWTH },
};

const struct WildPokemonInfo sRoute6_LandMonsInfo = { 21, sRoute6_LandMons };
const struct WildPokemon sRoute6_WaterMons[] =
{
    { 20, 25, SPECIES_PSYDUCK },
    { 20, 25, SPECIES_PSYDUCK },
    { 25, 30, SPECIES_PSYDUCK },
    { 30, 35, SPECIES_PSYDUCK },
    { 35, 40, SPECIES_PSYDUCK },
};

const struct WildPokemonInfo sRoute6_WaterMonsInfo = { 2, sRoute6_WaterMons };
const struct WildPokemon sRoute6_FishingMons[] =
{
    { 5, 5, SPECIES_MAGIKARP },
    { 5, 5, SPECIES_MAGIKARP },
    { 5, 15, SPECIES_POLIWAG },
    { 5, 15, SPECIES_MAGIKARP },
    { 5, 15, SPECIES_GOLDEEN },
    { 15, 25, SPECIES_POLIWAG },
    { 20, 30, SPECIES_POLIWHIRL },
    { 15, 25, SPECIES_GYARADOS },
    { 15, 25, SPECIES_PSYDUCK },
    { 25, 35, SPECIES_PSYDUCK },
};

const struct WildPokemonInfo sRoute6_FishingMonsInfo = { 20, sRoute6_FishingMons };



const struct WildPokemon sRoute7_LandMons[] =
{
    { 19, 19, SPECIES_PIDGEY },
    { 17, 17, SPECIES_MEOWTH },
    { 19, 19, SPECIES_ODDISH },
    { 18, 18, SPECIES_MEOWTH },
    { 22, 22, SPECIES_PIDGEY },
    { 22, 22, SPECIES_ODDISH },
    { 18, 18, SPECIES_GROWLITHE },
    { 20, 20, SPECIES_GROWLITHE },
    { 17, 17, SPECIES_MEOWTH },
    { 19, 19, SPECIES_MEOWTH },
    { 17, 17, SPECIES_MEOWTH },
    { 20, 20, SPECIES_MEOWTH },
};

const struct WildPokemonInfo sRoute7_LandMonsInfo = { 21, sRoute7_LandMons };



const struct WildPokemon sRoute8_LandMons[] =
{
    { 18, 18, SPECIES_PIDGEY },
    { 18, 18, SPECIES_MEOWTH },
    { 16, 16, SPECIES_GROWLITHE },
    { 20, 20, SPECIES_PIDGEY },
    { 20, 20, SPECIES_MEOWTH },
    { 17, 17, SPECIES_EKANS },
    { 17, 17, SPECIES_GROWLITHE },
    { 19, 19, SPECIES_EKANS },
    { 17, 17, SPECIES_EKANS },
    { 15, 15, SPECIES_GROWLITHE },
    { 17, 17, SPECIES_EKANS },
    { 18, 18, SPECIES_GROWLITHE },
};

const struct WildPokemonInfo sRoute8_LandMonsInfo = { 21, sRoute8_LandMons };



const struct WildPokemon sRoute9_LandMons[] =
{
    { 16, 16, SPECIES_SPEAROW },
    { 16, 16, SPECIES_RATTATA },
    { 11, 11, SPECIES_EKANS },
    { 15, 15, SPECIES_EKANS },
    { 13, 13, SPECIES_SPEAROW },
    { 14, 14, SPECIES_RATTATA },
    { 17, 17, SPECIES_SPEAROW },
    { 17, 17, SPECIES_RATTATA },
    { 14, 14, SPECIES_RATTATA },
    { 13, 13, SPECIES_EKANS },
    { 14, 14, SPECIES_RATTATA },
    { 17, 17, SPECIES_EKANS },
};

const struct WildPokemonInfo sRoute9_LandMonsInfo = { 21, sRoute9_LandMons };



const struct WildPokemon sRoute10_LandMons[] =
{
    { 16, 16, SPECIES_SPEAROW },
    { 16, 16, SPECIES_VOLTORB },
    { 11, 11, SPECIES_EKANS },
    { 15, 15, SPECIES_EKANS },
    { 13, 13, SPECIES_SPEAROW },
    { 14, 14, SPECIES_VOLTORB },
    { 17, 17, SPECIES_SPEAROW },
    { 17, 17, SPECIES_VOLTORB },
    { 14, 14, SPECIES_VOLTORB },
    { 13, 13, SPECIES_EKANS },
    { 14, 14, SPECIES_VOLTORB },
    { 17, 17, SPECIES_EKANS },
};

const struct WildPokemonInfo sRoute10_LandMonsInfo = { 21, sRoute10_LandMons };
const struct WildPokemon sRoute10_WaterMons[] =
{
    { 5, 10, SPECIES_TENTACOOL },
    { 10, 20, SPECIES_TENTACOOL },
    { 20, 30, SPECIES_TENTACOOL },
    { 30, 35, SPECIES_TENTACOOL },
    { 35, 40, SPECIES_TENTACOOL },
};

const struct WildPokemonInfo sRoute10_WaterMonsInfo = { 2, sRoute10_WaterMons };
const struct WildPokemon sRoute10_FishingMons[] =
{
    { 5, 5, SPECIES_MAGIKARP },
    { 5, 5, SPECIES_MAGIKARP },
    { 5, 15, SPECIES_HORSEA },
    { 5, 15, SPECIES_MAGIKARP },
    { 5, 15, SPECIES_KRABBY },
    { 15, 25, SPECIES_HORSEA },
    { 15, 25, SPECIES_HORSEA },
    { 15, 25, SPECIES_GYARADOS },
    { 25, 35, SPECIES_HORSEA },
    { 25, 35, SPECIES_PSYDUCK },
};

const struct WildPokemonInfo sRoute10_FishingMonsInfo = { 20, sRoute10_FishingMons };



const struct WildPokemon sRoute11_LandMons[] =
{
    { 14, 14, SPECIES_EKANS },
    { 15, 15, SPECIES_SPEAROW },
    { 12, 12, SPECIES_EKANS },
    { 13, 13, SPECIES_SPEAROW },
    { 11, 11, SPECIES_DROWZEE },
    { 13, 13, SPECIES_DROWZEE },
    { 15, 15, SPECIES_EKANS },
    { 17, 17, SPECIES_SPEAROW },
    { 12, 12, SPECIES_EKANS },
    { 15, 15, SPECIES_DROWZEE },
    { 12, 12, SPECIES_EKANS },
    { 15, 15, SPECIES_DROWZEE },
};

const struct WildPokemonInfo sRoute11_LandMonsInfo = { 21, sRoute11_LandMons };
const struct WildPokemon sRoute11_WaterMons[] =
{
    { 5, 10, SPECIES_TENTACOOL },
    { 10, 20, SPECIES_TENTACOOL },
    { 20, 30, SPECIES_TENTACOOL },
    { 30, 35, SPECIES_TENTACOOL },
    { 35, 40, SPECIES_TENTACOOL },
};

const struct WildPokemonInfo sRoute11_WaterMonsInfo = { 2, sRoute11_WaterMons };
const struct WildPokemon sRoute11_FishingMons[] =
{
    { 5, 5, SPECIES_MAGIKARP },
    { 5, 5, SPECIES_MAGIKARP },
    { 5, 15, SPECIES_HORSEA },
    { 5, 15, SPECIES_MAGIKARP },
    { 5, 15, SPECIES_KRABBY },
    { 15, 25, SPECIES_HORSEA },
    { 15, 25, SPECIES_HORSEA },
    { 15, 25, SPECIES_GYARADOS },
    { 25, 35, SPECIES_HORSEA },
    { 25, 35, SPECIES_PSYDUCK },
};

const struct WildPokemonInfo sRoute11_FishingMonsInfo = { 20, sRoute11_FishingMons };



const struct WildPokemon sRoute12_LandMons[] =
{
    { 24, 24, SPECIES_ODDISH },
    { 24, 24, SPECIES_VENONAT },
    { 22, 22, SPECIES_ODDISH },
    { 23, 23, SPECIES_PIDGEY },
    { 25, 25, SPECIES_PIDGEY },
    { 26, 26, SPECIES_VENONAT },
    { 26, 26, SPECIES_ODDISH },
    { 27, 27, SPECIES_PIDGEY },
    { 23, 23, SPECIES_PIDGEY },
    { 28, 28, SPECIES_GLOOM },
    { 23, 23, SPECIES_PIDGEY },
    { 30, 30, SPECIES_GLOOM },
};

const struct WildPokemonInfo sRoute12_LandMonsInfo = { 21, sRoute12_LandMons };
const struct WildPokemon sRoute12_WaterMons[] =
{
    { 5, 10, SPECIES_TENTACOOL },
    { 10, 20, SPECIES_TENTACOOL },
    { 20, 30, SPECIES_TENTACOOL },
    { 30, 35, SPECIES_TENTACOOL },
    { 35, 40, SPECIES_TENTACOOL },
};

const struct WildPokemonInfo sRoute12_WaterMonsInfo = { 2, sRoute12_WaterMons };
const struct WildPokemon sRoute12_FishingMons[] =
{
    { 5, 5, SPECIES_MAGIKARP },
    { 5, 5, SPECIES_MAGIKARP },
    { 5, 15, SPECIES_HORSEA },
    { 5, 15, SPECIES_MAGIKARP },
    { 5, 15, SPECIES_KRABBY },
    { 15, 25, SPECIES_HORSEA },
    { 15, 25, SPECIES_HORSEA },
    { 15, 25, SPECIES_GYARADOS },
    { 25, 35, SPECIES_HORSEA },
    { 25, 35, SPECIES_PSYDUCK },
};

const struct WildPokemonInfo sRoute12_FishingMonsInfo = { 60, sRoute12_FishingMons };



const struct WildPokemon sRoute13_LandMons[] =
{
    { 24, 24, SPECIES_ODDISH },
    { 24, 24, SPECIES_VENONAT },
    { 22, 22, SPECIES_ODDISH },
    { 27, 27, SPECIES_PIDGEY },
    { 25, 25, SPECIES_PIDGEY },
    { 26, 26, SPECIES_VENONAT },
    { 26, 26, SPECIES_ODDISH },
    { 25, 25, SPECIES_DITTO },
    { 29, 29, SPECIES_PIDGEOTTO },
    { 28, 28, SPECIES_GLOOM },
    { 29, 29, SPECIES_PIDGEOTTO },
    { 30, 30, SPECIES_GLOOM },
};

const struct WildPokemonInfo sRoute13_LandMonsInfo = { 21, sRoute13_LandMons };
const struct WildPokemon sRoute13_WaterMons[] =
{
    { 5, 10, SPECIES_TENTACOOL },
    { 10, 20, SPECIES_TENTACOOL },
    { 20, 30, SPECIES_TENTACOOL },
    { 30, 35, SPECIES_TENTACOOL },
    { 35, 40, SPECIES_TENTACOOL },
};

const struct WildPokemonInfo sRoute13_WaterMonsInfo = { 2, sRoute13_WaterMons };
const struct WildPokemon sRoute13_FishingMons[] =
{
    { 5, 5, SPECIES_MAGIKARP },
    { 5, 5, SPECIES_MAGIKARP },
    { 5, 15, SPECIES_HORSEA },
    { 5, 15, SPECIES_MAGIKARP },
    { 5, 15, SPECIES_KRABBY },
    { 15, 25, SPECIES_HORSEA },
    { 15, 25, SPECIES_HORSEA },
    { 15, 25, SPECIES_GYARADOS },
    { 25, 35, SPECIES_HORSEA },
    { 25, 35, SPECIES_PSYDUCK },
};

const struct WildPokemonInfo sRoute13_FishingMonsInfo = { 20, sRoute13_FishingMons };



const struct WildPokemon sRoute14_LandMons[] =
{
    { 24, 24, SPECIES_ODDISH },
    { 24, 24, SPECIES_VENONAT },
    { 22, 22, SPECIES_ODDISH },
    { 23, 23, SPECIES_DITTO },
    { 27, 27, SPECIES_PIDGEY },
    { 26, 26, SPECIES_VENONAT },
    { 26, 26, SPECIES_ODDISH },
    { 30, 30, SPECIES_GLOOM },
    { 23, 23, SPECIES_DITTO },
    { 29, 29, SPECIES_PIDGEOTTO },
    { 23, 23, SPECIES_DITTO },
    { 29, 29, SPECIES_PIDGEOTTO },
};

const struct WildPokemonInfo sRoute14_LandMonsInfo = { 21, sRoute14_LandMons };



const struct WildPokemon sRoute15_LandMons[] =
{
    { 24, 24, SPECIES_ODDISH },
    { 24, 24, SPECIES_VENONAT },
    { 22, 22, SPECIES_ODDISH },
    { 27, 27, SPECIES_PIDGEY },
    { 25, 25, SPECIES_PIDGEY },
    { 26, 26, SPECIES_VENONAT },
    { 26, 26, SPECIES_ODDISH },
    { 25, 25, SPECIES_DITTO },
    { 29, 29, SPECIES_PIDGEOTTO },
    { 28, 28, SPECIES_GLOOM },
    { 29, 29, SPECIES_PIDGEOTTO },
    { 30, 30, SPECIES_GLOOM },
};

const struct WildPokemonInfo sRoute15_LandMonsInfo = { 21, sRoute15_LandMons };



const struct WildPokemon sRoute16_LandMons[] =
{
    { 20, 20, SPECIES_SPEAROW },
    { 18, 18, SPECIES_DODUO },
    { 18, 18, SPECIES_RATTATA },
    { 20, 20, SPECIES_RATTATA },
    { 22, 22, SPECIES_SPEAROW },
    { 20, 20, SPECIES_DODUO },
    { 22, 22, SPECIES_RATTATA },
    { 22, 22, SPECIES_DODUO },
    { 18, 18, SPECIES_RATTATA },
    { 23, 23, SPECIES_RATICATE },
    { 18, 18, SPECIES_RATTATA },
    { 25, 25, SPECIES_RATICATE },
};

const struct WildPokemonInfo sRoute16_LandMonsInfo = { 21, sRoute16_LandMons };



const struct WildPokemon sRoute17_LandMons[] =
{
    { 20, 20, SPECIES_SPEAROW },
    { 24, 24, SPECIES_DODUO },
    { 22, 22, SPECIES_SPEAROW },
    { 26, 26, SPECIES_DODUO },
    { 25, 25, SPECIES_RATICATE },
    { 27, 27, SPECIES_RATICATE },
    { 28, 28, SPECIES_DODUO },
    { 29, 29, SPECIES_RATICATE },
    { 22, 22, SPECIES_RATTATA },
    { 25, 25, SPECIES_FEAROW },
    { 22, 22, SPECIES_RATTATA },
    { 27, 27, SPECIES_FEAROW },
};

const struct WildPokemonInfo sRoute17_LandMonsInfo = { 21, sRoute17_LandMons };



const struct WildPokemon sRoute18_LandMons[] =
{
    { 20, 20, SPECIES_SPEAROW },
    { 24, 24, SPECIES_DODUO },
    { 22, 22, SPECIES_SPEAROW },
    { 26, 26, SPECIES_DODUO },
    { 25, 25, SPECIES_RATICATE },
    { 25, 25, SPECIES_FEAROW },
    { 28, 28, SPECIES_DODUO },
    { 29, 29, SPECIES_RATICATE },
    { 22, 22, SPECIES_RATTATA },
    { 27, 27, SPECIES_FEAROW },
    { 22, 22, SPECIES_RATTATA },
    { 29, 29, SPECIES_FEAROW },
};

const struct WildPokemonInfo sRoute18_LandMonsInfo = { 21, sRoute18_LandMons };



const struct WildPokemon sRoute19_WaterMons[] =
{
    { 5, 10, SPECIES_TENTACOOL },
    { 10, 20, SPECIES_TENTACOOL },
    { 20, 30, SPECIES_TENTACOOL },
    { 30, 35, SPECIES_TENTACOOL },
    { 35, 40, SPECIES_TENTACOOL },
};

const struct WildPokemonInfo sRoute19_WaterMonsInfo = { 2, sRoute19_WaterMons };
const struct WildPokemon sRoute19_FishingMons[] =
{
    { 5, 5, SPECIES_MAGIKARP },
    { 5, 5, SPECIES_MAGIKARP },
    { 5, 15, SPECIES_HORSEA },
    { 5, 15, SPECIES_MAGIKARP },
    { 5, 15, SPECIES_KRABBY },
    { 15, 25, SPECIES_HORSEA },
    { 15, 25, SPECIES_HORSEA },
    { 15, 25, SPECIES_GYARADOS },
    { 25, 35, SPECIES_SEADRA },
    { 25, 35, SPECIES_PSYDUCK },
};

const struct WildPokemonInfo sRoute19_FishingMonsInfo = { 20, sRoute19_FishingMons };



const struct WildPokemon sRoute20_WaterMons[] =
{
    { 5, 10, SPECIES_TENTACOOL },
    { 10, 20, SPECIES_TENTACOOL },
    { 20, 30, SPECIES_TENTACOOL },
    { 30, 35, SPECIES_TENTACOOL },
    { 35, 40, SPECIES_TENTACOOL },
};

const struct WildPokemonInfo sRoute20_WaterMonsInfo = { 2, sRoute20_WaterMons };
const struct WildPokemon sRoute20_FishingMons[] =
{
    { 5, 5, SPECIES_MAGIKARP },
    { 5, 5, SPECIES_MAGIKARP },
    { 5, 15, SPECIES_HORSEA },
    { 5, 15, SPECIES_MAGIKARP },
    { 5, 15, SPECIES_KRABBY },
    { 15, 25, SPECIES_HORSEA },
    { 15, 25, SPECIES_HORSEA },
    { 15, 25, SPECIES_GYARADOS },
    { 25, 35, SPECIES_SEADRA },
    { 25, 35, SPECIES_PSYDUCK },
};

const struct WildPokemonInfo sRoute20_FishingMonsInfo = { 20, sRoute20_FishingMons };



const struct WildPokemon sRoute21North_LandMons[] =
{
    { 22, 22, SPECIES_TANGELA },
    { 23, 23, SPECIES_TANGELA },
    { 24, 24, SPECIES_TANGELA },
    { 21, 21, SPECIES_TANGELA },
    { 25, 25, SPECIES_TANGELA },
    { 20, 20, SPECIES_TANGELA },
    { 19, 19, SPECIES_TANGELA },
    { 26, 26, SPECIES_TANGELA },
    { 18, 18, SPECIES_TANGELA },
    { 27, 27, SPECIES_TANGELA },
    { 17, 17, SPECIES_TANGELA },
    { 28, 28, SPECIES_TANGELA },
};

const struct WildPokemonInfo sRoute21North_LandMonsInfo = { 14, sRoute21North_LandMons };
const struct WildPokemon sRoute21North_WaterMons[] =
{
    { 5, 10, SPECIES_TENTACOOL },
    { 10, 20, SPECIES_TENTACOOL },
    { 20, 30, SPECIES_TENTACOOL },
    { 30, 35, SPECIES_TENTACOOL },
    { 35, 40, SPECIES_TENTACOOL },
};

const struct WildPokemonInfo sRoute21North_WaterMonsInfo = { 2, sRoute21North_WaterMons };
const struct WildPokemon sRoute21North_FishingMons[] =
{
    { 5, 5, SPECIES_MAGIKARP },
    { 5, 5, SPECIES_MAGIKARP },
    { 5, 15, SPECIES_HORSEA },
    { 5, 15, SPECIES_MAGIKARP },
    { 5, 15, SPECIES_KRABBY },
    { 15, 25, SPECIES_HORSEA },
    { 15, 25, SPECIES_HORSEA },
    { 15, 25, SPECIES_GYARADOS },
    { 25, 35, SPECIES_SEADRA },
    { 25, 35, SPECIES_PSYDUCK },
};

const struct WildPokemonInfo sRoute21North_FishingMonsInfo = { 20, sRoute21North_FishingMons };



const struct WildPokemon sRoute21South_LandMons[] =
{
    { 22, 22, SPECIES_TANGELA },
    { 23, 23, SPECIES_TANGELA },
    { 24, 24, SPECIES_TANGELA },
    { 21, 21, SPECIES_TANGELA },
    { 25, 25, SPECIES_TANGELA },
    { 20, 20, SPECIES_TANGELA },
    { 19, 19, SPECIES_TANGELA },
    { 26, 26, SPECIES_TANGELA },
    { 18, 18, SPECIES_TANGELA },
    { 27, 27, SPECIES_TANGELA },
    { 17, 17, SPECIES_TANGELA },
    { 28, 28, SPECIES_TANGELA },
};

const struct WildPokemonInfo sRoute21South_LandMonsInfo = { 14, sRoute21South_LandMons };
const struct WildPokemon sRoute21South_WaterMons[] =
{
    { 5, 10, SPECIES_TENTACOOL },
    { 10, 20, SPECIES_TENTACOOL },
    { 20, 30, SPECIES_TENTACOOL },
    { 30, 35, SPECIES_TENTACOOL },
    { 35, 40, SPECIES_TENTACOOL },
};

const struct WildPokemonInfo sRoute21South_WaterMonsInfo = { 2, sRoute21South_WaterMons };
const struct WildPokemon sRoute21South_FishingMons[] =
{
    { 5, 5, SPECIES_MAGIKARP },
    { 5, 5, SPECIES_MAGIKARP },
    { 5, 15, SPECIES_HORSEA },
    { 5, 15, SPECIES_MAGIKARP },
    { 5, 15, SPECIES_KRABBY },
    { 15, 25, SPECIES_HORSEA },
    { 15, 25, SPECIES_HORSEA },
    { 15, 25, SPECIES_GYARADOS },
    { 25, 35, SPECIES_SEADRA },
    { 25, 35, SPECIES_PSYDUCK },
};

const struct WildPokemonInfo sRoute21South_FishingMonsInfo = { 20, sRoute21South_FishingMons };



const struct WildPokemon sRoute22_LandMons[] =
{
    { 3, 3, SPECIES_RATTATA },
    { 3, 3, SPECIES_MANKEY },
    { 4, 4, SPECIES_RATTATA },
    { 4, 4, SPECIES_MANKEY },
    { 2, 2, SPECIES_RATTATA },
    { 2, 2, SPECIES_MANKEY },
    { 3, 3, SPECIES_SPEAROW },
    { 5, 5, SPECIES_SPEAROW },
    { 5, 5, SPECIES_RATTATA },
    { 5, 5, SPECIES_MANKEY },
    { 5, 5, SPECIES_RATTATA },
    { 5, 5, SPECIES_MANKEY },
};

const struct WildPokemonInfo sRoute22_LandMonsInfo = { 21, sRoute22_LandMons };
const struct WildPokemon sRoute22_WaterMons[] =
{
    { 20, 25, SPECIES_PSYDUCK },
    { 20, 25, SPECIES_PSYDUCK },
    { 25, 30, SPECIES_PSYDUCK },
    { 30, 35, SPECIES_PSYDUCK },
    { 35, 40, SPECIES_PSYDUCK },
};

const struct WildPokemonInfo sRoute22_WaterMonsInfo = { 2, sRoute22_WaterMons };
const struct WildPokemon sRoute22_FishingMons[] =
{
    { 5, 5, SPECIES_MAGIKARP },
    { 5, 5, SPECIES_MAGIKARP },
    { 5, 15, SPECIES_POLIWAG },
    { 5, 15, SPECIES_MAGIKARP },
    { 5, 15, SPECIES_GOLDEEN },
    { 15, 25, SPECIES_POLIWAG },
    { 20, 30, SPECIES_POLIWHIRL },
    { 15, 25, SPECIES_GYARADOS },
    { 15, 25, SPECIES_PSYDUCK },
    { 25, 35, SPECIES_PSYDUCK },
};

const struct WildPokemonInfo sRoute22_FishingMonsInfo = { 20, sRoute22_FishingMons };



const struct WildPokemon sRoute23_LandMons[] =
{
    { 32, 32, SPECIES_MANKEY },
    { 40, 40, SPECIES_FEAROW },
    { 34, 34, SPECIES_MANKEY },
    { 34, 34, SPECIES_SPEAROW },
    { 32, 32, SPECIES_EKANS },
    { 34, 34, SPECIES_EKANS },
    { 42, 42, SPECIES_PRIMEAPE },
    { 44, 44, SPECIES_ARBOK },
    { 32, 32, SPECIES_SPEAROW },
    { 42, 42, SPECIES_FEAROW },
    { 32, 32, SPECIES_SPEAROW },
    { 44, 44, SPECIES_FEAROW },
};

const struct WildPokemonInfo sRoute23_LandMonsInfo = { 21, sRoute23_LandMons };
const struct WildPokemon sRoute23_WaterMons[] =
{
    { 20, 25, SPECIES_PSYDUCK },
    { 20, 25, SPECIES_PSYDUCK },
    { 25, 30, SPECIES_PSYDUCK },
    { 30, 35, SPECIES_PSYDUCK },
    { 35, 40, SPECIES_PSYDUCK },
};

const struct WildPokemonInfo sRoute23_WaterMonsInfo = { 2, sRoute23_WaterMons };
const struct WildPokemon sRoute23_FishingMons[] =
{
    { 5, 5, SPECIES_MAGIKARP },
    { 5, 5, SPECIES_MAGIKARP },
    { 5, 15, SPECIES_POLIWAG },
    { 5, 15, SPECIES_MAGIKARP },
    { 5, 15, SPECIES_GOLDEEN },
    { 15, 25, SPECIES_POLIWAG },
    { 20, 30, SPECIES_POLIWHIRL },
    { 15, 25, SPECIES_GYARADOS },
    { 15, 25, SPECIES_PSYDUCK },
    { 25, 35, SPECIES_PSYDUCK },
};

const struct WildPokemonInfo sRoute23_FishingMonsInfo = { 20, sRoute23_FishingMons };



const struct WildPokemon sRoute24_LandMons[] =
{
    { 7, 7, SPECIES_WEEDLE },
    { 7, 7, SPECIES_CATERPIE },
    { 11, 11, SPECIES_PIDGEY },
    { 12, 12, SPECIES_ODDISH },
    { 13, 13, SPECIES_ODDISH },
    { 10, 10, SPECIES_ABRA },
    { 13, 13, SPECIES_PIDGEY },
    { 14, 14, SPECIES_ODDISH },
    { 8, 8, SPECIES_KAKUNA },
    { 8, 8, SPECIES_ABRA },
    { 8, 8, SPECIES_METAPOD },
    { 12, 12, SPECIES_ABRA },
};

const struct WildPokemonInfo sRoute24_LandMonsInfo = { 21, sRoute24_LandMons };
const struct WildPokemon sRoute24_WaterMons[] =
{
    { 5, 10, SPECIES_TENTACOOL },
    { 10, 20, SPECIES_TENTACOOL },
    { 20, 30, SPECIES_TENTACOOL },
    { 30, 35, SPECIES_TENTACOOL },
    { 35, 40, SPECIES_TENTACOOL },
};

const struct WildPokemonInfo sRoute24_WaterMonsInfo = { 2, sRoute24_WaterMons };
const struct WildPokemon sRoute24_FishingMons[] =
{
    { 5, 5, SPECIES_MAGIKARP },
    { 5, 5, SPECIES_MAGIKARP },
    { 5, 15, SPECIES_HORSEA },
    { 5, 15, SPECIES_MAGIKARP },
    { 5, 15, SPECIES_KRABBY },
    { 15, 25, SPECIES_HORSEA },
    { 15, 25, SPECIES_HORSEA },
    { 15, 25, SPECIES_GYARADOS },
    { 25, 35, SPECIES_HORSEA },
    { 25, 35, SPECIES_PSYDUCK },
};

const struct WildPokemonInfo sRoute24_FishingMonsInfo = { 20, sRoute24_FishingMons };



const struct WildPokemon sRoute25_LandMons[] =
{
    { 8, 8, SPECIES_WEEDLE },
    { 8, 8, SPECIES_CATERPIE },
    { 13, 13, SPECIES_PIDGEY },
    { 14, 14, SPECIES_ODDISH },
    { 13, 13, SPECIES_ODDISH },
    { 11, 11, SPECIES_ABRA },
    { 11, 11, SPECIES_PIDGEY },
    { 12, 12, SPECIES_ODDISH },
    { 9, 9, SPECIES_KAKUNA },
    { 9, 9, SPECIES_ABRA },
    { 9, 9, SPECIES_METAPOD },
    { 13, 13, SPECIES_ABRA },
};

const struct WildPokemonInfo sRoute25_LandMonsInfo = { 21, sRoute25_LandMons };
const struct WildPokemon sRoute25_WaterMons[] =
{
    { 20, 25, SPECIES_PSYDUCK },
    { 20, 25, SPECIES_PSYDUCK },
    { 25, 30, SPECIES_PSYDUCK },
    { 30, 35, SPECIES_PSYDUCK },
    { 35, 40, SPECIES_PSYDUCK },
};

const struct WildPokemonInfo sRoute25_WaterMonsInfo = { 2, sRoute25_WaterMons };
const struct WildPokemon sRoute25_FishingMons[] =
{
    { 5, 5, SPECIES_MAGIKARP },
    { 5, 5, SPECIES_MAGIKARP },
    { 5, 15, SPECIES_POLIWAG },
    { 5, 15, SPECIES_MAGIKARP },
    { 5, 15, SPECIES_GOLDEEN },
    { 15, 25, SPECIES_POLIWAG },
    { 20, 30, SPECIES_POLIWHIRL },
    { 15, 25, SPECIES_GYARADOS },
    { 15, 25, SPECIES_PSYDUCK },
    { 25, 35, SPECIES_PSYDUCK },
};

const struct WildPokemonInfo sRoute25_FishingMonsInfo = { 20, sRoute25_FishingMons };



const struct WildPokemon sPalletTown_WaterMons[] =
{
    { 5, 10, SPECIES_TENTACOOL },
    { 10, 20, SPECIES_TENTACOOL },
    { 20, 30, SPECIES_TENTACOOL },
    { 30, 35, SPECIES_TENTACOOL },
    { 35, 40, SPECIES_TENTACOOL },
};

const struct WildPokemonInfo sPalletTown_WaterMonsInfo = { 1, sPalletTown_WaterMons };
const struct WildPokemon sPalletTown_FishingMons[] =
{
    { 5, 10, SPECIES_MAGIKARP },
    { 5, 10, SPECIES_MAGIKARP },
    { 5, 15, SPECIES_HORSEA },
    { 5, 15, SPECIES_MAGIKARP },
    { 5, 15, SPECIES_KRABBY },
    { 15, 25, SPECIES_HORSEA },
    { 15, 25, SPECIES_SHELLDER },
    { 15, 25, SPECIES_GYARADOS },
    { 25, 35, SPECIES_SEADRA },
    { 25, 35, SPECIES_PSYDUCK },
};

const struct WildPokemonInfo sPalletTown_FishingMonsInfo = { 10, sPalletTown_FishingMons };



const struct WildPokemon sViridianCity_WaterMons[] =
{
    { 20, 25, SPECIES_PSYDUCK },
    { 20, 25, SPECIES_PSYDUCK },
    { 25, 30, SPECIES_PSYDUCK },
    { 30, 35, SPECIES_PSYDUCK },
    { 35, 40, SPECIES_PSYDUCK },
};

const struct WildPokemonInfo sViridianCity_WaterMonsInfo = { 1, sViridianCity_WaterMons };
const struct WildPokemon sViridianCity_FishingMons[] =
{
    { 5, 5, SPECIES_MAGIKARP },
    { 5, 5, SPECIES_MAGIKARP },
    { 5, 15, SPECIES_POLIWAG },
    { 5, 15, SPECIES_MAGIKARP },
    { 5, 15, SPECIES_GOLDEEN },
    { 15, 25, SPECIES_POLIWAG },
    { 20, 30, SPECIES_POLIWHIRL },
    { 15, 25, SPECIES_GYARADOS },
    { 15, 25, SPECIES_PSYDUCK },
    { 25, 35, SPECIES_PSYDUCK },
};

const struct WildPokemonInfo sViridianCity_FishingMonsInfo = { 10, sViridianCity_FishingMons };



const struct WildPokemon sCeruleanCity_WaterMons[] =
{
    { 5, 10, SPECIES_TENTACOOL },
    { 10, 20, SPECIES_TENTACOOL },
    { 20, 30, SPECIES_TENTACOOL },
    { 30, 35, SPECIES_TENTACOOL },
    { 35, 40, SPECIES_TENTACOOL },
};

const struct WildPokemonInfo sCeruleanCity_WaterMonsInfo = { 1, sCeruleanCity_WaterMons };
const struct WildPokemon sCeruleanCity_FishingMons[] =
{
    { 5, 5, SPECIES_MAGIKARP },
    { 5, 5, SPECIES_MAGIKARP },
    { 5, 15, SPECIES_HORSEA },
    { 5, 15, SPECIES_MAGIKARP },
    { 5, 15, SPECIES_KRABBY },
    { 15, 25, SPECIES_HORSEA },
    { 15, 25, SPECIES_HORSEA },
    { 15, 25, SPECIES_GYARADOS },
    { 25, 35, SPECIES_HORSEA },
    { 25, 35, SPECIES_PSYDUCK },
};

const struct WildPokemonInfo sCeruleanCity_FishingMonsInfo = { 10, sCeruleanCity_FishingMons };



const struct WildPokemon sVermilionCity_WaterMons[] =
{
    { 5, 10, SPECIES_TENTACOOL },
    { 10, 20, SPECIES_TENTACOOL },
    { 20, 30, SPECIES_TENTACOOL },
    { 30, 35, SPECIES_TENTACOOL },
    { 35, 40, SPECIES_TENTACOOL },
};

const struct WildPokemonInfo sVermilionCity_WaterMonsInfo = { 1, sVermilionCity_WaterMons };
const struct WildPokemon sVermilionCity_FishingMons[] =
{
    { 5, 5, SPECIES_MAGIKARP },
    { 5, 5, SPECIES_MAGIKARP },
    { 5, 15, SPECIES_HORSEA },
    { 5, 15, SPECIES_MAGIKARP },
    { 5, 15, SPECIES_KRABBY },
    { 15, 25, SPECIES_HORSEA },
    { 15, 25, SPECIES_SHELLDER },
    { 15, 25, SPECIES_GYARADOS },
    { 25, 35, SPECIES_HORSEA },
    { 25, 35, SPECIES_PSYDUCK },
};

const struct WildPokemonInfo sVermilionCity_FishingMonsInfo = { 10, sVermilionCity_FishingMons };



const struct WildPokemon sCeladonCity_WaterMons[] =
{
    { 5, 10, SPECIES_PSYDUCK },
    { 10, 20, SPECIES_PSYDUCK },
    { 20, 30, SPECIES_PSYDUCK },
    { 30, 40, SPECIES_PSYDUCK },
    { 30, 40, SPECIES_KOFFING },
};

const struct WildPokemonInfo sCeladonCity_WaterMonsInfo = { 1, sCeladonCity_WaterMons };
const struct WildPokemon sCeladonCity_FishingMons[] =
{
    { 5, 5, SPECIES_MAGIKARP },
    { 5, 5, SPECIES_MAGIKARP },
    { 5, 15, SPECIES_MAGIKARP },
    { 5, 15, SPECIES_MAGIKARP },
    { 5, 15, SPECIES_MAGIKARP },
    { 15, 25, SPECIES_MAGIKARP },
    { 15, 25, SPECIES_MAGIKARP },
    { 15, 25, SPECIES_MAGIKARP },
    { 25, 35, SPECIES_MAGIKARP },
    { 30, 40, SPECIES_GRIMER },
};

const struct WildPokemonInfo sCeladonCity_FishingMonsInfo = { 10, sCeladonCity_FishingMons };



const struct WildPokemon sFuchsiaCity_WaterMons[] =
{
    { 20, 25, SPECIES_PSYDUCK },
    { 20, 25, SPECIES_PSYDUCK },
    { 25, 30, SPECIES_PSYDUCK },
    { 30, 35, SPECIES_PSYDUCK },
    { 35, 40, SPECIES_PSYDUCK },
};

const struct WildPokemonInfo sFuchsiaCity_WaterMonsInfo = { 1, sFuchsiaCity_WaterMons };
const struct WildPokemon sFuchsiaCity_FishingMons[] =
{
    { 5, 5, SPECIES_MAGIKARP },
    { 5, 5, SPECIES_MAGIKARP },
    { 5, 15, SPECIES_GOLDEEN },
    { 5, 15, SPECIES_MAGIKARP },
    { 5, 15, SPECIES_POLIWAG },
    { 15, 25, SPECIES_GOLDEEN },
    { 20, 30, SPECIES_SEAKING },
    { 15, 25, SPECIES_GYARADOS },
    { 15, 25, SPECIES_PSYDUCK },
    { 25, 35, SPECIES_PSYDUCK },
};

const struct WildPokemonInfo sFuchsiaCity_FishingMonsInfo = { 10, sFuchsiaCity_FishingMons };



const struct WildPokemon sCinnabarIsland_WaterMons[] =
{
    { 5, 10, SPECIES_TENTACOOL },
    { 10, 20, SPECIES_TENTACOOL },
    { 20, 30, SPECIES_TENTACOOL },
    { 30, 35, SPECIES_TENTACOOL },
    { 35, 40, SPECIES_TENTACOOL },
};

const struct WildPokemonInfo sCinnabarIsland_WaterMonsInfo = { 1, sCinnabarIsland_WaterMons };
const struct WildPokemon sCinnabarIsland_FishingMons[] =
{
    { 5, 5, SPECIES_MAGIKARP },
    { 5, 5, SPECIES_MAGIKARP },
    { 5, 15, SPECIES_HORSEA },
    { 5, 15, SPECIES_MAGIKARP },
    { 5, 15, SPECIES_KRABBY },
    { 15, 25, SPECIES_HORSEA },
    { 15, 25, SPECIES_SHELLDER },
    { 15, 25, SPECIES_GYARADOS },
    { 25, 35, SPECIES_SEADRA },
    { 25, 35, SPECIES_PSYDUCK },
};

const struct WildPokemonInfo sCinnabarIsland_FishingMonsInfo = { 10, sCinnabarIsland_FishingMons };



const struct WildPokemon sOneIsland_WaterMons[] =
{
    { 5, 20, SPECIES_TENTACOOL },
    { 20, 35, SPECIES_TENTACOOL },
    { 35, 40, SPECIES_TENTACOOL },
    { 35, 40, SPECIES_TENTACRUEL },
    { 35, 40, SPECIES_TENTACRUEL },
};

const struct WildPokemonInfo sOneIsland_WaterMonsInfo = { 1, sOneIsland_WaterMons };
const struct WildPokemon sOneIsland_FishingMons[] =
{
    { 5, 5, SPECIES_MAGIKARP },
    { 5, 5, SPECIES_MAGIKARP },
    { 5, 15, SPECIES_HORSEA },
    { 5, 15, SPECIES_MAGIKARP },
    { 5, 15, SPECIES_HORSEA },
    { 15, 25, SPECIES_HORSEA },
    { 15, 25, SPECIES_SHELLDER },
    { 15, 25, SPECIES_GYARADOS },
    { 25, 35, SPECIES_SEADRA },
    { 25, 35, SPECIES_PSYDUCK },
};

const struct WildPokemonInfo sOneIsland_FishingMonsInfo = { 10, sOneIsland_FishingMons };



const struct WildPokemon sFourIsland_WaterMons[] =
{
    { 5, 15, SPECIES_WOOPER },
    { 5, 35, SPECIES_PSYDUCK },
    { 15, 25, SPECIES_WOOPER },
    { 15, 25, SPECIES_WOOPER },
    { 15, 25, SPECIES_WOOPER },
};

const struct WildPokemonInfo sFourIsland_WaterMonsInfo = { 2, sFourIsland_WaterMons };
const struct WildPokemon sFourIsland_FishingMons[] =
{
    { 5, 5, SPECIES_MAGIKARP },
    { 5, 5, SPECIES_MAGIKARP },
    { 5, 15, SPECIES_POLIWAG },
    { 5, 15, SPECIES_MAGIKARP },
    { 5, 15, SPECIES_GOLDEEN },
    { 15, 25, SPECIES_POLIWAG },
    { 20, 30, SPECIES_POLIWHIRL },
    { 15, 25, SPECIES_GYARADOS },
    { 15, 25, SPECIES_PSYDUCK },
    { 25, 35, SPECIES_PSYDUCK },
};

const struct WildPokemonInfo sFourIsland_FishingMonsInfo = { 20, sFourIsland_FishingMons };



const struct WildPokemon sFiveIsland_WaterMons[] =
{
    { 5, 35, SPECIES_TENTACOOL },
    { 5, 15, SPECIES_HOPPIP },
    { 35, 40, SPECIES_TENTACOOL },
    { 35, 40, SPECIES_TENTACRUEL },
    { 35, 40, SPECIES_TENTACRUEL },
};

const struct WildPokemonInfo sFiveIsland_WaterMonsInfo = { 1, sFiveIsland_WaterMons };
const struct WildPokemon sFiveIsland_FishingMons[] =
{
    { 5, 5, SPECIES_MAGIKARP },
    { 5, 5, SPECIES_MAGIKARP },
    { 5, 15, SPECIES_HORSEA },
    { 5, 15, SPECIES_MAGIKARP },
    { 5, 15, SPECIES_HORSEA },
    { 15, 25, SPECIES_HORSEA },
    { 15, 25, SPECIES_SHELLDER },
    { 15, 25, SPECIES_GYARADOS },
    { 25, 35, SPECIES_SEADRA },
    { 25, 35, SPECIES_PSYDUCK },
};

const struct WildPokemonInfo sFiveIsland_FishingMonsInfo = { 10, sFiveIsland_FishingMons };



const struct WildPokemon sSixIslandAlteringCave_LandMons[] =
{
    { 10, 10, SPECIES_ZUBAT },
    { 12, 12, SPECIES_ZUBAT },
    { 8, 8, SPECIES_ZUBAT },
    { 14, 14, SPECIES_ZUBAT },
    { 10, 10, SPECIES_ZUBAT },
    { 12, 12, SPECIES_ZUBAT },
    { 16, 16, SPECIES_ZUBAT },
    { 6, 6, SPECIES_ZUBAT },
    { 8, 8, SPECIES_ZUBAT },
    { 14, 14, SPECIES_ZUBAT },
    { 8, 8, SPECIES_ZUBAT },
    { 14, 14, SPECIES_ZUBAT },
};

const struct WildPokemonInfo sSixIslandAlteringCave_LandMonsInfo = { 5, sSixIslandAlteringCave_LandMons };



const struct WildPokemon sSixIslandAlteringCave_2_LandMons[] =
{
    { 7, 7, SPECIES_MAREEP },
    { 9, 9, SPECIES_MAREEP },
    { 5, 5, SPECIES_MAREEP },
    { 11, 11, SPECIES_MAREEP },
    { 7, 7, SPECIES_MAREEP },
    { 9, 9, SPECIES_MAREEP },
    { 13, 13, SPECIES_MAREEP },
    { 3, 3, SPECIES_MAREEP },
    { 5, 5, SPECIES_MAREEP },
    { 11, 11, SPECIES_MAREEP },
    { 5, 5, SPECIES_MAREEP },
    { 11, 11, SPECIES_MAREEP },
};

const struct WildPokemonInfo sSixIslandAlteringCave_2_LandMonsInfo = { 5, sSixIslandAlteringCave_2_LandMons };



const struct WildPokemon sSixIslandAlteringCave_3_LandMons[] =
{
    { 23, 23, SPECIES_PINECO },
    { 25, 25, SPECIES_PINECO },
    { 22, 22, SPECIES_PINECO },
    { 27, 27, SPECIES_PINECO },
    { 23, 23, SPECIES_PINECO },
    { 25, 25, SPECIES_PINECO },
    { 29, 29, SPECIES_PINECO },
    { 19, 19, SPECIES_PINECO },
    { 21, 21, SPECIES_PINECO },
    { 27, 27, SPECIES_PINECO },
    { 21, 21, SPECIES_PINECO },
    { 27, 27, SPECIES_PINECO },
};

const struct WildPokemonInfo sSixIslandAlteringCave_3_LandMonsInfo = { 5, sSixIslandAlteringCave_3_LandMons };



const struct WildPokemon sSixIslandAlteringCave_4_LandMons[] =
{
    { 16, 16, SPECIES_HOUNDOUR },
    { 18, 18, SPECIES_HOUNDOUR },
    { 14, 14, SPECIES_HOUNDOUR },
    { 20, 20, SPECIES_HOUNDOUR },
    { 16, 16, SPECIES_HOUNDOUR },
    { 18, 18, SPECIES_HOUNDOUR },
    { 22, 22, SPECIES_HOUNDOUR },
    { 12, 12, SPECIES_HOUNDOUR },
    { 14, 14, SPECIES_HOUNDOUR },
    { 20, 20, SPECIES_HOUNDOUR },
    { 14, 14, SPECIES_HOUNDOUR },
    { 20, 20, SPECIES_HOUNDOUR },
};

const struct WildPokemonInfo sSixIslandAlteringCave_4_LandMonsInfo = { 5, sSixIslandAlteringCave_4_LandMons };



const struct WildPokemon sSixIslandAlteringCave_5_LandMons[] =
{
    { 22, 22, SPECIES_TEDDIURSA },
    { 24, 24, SPECIES_TEDDIURSA },
    { 20, 20, SPECIES_TEDDIURSA },
    { 26, 26, SPECIES_TEDDIURSA },
    { 22, 22, SPECIES_TEDDIURSA },
    { 24, 24, SPECIES_TEDDIURSA },
    { 28, 28, SPECIES_TEDDIURSA },
    { 18, 18, SPECIES_TEDDIURSA },
    { 20, 20, SPECIES_TEDDIURSA },
    { 26, 26, SPECIES_TEDDIURSA },
    { 20, 20, SPECIES_TEDDIURSA },
    { 26, 26, SPECIES_TEDDIURSA },
};

const struct WildPokemonInfo sSixIslandAlteringCave_5_LandMonsInfo = { 5, sSixIslandAlteringCave_5_LandMons };



const struct WildPokemon sSixIslandAlteringCave_6_LandMons[] =
{
    { 22, 22, SPECIES_AIPOM },
    { 24, 24, SPECIES_AIPOM },
    { 20, 20, SPECIES_AIPOM },
    { 26, 26, SPECIES_AIPOM },
    { 22, 22, SPECIES_AIPOM },
    { 24, 24, SPECIES_AIPOM },
    { 28, 28, SPECIES_AIPOM },
    { 18, 18, SPECIES_AIPOM },
    { 20, 20, SPECIES_AIPOM },
    { 26, 26, SPECIES_AIPOM },
    { 20, 20, SPECIES_AIPOM },
    { 26, 26, SPECIES_AIPOM },
};

const struct WildPokemonInfo sSixIslandAlteringCave_6_LandMonsInfo = { 5, sSixIslandAlteringCave_6_LandMons };



const struct WildPokemon sSixIslandAlteringCave_7_LandMons[] =
{
    { 22, 22, SPECIES_SHUCKLE },
    { 24, 24, SPECIES_SHUCKLE },
    { 20, 20, SPECIES_SHUCKLE },
    { 26, 26, SPECIES_SHUCKLE },
    { 22, 22, SPECIES_SHUCKLE },
    { 24, 24, SPECIES_SHUCKLE },
    { 28, 28, SPECIES_SHUCKLE },
    { 18, 18, SPECIES_SHUCKLE },
    { 20, 20, SPECIES_SHUCKLE },
    { 26, 26, SPECIES_SHUCKLE },
    { 20, 20, SPECIES_SHUCKLE },
    { 26, 26, SPECIES_SHUCKLE },
};

const struct WildPokemonInfo sSixIslandAlteringCave_7_LandMonsInfo = { 5, sSixIslandAlteringCave_7_LandMons };



const struct WildPokemon sSixIslandAlteringCave_8_LandMons[] =
{
    { 22, 22, SPECIES_STANTLER },
    { 24, 24, SPECIES_STANTLER },
    { 20, 20, SPECIES_STANTLER },
    { 26, 26, SPECIES_STANTLER },
    { 22, 22, SPECIES_STANTLER },
    { 24, 24, SPECIES_STANTLER },
    { 28, 28, SPECIES_STANTLER },
    { 18, 18, SPECIES_STANTLER },
    { 20, 20, SPECIES_STANTLER },
    { 26, 26, SPECIES_STANTLER },
    { 20, 20, SPECIES_STANTLER },
    { 26, 26, SPECIES_STANTLER },
};

const struct WildPokemonInfo sSixIslandAlteringCave_8_LandMonsInfo = { 5, sSixIslandAlteringCave_8_LandMons };



const struct WildPokemon sSixIslandAlteringCave_9_LandMons[] =
{
    { 22, 22, SPECIES_SMEARGLE },
    { 24, 24, SPECIES_SMEARGLE },
    { 20, 20, SPECIES_SMEARGLE },
    { 26, 26, SPECIES_SMEARGLE },
    { 22, 22, SPECIES_SMEARGLE },
    { 24, 24, SPECIES_SMEARGLE },
    { 28, 28, SPECIES_SMEARGLE },
    { 18, 18, SPECIES_SMEARGLE },
    { 20, 20, SPECIES_SMEARGLE },
    { 26, 26, SPECIES_SMEARGLE },
    { 20, 20, SPECIES_SMEARGLE },
    { 26, 26, SPECIES_SMEARGLE },
};

const struct WildPokemonInfo sSixIslandAlteringCave_9_LandMonsInfo = { 5, sSixIslandAlteringCave_9_LandMons };


const struct WildPokemonHeader gWildMonHeaders[] =
{

    {
        .mapGroup = MAP_GROUP(SEVEN_ISLAND_TANOBY_RUINS_MONEAN_CHAMBER),
        .mapNum = MAP_NUM(SEVEN_ISLAND_TANOBY_RUINS_MONEAN_CHAMBER),
        .landMonsInfo = &sSevenIslandTanobyRuinsMoneanChamber_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },


    {
        .mapGroup = MAP_GROUP(SEVEN_ISLAND_TANOBY_RUINS_LIPTOO_CHAMBER),
        .mapNum = MAP_NUM(SEVEN_ISLAND_TANOBY_RUINS_LIPTOO_CHAMBER),
        .landMonsInfo = &sSevenIslandTanobyRuinsLiptooChamber_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },


    {
        .mapGroup = MAP_GROUP(SEVEN_ISLAND_TANOBY_RUINS_WEEPTH_CHAMBER),
        .mapNum = MAP_NUM(SEVEN_ISLAND_TANOBY_RUINS_WEEPTH_CHAMBER),
        .landMonsInfo = &sSevenIslandTanobyRuinsWeepthChamber_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },


    {
        .mapGroup = MAP_GROUP(SEVEN_ISLAND_TANOBY_RUINS_DILFORD_CHAMBER),
        .mapNum = MAP_NUM(SEVEN_ISLAND_TANOBY_RUINS_DILFORD_CHAMBER),
        .landMonsInfo = &sSevenIslandTanobyRuinsDilfordChamber_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },


    {
        .mapGroup = MAP_GROUP(SEVEN_ISLAND_TANOBY_RUINS_SCUFIB_CHAMBER),
        .mapNum = MAP_NUM(SEVEN_ISLAND_TANOBY_RUINS_SCUFIB_CHAMBER),
        .landMonsInfo = &sSevenIslandTanobyRuinsScufibChamber_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },


    {
        .mapGroup = MAP_GROUP(SEVEN_ISLAND_TANOBY_RUINS_RIXY_CHAMBER),
        .mapNum = MAP_NUM(SEVEN_ISLAND_TANOBY_RUINS_RIXY_CHAMBER),
        .landMonsInfo = &sSevenIslandTanobyRuinsRixyChamber_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },


    {
        .mapGroup = MAP_GROUP(SEVEN_ISLAND_TANOBY_RUINS_VIAPOIS_CHAMBER),
        .mapNum = MAP_NUM(SEVEN_ISLAND_TANOBY_RUINS_VIAPOIS_CHAMBER),
        .landMonsInfo = &sSevenIslandTanobyRuinsViapoisChamber_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },


    {
        .mapGroup = MAP_GROUP(VIRIDIAN_FOREST),
        .mapNum = MAP_NUM(VIRIDIAN_FOREST),
        .landMonsInfo = &sViridianForest_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },


    {
        .mapGroup = MAP_GROUP(MT_MOON_1F),
        .mapNum = MAP_NUM(MT_MOON_1F),
        .landMonsInfo = &sMtMoon1F_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },


    {
        .mapGroup = MAP_GROUP(MT_MOON_B1F),
        .mapNum = MAP_NUM(MT_MOON_B1F),
        .landMonsInfo = &sMtMoonB1F_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },


    {
        .mapGroup = MAP_GROUP(MT_MOON_B2F),
        .mapNum = MAP_NUM(MT_MOON_B2F),
        .landMonsInfo = &sMtMoonB2F_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },


    {
        .mapGroup = MAP_GROUP(SSANNE_EXTERIOR),
        .mapNum = MAP_NUM(SSANNE_EXTERIOR),
        .landMonsInfo = NULL,
        .waterMonsInfo = &sSSAnneExterior_WaterMonsInfo,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = &sSSAnneExterior_FishingMonsInfo,
    },


    {
        .mapGroup = MAP_GROUP(DIGLETTS_CAVE_B1F),
        .mapNum = MAP_NUM(DIGLETTS_CAVE_B1F),
        .landMonsInfo = &sDiglettsCaveB1F_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },


    {
        .mapGroup = MAP_GROUP(VICTORY_ROAD_1F),
        .mapNum = MAP_NUM(VICTORY_ROAD_1F),
        .landMonsInfo = &sVictoryRoad1F_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },


    {
        .mapGroup = MAP_GROUP(VICTORY_ROAD_2F),
        .mapNum = MAP_NUM(VICTORY_ROAD_2F),
        .landMonsInfo = &sVictoryRoad2F_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },


    {
        .mapGroup = MAP_GROUP(VICTORY_ROAD_3F),
        .mapNum = MAP_NUM(VICTORY_ROAD_3F),
        .landMonsInfo = &sVictoryRoad3F_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },


    {
        .mapGroup = MAP_GROUP(POKEMON_MANSION_1F),
        .mapNum = MAP_NUM(POKEMON_MANSION_1F),
        .landMonsInfo = &sPokemonMansion1F_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },


    {
        .mapGroup = MAP_GROUP(POKEMON_MANSION_2F),
        .mapNum = MAP_NUM(POKEMON_MANSION_2F),
        .landMonsInfo = &sPokemonMansion2F_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },


    {
        .mapGroup = MAP_GROUP(POKEMON_MANSION_3F),
        .mapNum = MAP_NUM(POKEMON_MANSION_3F),
        .landMonsInfo = &sPokemonMansion3F_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },


    {
        .mapGroup = MAP_GROUP(POKEMON_MANSION_B1F),
        .mapNum = MAP_NUM(POKEMON_MANSION_B1F),
        .landMonsInfo = &sPokemonMansionB1F_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },


    {
        .mapGroup = MAP_GROUP(SAFARI_ZONE_CENTER),
        .mapNum = MAP_NUM(SAFARI_ZONE_CENTER),
        .landMonsInfo = &sSafariZoneCenter_LandMonsInfo,
        .waterMonsInfo = &sSafariZoneCenter_WaterMonsInfo,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = &sSafariZoneCenter_FishingMonsInfo,
    },


    {
        .mapGroup = MAP_GROUP(SAFARI_ZONE_EAST),
        .mapNum = MAP_NUM(SAFARI_ZONE_EAST),
        .landMonsInfo = &sSafariZoneEast_LandMonsInfo,
        .waterMonsInfo = &sSafariZoneEast_WaterMonsInfo,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = &sSafariZoneEast_FishingMonsInfo,
    },


    {
        .mapGroup = MAP_GROUP(SAFARI_ZONE_NORTH),
        .mapNum = MAP_NUM(SAFARI_ZONE_NORTH),
        .landMonsInfo = &sSafariZoneNorth_LandMonsInfo,
        .waterMonsInfo = &sSafariZoneNorth_WaterMonsInfo,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = &sSafariZoneNorth_FishingMonsInfo,
    },


    {
        .mapGroup = MAP_GROUP(SAFARI_ZONE_WEST),
        .mapNum = MAP_NUM(SAFARI_ZONE_WEST),
        .landMonsInfo = &sSafariZoneWest_LandMonsInfo,
        .waterMonsInfo = &sSafariZoneWest_WaterMonsInfo,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = &sSafariZoneWest_FishingMonsInfo,
    },


    {
        .mapGroup = MAP_GROUP(CERULEAN_CAVE_1F),
        .mapNum = MAP_NUM(CERULEAN_CAVE_1F),
        .landMonsInfo = &sCeruleanCave1F_LandMonsInfo,
        .waterMonsInfo = &sCeruleanCave1F_WaterMonsInfo,
        .rockSmashMonsInfo = &sCeruleanCave1F_RockSmashMonsInfo,
        .fishingMonsInfo = &sCeruleanCave1F_FishingMonsInfo,
    },


    {
        .mapGroup = MAP_GROUP(CERULEAN_CAVE_2F),
        .mapNum = MAP_NUM(CERULEAN_CAVE_2F),
        .landMonsInfo = &sCeruleanCave2F_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = &sCeruleanCave2F_RockSmashMonsInfo,
        .fishingMonsInfo = NULL,
    },


    {
        .mapGroup = MAP_GROUP(CERULEAN_CAVE_B1F),
        .mapNum = MAP_NUM(CERULEAN_CAVE_B1F),
        .landMonsInfo = &sCeruleanCaveB1F_LandMonsInfo,
        .waterMonsInfo = &sCeruleanCaveB1F_WaterMonsInfo,
        .rockSmashMonsInfo = &sCeruleanCaveB1F_RockSmashMonsInfo,
        .fishingMonsInfo = &sCeruleanCaveB1F_FishingMonsInfo,
    },


    {
        .mapGroup = MAP_GROUP(ROCK_TUNNEL_1F),
        .mapNum = MAP_NUM(ROCK_TUNNEL_1F),
        .landMonsInfo = &sRockTunnel1F_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },


    {
        .mapGroup = MAP_GROUP(ROCK_TUNNEL_B1F),
        .mapNum = MAP_NUM(ROCK_TUNNEL_B1F),
        .landMonsInfo = &sRockTunnelB1F_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = &sRockTunnelB1F_RockSmashMonsInfo,
        .fishingMonsInfo = NULL,
    },


    {
        .mapGroup = MAP_GROUP(SEAFOAM_ISLANDS_1F),
        .mapNum = MAP_NUM(SEAFOAM_ISLANDS_1F),
        .landMonsInfo = &sSeafoamIslands1F_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },


    {
        .mapGroup = MAP_GROUP(SEAFOAM_ISLANDS_B1F),
        .mapNum = MAP_NUM(SEAFOAM_ISLANDS_B1F),
        .landMonsInfo = &sSeafoamIslandsB1F_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },


    {
        .mapGroup = MAP_GROUP(SEAFOAM_ISLANDS_B2F),
        .mapNum = MAP_NUM(SEAFOAM_ISLANDS_B2F),
        .landMonsInfo = &sSeafoamIslandsB2F_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },


    {
        .mapGroup = MAP_GROUP(SEAFOAM_ISLANDS_B3F),
        .mapNum = MAP_NUM(SEAFOAM_ISLANDS_B3F),
        .landMonsInfo = &sSeafoamIslandsB3F_LandMonsInfo,
        .waterMonsInfo = &sSeafoamIslandsB3F_WaterMonsInfo,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = &sSeafoamIslandsB3F_FishingMonsInfo,
    },


    {
        .mapGroup = MAP_GROUP(SEAFOAM_ISLANDS_B4F),
        .mapNum = MAP_NUM(SEAFOAM_ISLANDS_B4F),
        .landMonsInfo = &sSeafoamIslandsB4F_LandMonsInfo,
        .waterMonsInfo = &sSeafoamIslandsB4F_WaterMonsInfo,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = &sSeafoamIslandsB4F_FishingMonsInfo,
    },


    {
        .mapGroup = MAP_GROUP(POKEMON_TOWER_3F),
        .mapNum = MAP_NUM(POKEMON_TOWER_3F),
        .landMonsInfo = &sPokemonTower3F_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },


    {
        .mapGroup = MAP_GROUP(POKEMON_TOWER_4F),
        .mapNum = MAP_NUM(POKEMON_TOWER_4F),
        .landMonsInfo = &sPokemonTower4F_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },


    {
        .mapGroup = MAP_GROUP(POKEMON_TOWER_5F),
        .mapNum = MAP_NUM(POKEMON_TOWER_5F),
        .landMonsInfo = &sPokemonTower5F_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },


    {
        .mapGroup = MAP_GROUP(POKEMON_TOWER_6F),
        .mapNum = MAP_NUM(POKEMON_TOWER_6F),
        .landMonsInfo = &sPokemonTower6F_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },


    {
        .mapGroup = MAP_GROUP(POKEMON_TOWER_7F),
        .mapNum = MAP_NUM(POKEMON_TOWER_7F),
        .landMonsInfo = &sPokemonTower7F_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },


    {
        .mapGroup = MAP_GROUP(POWER_PLANT),
        .mapNum = MAP_NUM(POWER_PLANT),
        .landMonsInfo = &sPowerPlant_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },


    {
        .mapGroup = MAP_GROUP(MT_EMBER_EXTERIOR),
        .mapNum = MAP_NUM(MT_EMBER_EXTERIOR),
        .landMonsInfo = &sMtEmberExterior_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = &sMtEmberExterior_RockSmashMonsInfo,
        .fishingMonsInfo = NULL,
    },


    {
        .mapGroup = MAP_GROUP(MT_EMBER_SUMMIT_PATH_1F),
        .mapNum = MAP_NUM(MT_EMBER_SUMMIT_PATH_1F),
        .landMonsInfo = &sMtEmberSummitPath1F_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },


    {
        .mapGroup = MAP_GROUP(MT_EMBER_SUMMIT_PATH_2F),
        .mapNum = MAP_NUM(MT_EMBER_SUMMIT_PATH_2F),
        .landMonsInfo = &sMtEmberSummitPath2F_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = &sMtEmberSummitPath2F_RockSmashMonsInfo,
        .fishingMonsInfo = NULL,
    },


    {
        .mapGroup = MAP_GROUP(MT_EMBER_SUMMIT_PATH_3F),
        .mapNum = MAP_NUM(MT_EMBER_SUMMIT_PATH_3F),
        .landMonsInfo = &sMtEmberSummitPath3F_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },


    {
        .mapGroup = MAP_GROUP(MT_EMBER_RUBY_PATH_1F),
        .mapNum = MAP_NUM(MT_EMBER_RUBY_PATH_1F),
        .landMonsInfo = &sMtEmberRubyPath1F_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = &sMtEmberRubyPath1F_RockSmashMonsInfo,
        .fishingMonsInfo = NULL,
    },


    {
        .mapGroup = MAP_GROUP(MT_EMBER_RUBY_PATH_B1F),
        .mapNum = MAP_NUM(MT_EMBER_RUBY_PATH_B1F),
        .landMonsInfo = &sMtEmberRubyPathB1F_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = &sMtEmberRubyPathB1F_RockSmashMonsInfo,
        .fishingMonsInfo = NULL,
    },


    {
        .mapGroup = MAP_GROUP(MT_EMBER_RUBY_PATH_B2F),
        .mapNum = MAP_NUM(MT_EMBER_RUBY_PATH_B2F),
        .landMonsInfo = &sMtEmberRubyPathB2F_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = &sMtEmberRubyPathB2F_RockSmashMonsInfo,
        .fishingMonsInfo = NULL,
    },


    {
        .mapGroup = MAP_GROUP(MT_EMBER_RUBY_PATH_B3F),
        .mapNum = MAP_NUM(MT_EMBER_RUBY_PATH_B3F),
        .landMonsInfo = &sMtEmberRubyPathB3F_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = &sMtEmberRubyPathB3F_RockSmashMonsInfo,
        .fishingMonsInfo = NULL,
    },


    {
        .mapGroup = MAP_GROUP(MT_EMBER_RUBY_PATH_B1F_STAIRS),
        .mapNum = MAP_NUM(MT_EMBER_RUBY_PATH_B1F_STAIRS),
        .landMonsInfo = &sMtEmberRubyPathB1FStairs_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = &sMtEmberRubyPathB1FStairs_RockSmashMonsInfo,
        .fishingMonsInfo = NULL,
    },


    {
        .mapGroup = MAP_GROUP(MT_EMBER_RUBY_PATH_B2F_STAIRS),
        .mapNum = MAP_NUM(MT_EMBER_RUBY_PATH_B2F_STAIRS),
        .landMonsInfo = &sMtEmberRubyPathB2FStairs_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = &sMtEmberRubyPathB2FStairs_RockSmashMonsInfo,
        .fishingMonsInfo = NULL,
    },


    {
        .mapGroup = MAP_GROUP(THREE_ISLAND_BERRY_FOREST),
        .mapNum = MAP_NUM(THREE_ISLAND_BERRY_FOREST),
        .landMonsInfo = &sThreeIslandBerryForest_LandMonsInfo,
        .waterMonsInfo = &sThreeIslandBerryForest_WaterMonsInfo,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = &sThreeIslandBerryForest_FishingMonsInfo,
    },


    {
        .mapGroup = MAP_GROUP(FOUR_ISLAND_ICEFALL_CAVE_ENTRANCE),
        .mapNum = MAP_NUM(FOUR_ISLAND_ICEFALL_CAVE_ENTRANCE),
        .landMonsInfo = &sFourIslandIcefallCaveEntrance_LandMonsInfo,
        .waterMonsInfo = &sFourIslandIcefallCaveEntrance_WaterMonsInfo,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = &sFourIslandIcefallCaveEntrance_FishingMonsInfo,
    },


    {
        .mapGroup = MAP_GROUP(FOUR_ISLAND_ICEFALL_CAVE_1F),
        .mapNum = MAP_NUM(FOUR_ISLAND_ICEFALL_CAVE_1F),
        .landMonsInfo = &sFourIslandIcefallCave1F_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },


    {
        .mapGroup = MAP_GROUP(FOUR_ISLAND_ICEFALL_CAVE_B1F),
        .mapNum = MAP_NUM(FOUR_ISLAND_ICEFALL_CAVE_B1F),
        .landMonsInfo = &sFourIslandIcefallCaveB1F_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },


    {
        .mapGroup = MAP_GROUP(FOUR_ISLAND_ICEFALL_CAVE_BACK),
        .mapNum = MAP_NUM(FOUR_ISLAND_ICEFALL_CAVE_BACK),
        .landMonsInfo = &sFourIslandIcefallCaveBack_LandMonsInfo,
        .waterMonsInfo = &sFourIslandIcefallCaveBack_WaterMonsInfo,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = &sFourIslandIcefallCaveBack_FishingMonsInfo,
    },


    {
        .mapGroup = MAP_GROUP(SIX_ISLAND_PATTERN_BUSH),
        .mapNum = MAP_NUM(SIX_ISLAND_PATTERN_BUSH),
        .landMonsInfo = &sSixIslandPatternBush_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },


    {
        .mapGroup = MAP_GROUP(FIVE_ISLAND_LOST_CAVE_ROOM1),
        .mapNum = MAP_NUM(FIVE_ISLAND_LOST_CAVE_ROOM1),
        .landMonsInfo = &sFiveIslandLostCaveRoom1_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },


    {
        .mapGroup = MAP_GROUP(FIVE_ISLAND_LOST_CAVE_ROOM2),
        .mapNum = MAP_NUM(FIVE_ISLAND_LOST_CAVE_ROOM2),
        .landMonsInfo = &sFiveIslandLostCaveRoom2_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },


    {
        .mapGroup = MAP_GROUP(FIVE_ISLAND_LOST_CAVE_ROOM3),
        .mapNum = MAP_NUM(FIVE_ISLAND_LOST_CAVE_ROOM3),
        .landMonsInfo = &sFiveIslandLostCaveRoom3_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },


    {
        .mapGroup = MAP_GROUP(FIVE_ISLAND_LOST_CAVE_ROOM4),
        .mapNum = MAP_NUM(FIVE_ISLAND_LOST_CAVE_ROOM4),
        .landMonsInfo = &sFiveIslandLostCaveRoom4_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },


    {
        .mapGroup = MAP_GROUP(FIVE_ISLAND_LOST_CAVE_ROOM5),
        .mapNum = MAP_NUM(FIVE_ISLAND_LOST_CAVE_ROOM5),
        .landMonsInfo = &sFiveIslandLostCaveRoom5_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },


    {
        .mapGroup = MAP_GROUP(FIVE_ISLAND_LOST_CAVE_ROOM6),
        .mapNum = MAP_NUM(FIVE_ISLAND_LOST_CAVE_ROOM6),
        .landMonsInfo = &sFiveIslandLostCaveRoom6_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },


    {
        .mapGroup = MAP_GROUP(FIVE_ISLAND_LOST_CAVE_ROOM7),
        .mapNum = MAP_NUM(FIVE_ISLAND_LOST_CAVE_ROOM7),
        .landMonsInfo = &sFiveIslandLostCaveRoom7_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },


    {
        .mapGroup = MAP_GROUP(FIVE_ISLAND_LOST_CAVE_ROOM8),
        .mapNum = MAP_NUM(FIVE_ISLAND_LOST_CAVE_ROOM8),
        .landMonsInfo = &sFiveIslandLostCaveRoom8_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },


    {
        .mapGroup = MAP_GROUP(FIVE_ISLAND_LOST_CAVE_ROOM9),
        .mapNum = MAP_NUM(FIVE_ISLAND_LOST_CAVE_ROOM9),
        .landMonsInfo = &sFiveIslandLostCaveRoom9_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },


    {
        .mapGroup = MAP_GROUP(FIVE_ISLAND_LOST_CAVE_ROOM10),
        .mapNum = MAP_NUM(FIVE_ISLAND_LOST_CAVE_ROOM10),
        .landMonsInfo = &sFiveIslandLostCaveRoom10_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },


    {
        .mapGroup = MAP_GROUP(FIVE_ISLAND_LOST_CAVE_ROOM11),
        .mapNum = MAP_NUM(FIVE_ISLAND_LOST_CAVE_ROOM11),
        .landMonsInfo = &sFiveIslandLostCaveRoom11_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },


    {
        .mapGroup = MAP_GROUP(FIVE_ISLAND_LOST_CAVE_ROOM12),
        .mapNum = MAP_NUM(FIVE_ISLAND_LOST_CAVE_ROOM12),
        .landMonsInfo = &sFiveIslandLostCaveRoom12_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },


    {
        .mapGroup = MAP_GROUP(FIVE_ISLAND_LOST_CAVE_ROOM13),
        .mapNum = MAP_NUM(FIVE_ISLAND_LOST_CAVE_ROOM13),
        .landMonsInfo = &sFiveIslandLostCaveRoom13_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },


    {
        .mapGroup = MAP_GROUP(FIVE_ISLAND_LOST_CAVE_ROOM14),
        .mapNum = MAP_NUM(FIVE_ISLAND_LOST_CAVE_ROOM14),
        .landMonsInfo = &sFiveIslandLostCaveRoom14_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },


    {
        .mapGroup = MAP_GROUP(ONE_ISLAND_KINDLE_ROAD),
        .mapNum = MAP_NUM(ONE_ISLAND_KINDLE_ROAD),
        .landMonsInfo = &sOneIslandKindleRoad_LandMonsInfo,
        .waterMonsInfo = &sOneIslandKindleRoad_WaterMonsInfo,
        .rockSmashMonsInfo = &sOneIslandKindleRoad_RockSmashMonsInfo,
        .fishingMonsInfo = &sOneIslandKindleRoad_FishingMonsInfo,
    },


    {
        .mapGroup = MAP_GROUP(ONE_ISLAND_TREASURE_BEACH),
        .mapNum = MAP_NUM(ONE_ISLAND_TREASURE_BEACH),
        .landMonsInfo = &sOneIslandTreasureBeach_LandMonsInfo,
        .waterMonsInfo = &sOneIslandTreasureBeach_WaterMonsInfo,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = &sOneIslandTreasureBeach_FishingMonsInfo,
    },


    {
        .mapGroup = MAP_GROUP(TWO_ISLAND_CAPE_BRINK),
        .mapNum = MAP_NUM(TWO_ISLAND_CAPE_BRINK),
        .landMonsInfo = &sTwoIslandCapeBrink_LandMonsInfo,
        .waterMonsInfo = &sTwoIslandCapeBrink_WaterMonsInfo,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = &sTwoIslandCapeBrink_FishingMonsInfo,
    },


    {
        .mapGroup = MAP_GROUP(THREE_ISLAND_BOND_BRIDGE),
        .mapNum = MAP_NUM(THREE_ISLAND_BOND_BRIDGE),
        .landMonsInfo = &sThreeIslandBondBridge_LandMonsInfo,
        .waterMonsInfo = &sThreeIslandBondBridge_WaterMonsInfo,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = &sThreeIslandBondBridge_FishingMonsInfo,
    },


    {
        .mapGroup = MAP_GROUP(THREE_ISLAND_PORT),
        .mapNum = MAP_NUM(THREE_ISLAND_PORT),
        .landMonsInfo = &sThreeIslandPort_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },


    {
        .mapGroup = MAP_GROUP(FIVE_ISLAND_RESORT_GORGEOUS),
        .mapNum = MAP_NUM(FIVE_ISLAND_RESORT_GORGEOUS),
        .landMonsInfo = NULL,
        .waterMonsInfo = &sFiveIslandResortGorgeous_WaterMonsInfo,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = &sFiveIslandResortGorgeous_FishingMonsInfo,
    },


    {
        .mapGroup = MAP_GROUP(FIVE_ISLAND_WATER_LABYRINTH),
        .mapNum = MAP_NUM(FIVE_ISLAND_WATER_LABYRINTH),
        .landMonsInfo = NULL,
        .waterMonsInfo = &sFiveIslandWaterLabyrinth_WaterMonsInfo,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = &sFiveIslandWaterLabyrinth_FishingMonsInfo,
    },


    {
        .mapGroup = MAP_GROUP(FIVE_ISLAND_MEADOW),
        .mapNum = MAP_NUM(FIVE_ISLAND_MEADOW),
        .landMonsInfo = &sFiveIslandMeadow_LandMonsInfo,
        .waterMonsInfo = &sFiveIslandMeadow_WaterMonsInfo,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = &sFiveIslandMeadow_FishingMonsInfo,
    },


    {
        .mapGroup = MAP_GROUP(FIVE_ISLAND_MEMORIAL_PILLAR),
        .mapNum = MAP_NUM(FIVE_ISLAND_MEMORIAL_PILLAR),
        .landMonsInfo = &sFiveIslandMemorialPillar_LandMonsInfo,
        .waterMonsInfo = &sFiveIslandMemorialPillar_WaterMonsInfo,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = &sFiveIslandMemorialPillar_FishingMonsInfo,
    },


    {
        .mapGroup = MAP_GROUP(SIX_ISLAND_OUTCAST_ISLAND),
        .mapNum = MAP_NUM(SIX_ISLAND_OUTCAST_ISLAND),
        .landMonsInfo = NULL,
        .waterMonsInfo = &sSixIslandOutcastIsland_WaterMonsInfo,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = &sSixIslandOutcastIsland_FishingMonsInfo,
    },


    {
        .mapGroup = MAP_GROUP(SIX_ISLAND_GREEN_PATH),
        .mapNum = MAP_NUM(SIX_ISLAND_GREEN_PATH),
        .landMonsInfo = NULL,
        .waterMonsInfo = &sSixIslandGreenPath_WaterMonsInfo,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = &sSixIslandGreenPath_FishingMonsInfo,
    },


    {
        .mapGroup = MAP_GROUP(SIX_ISLAND_WATER_PATH),
        .mapNum = MAP_NUM(SIX_ISLAND_WATER_PATH),
        .landMonsInfo = &sSixIslandWaterPath_LandMonsInfo,
        .waterMonsInfo = &sSixIslandWaterPath_WaterMonsInfo,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = &sSixIslandWaterPath_FishingMonsInfo,
    },


    {
        .mapGroup = MAP_GROUP(SIX_ISLAND_RUIN_VALLEY),
        .mapNum = MAP_NUM(SIX_ISLAND_RUIN_VALLEY),
        .landMonsInfo = &sSixIslandRuinValley_LandMonsInfo,
        .waterMonsInfo = &sSixIslandRuinValley_WaterMonsInfo,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = &sSixIslandRuinValley_FishingMonsInfo,
    },


    {
        .mapGroup = MAP_GROUP(SEVEN_ISLAND_TRAINER_TOWER),
        .mapNum = MAP_NUM(SEVEN_ISLAND_TRAINER_TOWER),
        .landMonsInfo = NULL,
        .waterMonsInfo = &sSevenIslandTrainerTower_WaterMonsInfo,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = &sSevenIslandTrainerTower_FishingMonsInfo,
    },


    {
        .mapGroup = MAP_GROUP(SEVEN_ISLAND_SEVAULT_CANYON_ENTRANCE),
        .mapNum = MAP_NUM(SEVEN_ISLAND_SEVAULT_CANYON_ENTRANCE),
        .landMonsInfo = &sSevenIslandSevaultCanyonEntrance_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },


    {
        .mapGroup = MAP_GROUP(SEVEN_ISLAND_SEVAULT_CANYON),
        .mapNum = MAP_NUM(SEVEN_ISLAND_SEVAULT_CANYON),
        .landMonsInfo = &sSevenIslandSevaultCanyon_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = &sSevenIslandSevaultCanyon_RockSmashMonsInfo,
        .fishingMonsInfo = NULL,
    },


    {
        .mapGroup = MAP_GROUP(SEVEN_ISLAND_TANOBY_RUINS),
        .mapNum = MAP_NUM(SEVEN_ISLAND_TANOBY_RUINS),
        .landMonsInfo = NULL,
        .waterMonsInfo = &sSevenIslandTanobyRuins_WaterMonsInfo,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = &sSevenIslandTanobyRuins_FishingMonsInfo,
    },


    {
        .mapGroup = MAP_GROUP(ROUTE1),
        .mapNum = MAP_NUM(ROUTE1),
        .landMonsInfo = &sRoute1_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },


    {
        .mapGroup = MAP_GROUP(ROUTE2),
        .mapNum = MAP_NUM(ROUTE2),
        .landMonsInfo = &sRoute2_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },


    {
        .mapGroup = MAP_GROUP(ROUTE3),
        .mapNum = MAP_NUM(ROUTE3),
        .landMonsInfo = &sRoute3_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },


    {
        .mapGroup = MAP_GROUP(ROUTE4),
        .mapNum = MAP_NUM(ROUTE4),
        .landMonsInfo = &sRoute4_LandMonsInfo,
        .waterMonsInfo = &sRoute4_WaterMonsInfo,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = &sRoute4_FishingMonsInfo,
    },


    {
        .mapGroup = MAP_GROUP(ROUTE5),
        .mapNum = MAP_NUM(ROUTE5),
        .landMonsInfo = &sRoute5_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },


    {
        .mapGroup = MAP_GROUP(ROUTE6),
        .mapNum = MAP_NUM(ROUTE6),
        .landMonsInfo = &sRoute6_LandMonsInfo,
        .waterMonsInfo = &sRoute6_WaterMonsInfo,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = &sRoute6_FishingMonsInfo,
    },


    {
        .mapGroup = MAP_GROUP(ROUTE7),
        .mapNum = MAP_NUM(ROUTE7),
        .landMonsInfo = &sRoute7_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },


    {
        .mapGroup = MAP_GROUP(ROUTE8),
        .mapNum = MAP_NUM(ROUTE8),
        .landMonsInfo = &sRoute8_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },


    {
        .mapGroup = MAP_GROUP(ROUTE9),
        .mapNum = MAP_NUM(ROUTE9),
        .landMonsInfo = &sRoute9_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },


    {
        .mapGroup = MAP_GROUP(ROUTE10),
        .mapNum = MAP_NUM(ROUTE10),
        .landMonsInfo = &sRoute10_LandMonsInfo,
        .waterMonsInfo = &sRoute10_WaterMonsInfo,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = &sRoute10_FishingMonsInfo,
    },


    {
        .mapGroup = MAP_GROUP(ROUTE11),
        .mapNum = MAP_NUM(ROUTE11),
        .landMonsInfo = &sRoute11_LandMonsInfo,
        .waterMonsInfo = &sRoute11_WaterMonsInfo,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = &sRoute11_FishingMonsInfo,
    },


    {
        .mapGroup = MAP_GROUP(ROUTE12),
        .mapNum = MAP_NUM(ROUTE12),
        .landMonsInfo = &sRoute12_LandMonsInfo,
        .waterMonsInfo = &sRoute12_WaterMonsInfo,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = &sRoute12_FishingMonsInfo,
    },


    {
        .mapGroup = MAP_GROUP(ROUTE13),
        .mapNum = MAP_NUM(ROUTE13),
        .landMonsInfo = &sRoute13_LandMonsInfo,
        .waterMonsInfo = &sRoute13_WaterMonsInfo,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = &sRoute13_FishingMonsInfo,
    },


    {
        .mapGroup = MAP_GROUP(ROUTE14),
        .mapNum = MAP_NUM(ROUTE14),
        .landMonsInfo = &sRoute14_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },


    {
        .mapGroup = MAP_GROUP(ROUTE15),
        .mapNum = MAP_NUM(ROUTE15),
        .landMonsInfo = &sRoute15_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },


    {
        .mapGroup = MAP_GROUP(ROUTE16),
        .mapNum = MAP_NUM(ROUTE16),
        .landMonsInfo = &sRoute16_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },


    {
        .mapGroup = MAP_GROUP(ROUTE17),
        .mapNum = MAP_NUM(ROUTE17),
        .landMonsInfo = &sRoute17_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },


    {
        .mapGroup = MAP_GROUP(ROUTE18),
        .mapNum = MAP_NUM(ROUTE18),
        .landMonsInfo = &sRoute18_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },


    {
        .mapGroup = MAP_GROUP(ROUTE19),
        .mapNum = MAP_NUM(ROUTE19),
        .landMonsInfo = NULL,
        .waterMonsInfo = &sRoute19_WaterMonsInfo,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = &sRoute19_FishingMonsInfo,
    },


    {
        .mapGroup = MAP_GROUP(ROUTE20),
        .mapNum = MAP_NUM(ROUTE20),
        .landMonsInfo = NULL,
        .waterMonsInfo = &sRoute20_WaterMonsInfo,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = &sRoute20_FishingMonsInfo,
    },


    {
        .mapGroup = MAP_GROUP(ROUTE21_NORTH),
        .mapNum = MAP_NUM(ROUTE21_NORTH),
        .landMonsInfo = &sRoute21North_LandMonsInfo,
        .waterMonsInfo = &sRoute21North_WaterMonsInfo,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = &sRoute21North_FishingMonsInfo,
    },


    {
        .mapGroup = MAP_GROUP(ROUTE21_SOUTH),
        .mapNum = MAP_NUM(ROUTE21_SOUTH),
        .landMonsInfo = &sRoute21South_LandMonsInfo,
        .waterMonsInfo = &sRoute21South_WaterMonsInfo,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = &sRoute21South_FishingMonsInfo,
    },


    {
        .mapGroup = MAP_GROUP(ROUTE22),
        .mapNum = MAP_NUM(ROUTE22),
        .landMonsInfo = &sRoute22_LandMonsInfo,
        .waterMonsInfo = &sRoute22_WaterMonsInfo,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = &sRoute22_FishingMonsInfo,
    },


    {
        .mapGroup = MAP_GROUP(ROUTE23),
        .mapNum = MAP_NUM(ROUTE23),
        .landMonsInfo = &sRoute23_LandMonsInfo,
        .waterMonsInfo = &sRoute23_WaterMonsInfo,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = &sRoute23_FishingMonsInfo,
    },


    {
        .mapGroup = MAP_GROUP(ROUTE24),
        .mapNum = MAP_NUM(ROUTE24),
        .landMonsInfo = &sRoute24_LandMonsInfo,
        .waterMonsInfo = &sRoute24_WaterMonsInfo,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = &sRoute24_FishingMonsInfo,
    },


    {
        .mapGroup = MAP_GROUP(ROUTE25),
        .mapNum = MAP_NUM(ROUTE25),
        .landMonsInfo = &sRoute25_LandMonsInfo,
        .waterMonsInfo = &sRoute25_WaterMonsInfo,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = &sRoute25_FishingMonsInfo,
    },


    {
        .mapGroup = MAP_GROUP(PALLET_TOWN),
        .mapNum = MAP_NUM(PALLET_TOWN),
        .landMonsInfo = NULL,
        .waterMonsInfo = &sPalletTown_WaterMonsInfo,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = &sPalletTown_FishingMonsInfo,
    },


    {
        .mapGroup = MAP_GROUP(VIRIDIAN_CITY),
        .mapNum = MAP_NUM(VIRIDIAN_CITY),
        .landMonsInfo = NULL,
        .waterMonsInfo = &sViridianCity_WaterMonsInfo,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = &sViridianCity_FishingMonsInfo,
    },


    {
        .mapGroup = MAP_GROUP(CERULEAN_CITY),
        .mapNum = MAP_NUM(CERULEAN_CITY),
        .landMonsInfo = NULL,
        .waterMonsInfo = &sCeruleanCity_WaterMonsInfo,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = &sCeruleanCity_FishingMonsInfo,
    },


    {
        .mapGroup = MAP_GROUP(VERMILION_CITY),
        .mapNum = MAP_NUM(VERMILION_CITY),
        .landMonsInfo = NULL,
        .waterMonsInfo = &sVermilionCity_WaterMonsInfo,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = &sVermilionCity_FishingMonsInfo,
    },


    {
        .mapGroup = MAP_GROUP(CELADON_CITY),
        .mapNum = MAP_NUM(CELADON_CITY),
        .landMonsInfo = NULL,
        .waterMonsInfo = &sCeladonCity_WaterMonsInfo,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = &sCeladonCity_FishingMonsInfo,
    },


    {
        .mapGroup = MAP_GROUP(FUCHSIA_CITY),
        .mapNum = MAP_NUM(FUCHSIA_CITY),
        .landMonsInfo = NULL,
        .waterMonsInfo = &sFuchsiaCity_WaterMonsInfo,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = &sFuchsiaCity_FishingMonsInfo,
    },


    {
        .mapGroup = MAP_GROUP(CINNABAR_ISLAND),
        .mapNum = MAP_NUM(CINNABAR_ISLAND),
        .landMonsInfo = NULL,
        .waterMonsInfo = &sCinnabarIsland_WaterMonsInfo,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = &sCinnabarIsland_FishingMonsInfo,
    },


    {
        .mapGroup = MAP_GROUP(ONE_ISLAND),
        .mapNum = MAP_NUM(ONE_ISLAND),
        .landMonsInfo = NULL,
        .waterMonsInfo = &sOneIsland_WaterMonsInfo,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = &sOneIsland_FishingMonsInfo,
    },


    {
        .mapGroup = MAP_GROUP(FOUR_ISLAND),
        .mapNum = MAP_NUM(FOUR_ISLAND),
        .landMonsInfo = NULL,
        .waterMonsInfo = &sFourIsland_WaterMonsInfo,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = &sFourIsland_FishingMonsInfo,
    },


    {
        .mapGroup = MAP_GROUP(FIVE_ISLAND),
        .mapNum = MAP_NUM(FIVE_ISLAND),
        .landMonsInfo = NULL,
        .waterMonsInfo = &sFiveIsland_WaterMonsInfo,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = &sFiveIsland_FishingMonsInfo,
    },


    {
        .mapGroup = MAP_GROUP(SIX_ISLAND_ALTERING_CAVE),
        .mapNum = MAP_NUM(SIX_ISLAND_ALTERING_CAVE),
        .landMonsInfo = &sSixIslandAlteringCave_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },


    {
        .mapGroup = MAP_GROUP(SIX_ISLAND_ALTERING_CAVE),
        .mapNum = MAP_NUM(SIX_ISLAND_ALTERING_CAVE),
        .landMonsInfo = &sSixIslandAlteringCave_2_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },


    {
        .mapGroup = MAP_GROUP(SIX_ISLAND_ALTERING_CAVE),
        .mapNum = MAP_NUM(SIX_ISLAND_ALTERING_CAVE),
        .landMonsInfo = &sSixIslandAlteringCave_3_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },


    {
        .mapGroup = MAP_GROUP(SIX_ISLAND_ALTERING_CAVE),
        .mapNum = MAP_NUM(SIX_ISLAND_ALTERING_CAVE),
        .landMonsInfo = &sSixIslandAlteringCave_4_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },


    {
        .mapGroup = MAP_GROUP(SIX_ISLAND_ALTERING_CAVE),
        .mapNum = MAP_NUM(SIX_ISLAND_ALTERING_CAVE),
        .landMonsInfo = &sSixIslandAlteringCave_5_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },


    {
        .mapGroup = MAP_GROUP(SIX_ISLAND_ALTERING_CAVE),
        .mapNum = MAP_NUM(SIX_ISLAND_ALTERING_CAVE),
        .landMonsInfo = &sSixIslandAlteringCave_6_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },


    {
        .mapGroup = MAP_GROUP(SIX_ISLAND_ALTERING_CAVE),
        .mapNum = MAP_NUM(SIX_ISLAND_ALTERING_CAVE),
        .landMonsInfo = &sSixIslandAlteringCave_7_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },


    {
        .mapGroup = MAP_GROUP(SIX_ISLAND_ALTERING_CAVE),
        .mapNum = MAP_NUM(SIX_ISLAND_ALTERING_CAVE),
        .landMonsInfo = &sSixIslandAlteringCave_8_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },


    {
        .mapGroup = MAP_GROUP(SIX_ISLAND_ALTERING_CAVE),
        .mapNum = MAP_NUM(SIX_ISLAND_ALTERING_CAVE),
        .landMonsInfo = &sSixIslandAlteringCave_9_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },

};
