static const u8 sItemEffect_Potion[8] = {
    [4] = ITEM4_HEAL_HP,
    [7] = 20, // Amount of HP to recover
};

static const u8 sItemEffect_Antidote[6] = {
    [3] = ITEM3_POISON,
};

static const u8 sItemEffect_BurnHeal[6] = {
    [3] = ITEM3_BURN,
};

static const u8 sItemEffect_IceHeal[6] = {
    [3] = ITEM3_FREEZE,
};

static const u8 sItemEffect_Awakening[6] = {
    [3] = ITEM3_SLEEP,
};

static const u8 sItemEffect_ParalyzeHeal[6] = {
    [3] = ITEM3_PARALYSIS,
};

static const u8 sItemEffect_FullRestore[8] = {
    [3] = ITEM3_STATUS_ALL,
    [4] = ITEM4_HEAL_HP,
    [7] = ITEM7_HEAL_HP_FULL,
};

static const u8 sItemEffect_MaxPotion[8] = {
    [4] = ITEM4_HEAL_HP,
    [7] = ITEM7_HEAL_HP_FULL,
};

static const u8 sItemEffect_HyperPotion[8] = {
    [4] = ITEM4_HEAL_HP,
    [7] = 200, // Amount of HP to recover
};

static const u8 sItemEffect_SuperPotion[8] = {
    [4] = ITEM4_HEAL_HP,
    [7] = 50, // Amount of HP to recover
};

static const u8 sItemEffect_FullHeal[6] = {
    [3] = ITEM3_STATUS_ALL,
};

static const u8 sItemEffect_Revive[8] = {
    [4] = ITEM4_REVIVE | ITEM4_HEAL_HP,
    [7] = ITEM7_HEAL_HP_HALF,
};

static const u8 sItemEffect_MaxRevive[8] = {
    [4] = ITEM4_REVIVE | ITEM4_HEAL_HP,
    [7] = ITEM7_HEAL_HP_FULL,
};

static const u8 sItemEffect_FreshWater[8] = {
    [4] = ITEM4_HEAL_HP,
    [7] = 50, // Amount of HP to recover
};

static const u8 sItemEffect_SodaPop[8] = {
    [4] = ITEM4_HEAL_HP,
    [7] = 60, // Amount of HP to recover
};

static const u8 sItemEffect_Lemonade[8] = {
    [4] = ITEM4_HEAL_HP,
    [7] = 80, // Amount of HP to recover
};

static const u8 sItemEffect_MoomooMilk[8] = {
    [4] = ITEM4_HEAL_HP,
    [7] = 100, // Amount of HP to recover
};

static const u8 sItemEffect_EnergyPowder[11] = {
    [4] = ITEM4_HEAL_HP,
    [6] = ITEM6_FRIENDSHIP_ALL,
    [7] = 50,  // Amount of HP to recover
    [8] = -5,  // Friendship change, low
    [9] = -5,  // Friendship change, mid
    [10] = -10, // Friendship change, high
};

static const u8 sItemEffect_EnergyRoot[11] = {
    [4] = ITEM4_HEAL_HP,
    [6] = ITEM6_FRIENDSHIP_ALL,
    [7] = 200, // Amount of HP to recover
    [8] = -10, // Friendship change, low
    [9] = -10, // Friendship change, mid
    [10] = -15, // Friendship change, high
};

static const u8 sItemEffect_HealPowder[11] = {
    [3] = ITEM3_STATUS_ALL,
    [6] = ITEM6_FRIENDSHIP_ALL,
    [8] = -5,  // Friendship change, low
    [9] = -5,  // Friendship change, mid
    [10] = -10, // Friendship change, high
};

static const u8 sItemEffect_RevivalHerb[11] = {
    [4] = ITEM4_REVIVE | ITEM4_HEAL_HP,
    [6] = ITEM6_FRIENDSHIP_ALL,
    [7] = ITEM7_HEAL_HP_FULL,
    [8] = -15, // Friendship change, low
    [9] = -15, // Friendship change, mid
    [10] = -20, // Friendship change, high
};

static const u8 sItemEffect_Ether[8] = {
    [4] = ITEM4_HEAL_PP_ONE | ITEM4_HEAL_PP_ALL,
    [7] = 10, // Amount of PP to recover
};

