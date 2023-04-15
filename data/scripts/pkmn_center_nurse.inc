.equ SECOND_NURSE_CHANGE_NATURE_PRICE, 1000
.equ SECOND_NURSE_RESETEV_PRICE, 500

EventScript_PkmnCenterNurse::
	goto_if_questlog EventScript_ReleaseEnd
	message Text_WelcomeWantToHealPkmn
	waitmessage
	multichoice 19, 8, MULTICHOICE_YES_NO, FALSE | (TRUE << 1)
	switch VAR_RESULT
	case 0, EventScript_PkmnCenterNurse_HealPkmn
	case 1 EventScript_PkmnCenterNurse_Goodbye
	case SCR_MENU_CANCEL, EventScript_PkmnCenterNurse_Goodbye
	end

EventScript_PkmnCenterNurse_HealPkmn::
	incrementgamestat GAME_STAT_USED_POKECENTER
	message Text_TakeYourPkmnForFewSeconds
	waitmessage
	call EventScript_PkmnCenterNurse_TakeAndHealPkmn
	special SetUsedPkmnCenterQuestLogEvent
	goto EventScript_PkmnCenterNurse_CheckTrainerTowerAndUnionRoom
	end

EventScript_PkmnCenterNurse_TakeAndHealPkmn::
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	dofieldeffect FLDEFF_POKECENTER_HEAL
	waitfieldeffect FLDEFF_POKECENTER_HEAL
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	special HealPlayerParty
	return

EventScript_PkmnCenterNurse_CheckTrainerTowerAndUnionRoom::
	specialvar VAR_RESULT, IsPlayerNotInTrainerTowerLobby
	goto_if_eq VAR_RESULT, FALSE, EventScript_PkmnCenterNurse_ReturnPkmn
	specialvar VAR_RESULT, BufferUnionRoomPlayerName
	copyvar VAR_0x8008, VAR_RESULT
	goto_if_eq VAR_0x8008, 0, EventScript_PkmnCenterNurse_ReturnPkmn
	goto_if_eq VAR_0x8008, 1, EventScript_PkmnCenterNurse_PlayerWaitingInUionRoom
	end

EventScript_PkmnCenterNurse_ReturnPkmn::
	message Text_RestoredPkmnToFullHealth
	waitmessage
	applymovement VAR_LAST_TALKED, Movement_Bow
	waitmovement 0
	msgbox Text_WeHopeToSeeYouAgain
	return

EventScript_PkmnCenterNurse_PlayerWaitingInUionRoom::
	goto_if_set FLAG_SYS_INFORMED_OF_LOCAL_WIRELESS_PLAYER, EventScript_PkmnCenterNurse_ReturnPkmn
	msgbox Text_RestoredPkmnToFullHealth
	setflag FLAG_SYS_INFORMED_OF_LOCAL_WIRELESS_PLAYER
	message Text_PlayerIsPlayingRightNowGoForIt
	waitmessage
	applymovement VAR_LAST_TALKED, Movement_Bow
	waitmovement 0
	msgbox Text_WeHopeToSeeYouAgain
	return

EventScript_PkmnCenterNurse_Goodbye::
	msgbox Text_WeHopeToSeeYouAgain
	return

Movement_Bow::
	nurse_joy_bow
	delay_4
	step_end

EventScript_PkmnCenterNurse_SecondNurse::
	message Text_SecondNurse
	waitmessage
	multichoice 0, 0, MULTICHOICE_SECOND_NURSE, FALSE
	switch VAR_RESULT
	case 0, EventScript_PkmnCenterNurse_SecondNurse_ChangeNature
	case 1, EventScript_PkmnCenterNurse_SecondNurse_ResetEVs
	case 2, EventScript_PkmnCenterNurse_SecondNurse_Cancel
	releaseall
	end

EventScript_PkmnCenterNurse_SecondNurse_CheckMoney::
	goto EventScript_PkmnCenterNurse_SecondNurse
	end

EventScript_PkmnCenterNurse_SecondNurse_NotEnoughMoney::
	msgbox Text_SecondNurse_NotEnoughMoney, MSGBOX_NPC
	end

EventScript_PkmnCenterNurse_SecondNurse_ChangeNature::
	checkmoney SECOND_NURSE_CHANGE_NATURE_PRICE
	goto_if_eq VAR_RESULT, FALSE, EventScript_PkmnCenterNurse_SecondNurse_NotEnoughMoney
	msgbox Text_SecondNurse_SelectMon, MSGBOX_NPC
	special ChoosePartyMon
	waitstate
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge EventScript_PkmnCenterNurse_SecondNurse_Cancel
	specialvar VAR_RESULT, GetPartyMonSpecies
	compare VAR_RESULT, SPECIES_EGG
	goto_if_eq EventScript_PkmnCenterNurse_SecondNurse_NoEgg
	goto EventScript_PkmnCenterNurse_SecondNurse_ChooseNature
	end

EventScript_PkmnCenterNurse_SecondNurse_ResetEVs::
	checkmoney SECOND_NURSE_RESETEV_PRICE
	goto_if_eq VAR_RESULT, FALSE, EventScript_PkmnCenterNurse_SecondNurse_NotEnoughMoney
	msgbox Text_SecondNurse_SelectMon, MSGBOX_NPC
	special ChoosePartyMon
	waitstate
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge EventScript_PkmnCenterNurse_SecondNurse_Cancel
	specialvar VAR_RESULT, GetPartyMonSpecies
	compare VAR_RESULT, SPECIES_EGG
	goto_if_eq EventScript_PkmnCenterNurse_SecondNurse_NoEgg
	goto EventScript_PkmnCenterNurse_SecondNurse_ChooseEVstat
	end

EventScript_PkmnCenterNurse_SecondNurse_Cancel::
	msgbox Text_SecondNurse_ComebackAnytime, MSGBOX_NPC
	end

EventScript_PkmnCenterNurse_SecondNurse_NoEgg::
	msgbox Text_SecondNurse_NoEgg, MSGBOX_NPC
	end

EventScript_PkmnCenterNurse_SecondNurse_ChooseNature::
	message Text_SecondNurse_ChooseNature
	waitmessage
	multichoice 0, 0, MULTICHOICE_SECOND_NURSE_NATURES, TRUE
	goto EventScript_PkmnCenterNurse_SecondNurse_DoNatureChange
	end

EventScript_PkmnCenterNurse_SecondNurse_DoNatureChange::
	special ChangeNature
	removemoney SECOND_NURSE_CHANGE_NATURE_PRICE
	msgbox Text_SecondNurse_NatureChanged, MSGBOX_NPC
	end

EventScript_PkmnCenterNurse_SecondNurse_DoReset::
	specialvar VAR_RESULT, ResetMonEVs
	goto_if_eq VAR_RESULT, TRUE, EventScript_PkmnCenterNurse_SecondNurse_FinishReset
	msgbox Text_SecondNurse_NothingToReset, MSGBOX_NPC 
	end

EventScript_PkmnCenterNurse_SecondNurse_FinishReset::
	removemoney SECOND_NURSE_RESETEV_PRICE
	msgbox Text_SecondNurse_ResetEVs, MSGBOX_NPC
	end

EventScript_PkmnCenterNurse_SecondNurse_ChooseEVstat::
	message Text_SecondNurse_ChooseStat
	waitmessage
	multichoice 0, 0, MULTICHOICE_SECOND_NURSE_STATS, TRUE
	goto_if_eq VAR_RESULT, 6, EventScript_PkmnCenterNurse_SecondNurse_Cancel
	goto EventScript_PkmnCenterNurse_SecondNurse_DoReset
	end
