#ifndef GUARD_WILD_ENCOUNTER_H
#define GUARD_WILD_ENCOUNTER_H

#include "global.h"

#define LAND_WILD_COUNT          12
#define WATER_WILD_COUNT         5
#define ROCK_WILD_COUNT          5
#define FISH_WILD_COUNT          10
#define RANDOM_WILD_COUNT        5
#define BASE_RANDOM_WILD_COUNT   43

#define NUM_ALTERING_CAVE_TABLES 9

#define FOREST 0
#define FIELDS 1
#define GARDEN 2
#define TUNNEL 3
#define CAVE   4
#define BUILDING 5
#define SAFARI 6
#define GHOST 7
#define SHORE 8
#define ROCKS 9
#define SEA    10
#define LAKE   11
#define BEACH 12
#define VOLCANO 13
#define CITY   14
#define TOWN   15
#define FISHING 16
#define SAFARI_LAKE 17
#define ICE_CAVE 18

struct MapConfiguration
{
    u8 group;
    u16 species[BASE_RANDOM_WILD_COUNT];
};

struct BasePokemonRandomizer
{
    u16 map;
    u8 group;
};

struct WildPokemon
{
    u8 minLevel;
    u8 maxLevel;
    u16 species;
};

struct WildPokemonInfo
{
    u8 encounterRate;
    const struct WildPokemon *wildPokemon;
};

struct WildPokemonHeader
{
    u8 mapGroup;
    u16 mapNum;
    const struct WildPokemonInfo *landMonsInfo;
    const struct WildPokemonInfo *waterMonsInfo;
    const struct WildPokemonInfo *rockSmashMonsInfo;
    const struct WildPokemonInfo *fishingMonsInfo;
};

extern const struct WildPokemonHeader gWildMonHeaders[];

void DisableWildEncounters(bool8 disabled);
bool8 StandardWildEncounter(u32 currMetatileAttrs, u16 previousMetaTileBehavior);
bool8 SweetScentWildEncounter(void);
bool8 DoesCurrentMapHaveFishingMons(void);
void FishingWildEncounter(u8 rod);
u16 GetLocalWildMon(bool8 *isWaterMon);
u16 GetLocalWaterMon(void);
bool8 UpdateRepelCounter(void);
void DisableWildEncounters(bool8 state);
u8 GetUnownLetterByPersonalityLoByte(u32 personality);
bool8 SweetScentWildEncounter(void);
void SeedWildEncounterRng(u16 randVal);
void ResetEncounterRateModifiers(void);
bool8 TryStandardWildEncounter(u32 currMetatileAttrs);
void GenerateLandMonsData();
void GenerateWaterMonsData();
void GenerateFishingMonsData();
void GenerateRockSmashMonsData();

#endif // GUARD_WILD_ENCOUNTER_H