static const u8 sItemEffect_MaxEther[8] = {
    [4] = ITEM4_HEAL_PP_ONE | ITEM4_HEAL_PP_ALL,
    [7] = ITEM7_HEAL_PP_FULL,
};

static const u8 sItemEffect_Elixir[8] = {
    [4] = ITEM4_HEAL_PP_ALL,
    [7] = 10, // Amount of PP to recover
};

static const u8 sItemEffect_MaxElixir[8] = {
    [4] = ITEM4_HEAL_PP_ALL,
    [7] = ITEM7_HEAL_PP_FULL,
};

static const u8 sItemEffect_LavaCookie[7] = {
    [3] = ITEM3_STATUS_ALL,
};

static const u8 sItemEffect_BlueFlute[7] = {
    [3] = ITEM3_SLEEP,
};

static const u8 sItemEffect_YellowFlute[7] = {
    [3] = ITEM3_CONFUSION,
};

static const u8 sItemEffect_RedFlute[7] = {
    [0] = ITEM0_INFATUATION,
};

static const u8 sItemEffect_BerryJuice[8] = {
    [4] = ITEM4_HEAL_HP,
    [7] = 20, // Amount of HP to recover
};

static const u8 sItemEffect_SacredAsh[8] = {
    [0] = ITEM0_SACRED_ASH,
    [4] = ITEM4_REVIVE | ITEM4_HEAL_HP,
    [7] = ITEM7_HEAL_HP_FULL,
};

#define VITAMIN_FRIENDSHIP_CHANGE(i)             \
    [(i) + 0] = 5, /* Friendship change, low */  \
    [(i) + 1] = 3, /* Friendship change, mid */  \
    [(i) + 2] = 2  /* Friendship change, high */

static const u8 sItemEffect_HPUp[11] = {
    [4] = ITEM4_EV_HP,
    [6] = ITEM6_FRIENDSHIP_ALL,
    [7] = ITEM7_ADD_EV,
    VITAMIN_FRIENDSHIP_CHANGE(8),
};

static const u8 sItemEffect_Protein[11] = {
    [4] = ITEM4_EV_ATK,
    [6] = ITEM6_FRIENDSHIP_ALL,
    [7] = ITEM7_ADD_EV,
    VITAMIN_FRIENDSHIP_CHANGE(8),
};

static const u8 sItemEffect_Iron[11] = {
    [5] = ITEM5_EV_DEF
    [6] = ITEM6_FRIENDSHIP_ALL,
    [7] = ITEM7_ADD_EV,
    VITAMIN_FRIENDSHIP_CHANGE(8),
};

static const u8 sItemEffect_Carbos[11] = {
    [5] = ITEM5_EV_SPEED
    [6] = ITEM6_FRIENDSHIP_ALL,
    [7] = ITEM7_ADD_EV,
    VITAMIN_FRIENDSHIP_CHANGE(8),
};

static const u8 sItemEffect_Calcium[11] = {
    [5] = ITEM5_EV_SPATK,
    [6] = ITEM6_FRIENDSHIP_ALL,
    [7] = ITEM7_ADD_EV,
    VITAMIN_FRIENDSHIP_CHANGE(8),
};

static const u8 sItemEffect_RareCandy[11] = {
    [3] = ITEM3_LEVEL_UP,
    [4] = ITEM4_REVIVE | ITEM4_HEAL_HP,
    [6] = ITEM6_FRIENDSHIP_ALL,
    [7] = ITEM7_HEAL_HP_LVL_UP,
    VITAMIN_FRIENDSHIP_CHANGE(8),
};

static const u8 sItemEffect_PPUp[10] = {
    [4] = ITEM4_PP_UP,
    [6] = ITEM6_FRIENDSHIP_ALL,
    VITAMIN_FRIENDSHIP_CHANGE(7),
};

static const u8 sItemEffect_Zinc[11] = {
    [5] = ITEM5_EV_SPDEF,
    [6] = ITEM6_FRIENDSHIP_ALL,
    [7] = ITEM7_ADD_EV,
    VITAMIN_FRIENDSHIP_CHANGE(8),
};

static const u8 sItemEffect_PPMax[10] = {
    [5] = ITEM5_PP_MAX,
    [6] = ITEM6_FRIENDSHIP_ALL,
    VITAMIN_FRIENDSHIP_CHANGE(7),
};

#define STAT_BOOST_FRIENDSHIP_CHANGE      \
    [7] = 1, /* Friendship change, low */ \
    [8] = 1  /* Friendship change, mid */

static const u8 sItemEffect_GuardSpec[9] = {
    [3] = ITEM3_GUARD_SPEC,
    [6] = ITEM6_FRIENDSHIP_LOW | ITEM6_FRIENDSHIP_MID,
    STAT_BOOST_FRIENDSHIP_CHANGE
};

static const u8 sItemEffect_DireHit[9] = {
    [0] = 2 << 4, // ITEM0_DIRE_HIT
    [6] = ITEM6_FRIENDSHIP_LOW | ITEM6_FRIENDSHIP_MID,
    STAT_BOOST_FRIENDSHIP_CHANGE
};

static const u8 sItemEffect_XAttack[9] = {
    [0] = 1, // ITEM0_X_ATTACK
    [6] = ITEM6_FRIENDSHIP_LOW | ITEM6_FRIENDSHIP_MID,
    STAT_BOOST_FRIENDSHIP_CHANGE
};

static const u8 sItemEffect_XDefend[9] = {
    [1] = 1 << 4, /// ITEM1_X_DEFEND
    [6] = ITEM6_FRIENDSHIP_LOW | ITEM6_FRIENDSHIP_MID,
    STAT_BOOST_FRIENDSHIP_CHANGE,
};

static const u8 sItemEffect_XSpeed[9] = {
    [1] = 1, // ITEM1_X_SPEED
    [6] = ITEM6_FRIENDSHIP_LOW | ITEM6_FRIENDSHIP_MID,
    STAT_BOOST_FRIENDSHIP_CHANGE,
};

static const u8 sItemEffect_XAccuracy[9] = {
    [2] = 1 << 4, // ITEM2_X_ACCURACY
    [6] = ITEM6_FRIENDSHIP_LOW | ITEM6_FRIENDSHIP_MID,
    STAT_BOOST_FRIENDSHIP_CHANGE,
};

static const u8 sItemEffect_XSpecial[9] = {
    [2] = 1, // ITEM2_X_SPATK
    [6] = ITEM6_FRIENDSHIP_LOW | ITEM6_FRIENDSHIP_MID,
    STAT_BOOST_FRIENDSHIP_CHANGE,
};

static const u8 sItemEffect_SunStone[6] = {
    [4] = ITEM4_EVO_STONE,
};

static const u8 sItemEffect_MoonStone[6] = {
    [4] = ITEM4_EVO_STONE,
};

static const u8 sItemEffect_FireStone[6] = {
    [4] = ITEM4_EVO_STONE,
};

static const u8 sItemEffect_ThunderStone[6] = {
    [4] = ITEM4_EVO_STONE,
};

static const u8 sItemEffect_WaterStone[6] = {
    [4] = ITEM4_EVO_STONE,
};

static const u8 sItemEffect_LeafStone[6] = {
    [4] = ITEM4_EVO_STONE,
};

static const u8 sItemEffect_CheriBerry[6] = {
    [3] = ITEM3_PARALYSIS,
};

static const u8 sItemEffect_ChestoBerry[6] = {
    [3] = ITEM3_SLEEP,
};

static const u8 sItemEffect_PechaBerry[6] = {
    [3] = ITEM3_POISON,
};

static const u8 sItemEffect_RawstBerry[6] = {
    [3] = ITEM3_BURN,
};

static const u8 sItemEffect_AspearBerry[6] = {
    [3] = ITEM3_FREEZE,
};

static const u8 sItemEffect_LeppaBerry[8] = {
    [4] = ITEM4_HEAL_PP_ONE | ITEM4_HEAL_PP_ALL,
    [7] = 10, // Amount of PP to recover
};

static const u8 sItemEffect_OranBerry[8] = {
    [4] = ITEM4_HEAL_HP,
    [7] = 10, // Amount of HP to recover
};

static const u8 sItemEffect_PersimBerry[6] = {
    [3] = ITEM3_CONFUSION,
};

static const u8 sItemEffect_LumBerry[6] = {
    [3] = ITEM3_STATUS_ALL,
};

static const u8 sItemEffect_SitrusBerry[8] = {
    [4] = ITEM4_HEAL_HP,
    [7] = 30, // Amount of HP to recover
};

/*
static const u8 sItemEffect_HPUp[11] = {
    [5] = ITEM5_FRIENDSHIP_ALL,
    [6] = ITEM6_IV_HP,
    [7] = ITEM7_ADD_IV,
    VITAMIN_FRIENDSHIP_CHANGE(8),
};*/

static const u8 sItemEffect_LiechiBerry[11] = {
    [5] = ITEM5_IV_ATK,
    [6] = ITEM6_FRIENDSHIP_ALL,
    [7] = ITEM7_ADD_IV,
    VITAMIN_FRIENDSHIP_CHANGE(8),
};

static const u8 sItemEffect_GanlonBerry[11] = {
    [5] = ITEM5_IV_DEF,
    [6] = ITEM6_FRIENDSHIP_ALL,
    [7] = ITEM7_ADD_IV,
    VITAMIN_FRIENDSHIP_CHANGE(8),
};
/*
static const u8 sItemEffect_Calcium[10] = {
    [5] = ITEM5_FRIENDSHIP_ALL,
    [6] = ITEM6_ADD_IV,
    [7] = ITEM7_IV_SPATK,
    VITAMIN_FRIENDSHIP_CHANGE(7),
};

static const u8 sItemEffect_Zinc[10] = {
    [5] = ITEM5_FRIENDSHIP_ALL,
    [6] = ITEM6_ADD_IV,
    [7] = ITEM7_IV_SPDEF,
    VITAMIN_FRIENDSHIP_CHANGE(7),
};

static const u8 sItemEffect_Carbos[10] = {
    [5] = ITEM5_FRIENDSHIP_ALL,
    [6] = ITEM6_ADD_IV,
    [7] = ITEM7_IV_SPEED,
    VITAMIN_FRIENDSHIP_CHANGE(7),
};*/

const u8 *const gItemEffectTable[] =
{
    [ITEM_POTION - ITEM_POTION]        = sItemEffect_Potion,
    [ITEM_ANTIDOTE - ITEM_POTION]      = sItemEffect_Antidote,
    [ITEM_BURN_HEAL - ITEM_POTION]     = sItemEffect_BurnHeal,
    [ITEM_ICE_HEAL - ITEM_POTION]      = sItemEffect_IceHeal,
    [ITEM_AWAKENING - ITEM_POTION]     = sItemEffect_Awakening,
    [ITEM_PARALYZE_HEAL - ITEM_POTION] = sItemEffect_ParalyzeHeal,
    [ITEM_FULL_RESTORE - ITEM_POTION]  = sItemEffect_FullRestore,
    [ITEM_MAX_POTION - ITEM_POTION]    = sItemEffect_MaxPotion,
    [ITEM_HYPER_POTION - ITEM_POTION]  = sItemEffect_HyperPotion,
    [ITEM_SUPER_POTION - ITEM_POTION]  = sItemEffect_SuperPotion,
    [ITEM_FULL_HEAL - ITEM_POTION]     = sItemEffect_FullHeal,
    [ITEM_REVIVE - ITEM_POTION]        = sItemEffect_Revive,
    [ITEM_MAX_REVIVE - ITEM_POTION]    = sItemEffect_MaxRevive,
    [ITEM_FRESH_WATER - ITEM_POTION]   = sItemEffect_FreshWater,
    [ITEM_SODA_POP - ITEM_POTION]      = sItemEffect_SodaPop,
    [ITEM_LEMONADE - ITEM_POTION]      = sItemEffect_Lemonade,
    [ITEM_MOOMOO_MILK - ITEM_POTION]   = sItemEffect_MoomooMilk,
    [ITEM_ENERGY_POWDER - ITEM_POTION] = sItemEffect_EnergyPowder,
    [ITEM_ENERGY_ROOT - ITEM_POTION]   = sItemEffect_EnergyRoot,
    [ITEM_HEAL_POWDER - ITEM_POTION]   = sItemEffect_HealPowder,
    [ITEM_REVIVAL_HERB - ITEM_POTION]  = sItemEffect_RevivalHerb,
    [ITEM_ETHER - ITEM_POTION]         = sItemEffect_Ether,
    [ITEM_MAX_ETHER - ITEM_POTION]     = sItemEffect_MaxEther,
    [ITEM_ELIXIR - ITEM_POTION]        = sItemEffect_Elixir,
    [ITEM_MAX_ELIXIR - ITEM_POTION]    = sItemEffect_MaxElixir,
    [ITEM_LAVA_COOKIE - ITEM_POTION]   = sItemEffect_LavaCookie,
    [ITEM_BLUE_FLUTE - ITEM_POTION]    = sItemEffect_BlueFlute,
    [ITEM_YELLOW_FLUTE - ITEM_POTION]  = sItemEffect_YellowFlute,
    [ITEM_RED_FLUTE - ITEM_POTION]     = sItemEffect_RedFlute,
    [ITEM_BERRY_JUICE - ITEM_POTION]   = sItemEffect_BerryJuice,
    [ITEM_SACRED_ASH - ITEM_POTION]    = sItemEffect_SacredAsh,
    [ITEM_HP_UP - ITEM_POTION]         = sItemEffect_HPUp,
    [ITEM_PROTEIN - ITEM_POTION]       = sItemEffect_Protein,
    [ITEM_IRON - ITEM_POTION]          = sItemEffect_Iron,
    [ITEM_CARBOS - ITEM_POTION]        = sItemEffect_Carbos,
    [ITEM_CALCIUM - ITEM_POTION]       = sItemEffect_Calcium,
    [ITEM_RARE_CANDY - ITEM_POTION]    = sItemEffect_RareCandy,
    [ITEM_PP_UP - ITEM_POTION]         = sItemEffect_PPUp,
    [ITEM_ZINC - ITEM_POTION]          = sItemEffect_Zinc,
    [ITEM_PP_MAX - ITEM_POTION]        = sItemEffect_PPMax,
    [ITEM_GUARD_SPEC - ITEM_POTION]    = sItemEffect_GuardSpec,
    [ITEM_DIRE_HIT - ITEM_POTION]      = sItemEffect_DireHit,
    [ITEM_X_ATTACK - ITEM_POTION]      = sItemEffect_XAttack,
    [ITEM_X_DEFEND - ITEM_POTION]      = sItemEffect_XDefend,
    [ITEM_X_SPEED - ITEM_POTION]       = sItemEffect_XSpeed,
    [ITEM_X_ACCURACY - ITEM_POTION]    = sItemEffect_XAccuracy,
    [ITEM_X_SPECIAL - ITEM_POTION]     = sItemEffect_XSpecial,
    [ITEM_SUN_STONE - ITEM_POTION]     = sItemEffect_SunStone,
    [ITEM_MOON_STONE - ITEM_POTION]    = sItemEffect_MoonStone,
    [ITEM_FIRE_STONE - ITEM_POTION]    = sItemEffect_FireStone,
    [ITEM_THUNDER_STONE - ITEM_POTION] = sItemEffect_ThunderStone,
    [ITEM_WATER_STONE - ITEM_POTION]   = sItemEffect_WaterStone,
    [ITEM_LEAF_STONE - ITEM_POTION]    = sItemEffect_LeafStone,
    [ITEM_CHERI_BERRY - ITEM_POTION]   = sItemEffect_CheriBerry,
    [ITEM_CHESTO_BERRY - ITEM_POTION]  = sItemEffect_ChestoBerry,
    [ITEM_PECHA_BERRY - ITEM_POTION]   = sItemEffect_PechaBerry,
    [ITEM_RAWST_BERRY - ITEM_POTION]   = sItemEffect_RawstBerry,
    [ITEM_ASPEAR_BERRY - ITEM_POTION]  = sItemEffect_AspearBerry,
    [ITEM_LEPPA_BERRY - ITEM_POTION]   = sItemEffect_LeppaBerry,
    [ITEM_ORAN_BERRY - ITEM_POTION]    = sItemEffect_OranBerry,
    [ITEM_PERSIM_BERRY - ITEM_POTION]  = sItemEffect_PersimBerry,
    [ITEM_LUM_BERRY - ITEM_POTION]     = sItemEffect_LumBerry,
    [ITEM_SITRUS_BERRY - ITEM_POTION]  = sItemEffect_SitrusBerry,
    [ITEM_LIECHI_BERRY - ITEM_POTION]  = sItemEffect_LiechiBerry,
    [ITEM_GANLON_BERRY - ITEM_POTION]  = sItemEffect_GanlonBerry,
    [LAST_BERRY_INDEX - ITEM_POTION]   = NULL,
};
