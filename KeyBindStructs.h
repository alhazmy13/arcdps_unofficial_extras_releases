#pragma once

#pragma push_macro("DELETE")
#undef DELETE

namespace KeyBinds
{
	enum class KeyControl : int32_t
	{
		// Movement tab
		Movement_MoveForward = 0,
		Movement_MoveBackward = 1,
		Movement_StrafeLeft = 2,
		Movement_StrafeRight = 3,
		Movement_TurnLeft = 4,
		Movement_TurnRight = 5,
		Movement_Dodge = 6,
		Movement_Autorun = 7,
		Movement_Walk = 8,
		Movement_Jump = 9,
		Movement_SwimUp = 10,
		Movement_SwimDown = 11,
		Movement_AboutFace = 12,

		// Skills tab
		Skills_SwapWeapons = 20,
		Skills_WeaponSkill1 = 21,
		Skills_WeaponSkill2 = 22,
		Skills_WeaponSkill3 = 23,
		Skills_WeaponSkill4 = 24,
		Skills_WeaponSkill5 = 25,
		Skills_HealingSkill = 26,
		Skills_UtilitySkill1 = 27,
		Skills_UtilitySkill2 = 28,
		Skills_UtilitySkill3 = 29,
		Skills_EliteSkill = 30,
		Skills_ProfessionSkill1 = 32,
		Skills_ProfessionSkill2 = 33,
		Skills_ProfessionSkill3 = 34,
		Skills_ProfessionSkill4 = 35,
		Skills_ProfessionSkill5 = 36,
		Skills_ProfessionSkill6 = 37,
		Skills_ProfessionSkill7 = 38,
		Skills_SpecialAction = 165,

		// Targeting tab
		Targeting_AlertTarget = 39,
		Targeting_CallTarget = 40,
		Targeting_TakeTarget = 41,
		Targeting_SetPersonalTarget = 42,
		Targeting_TakePersonalTarget = 43,
		Targeting_NearestEnemy = 44,
		Targeting_NextEnemy = 45,
		Targeting_PreviousEnemy = 46,
		Targeting_NearestAlly = 47,
		Targeting_NextAlly = 48,
		Targeting_PreviousAlly = 49,
		Targeting_LockAutotarget = 50,
		Targeting_SnapGroundTarget = 51,
		Targeting_ToggleSnapGroundTarget = 52,
		Targeting_DisableAutotargeting = 53,
		Targeting_ToggleAutotargeting = 54,
		Targeting_AllyTargetingMode = 55,
		Targeting_ToggleAllyTargetingMode = 56,

		// UI Tab
		UI_BlackLionTradingDialog = 57,
		UI_ContactsDialog = 58,
		UI_GuildDialog = 59,
		UI_HeroDialog = 60,
		UI_InventoryDialog = 61,
		UI_PetDialog = 62,
		UI_LogOut = 63,
		UI_MailDialog = 64,
		UI_OptionsDialog = 65,
		UI_PartyDialog = 66,
		UI_PvPPanel = 67,
		UI_PvPBuild = 68,
		UI_Scoreboard = 69,
		UI_InformationDialog = 70,
		UI_Show_HideChat = 71,
		UI_ChatCommand = 72,
		UI_ChatMessage = 73,
		UI_ChatReply = 74,
		UI_ShowHideUI = 75,
		UI_ShowHideSquadBroadcastChat = 166,
		UI_SquadBroadcastChatCommand = 167,
		UI_SquadBroadcastMessage = 168,

		// Camera Tab
		Camera_FreeCamera = 14,
		Camera_ZoomIn = 15,
		Camera_ZoomOut = 16,
		Camera_LookBehind = 17,
		Camera_ToggleActionCamera = 18,
		Camera_DisableActionCamera = 19,
		Screenshot_Normal = 77,
		Screenshot_Stereoscopic = 78,

		// Map Tab
		Map_OpenClose = 101,
		Map_Recenter = 102,
		Map_FloorDown = 103,
		Map_FloorUp = 104,
		Map_ZoomIn = 105,
		Map_ZoomOut = 106,

		// Mounts Tab
		Mounts_MountDismount = 31,
		Mounts_MountAbility1 = 118,
		Mounts_MountAbility2 = 119,
		Mounts_Raptor = 120,
		Mounts_Springer = 121,
		Mounts_Skimmer = 122,
		Mounts_Jackal = 123,
		Mounts_Griffon = 124,
		Mounts_RollerBeetle = 125,
		Mounts_Warclaw = 126,
		Mounts_Skyscale = 127,

		// Spectators Tab
		Spectators_NearestFixedCamera = 81,
		Spectators_NearestPlayer = 82,
		Spectators_RedPlayer1 = 83,
		Spectators_RedPlayer2 = 84,
		Spectators_RedPlayer3 = 85,
		Spectators_RedPlayer4 = 86,
		Spectators_RedPlayer5 = 87,
		Spectators_BluePlayer1 = 88,
		Spectators_BluePlayer2 = 89,
		Spectators_BluePlayer3 = 90,
		Spectators_BluePlayer4 = 91,
		Spectators_BluePlayer5 = 92,
		Spectators_FreeCamera = 93,
		Spectators_FreeCameraBoost = 94,
		Spectators_FreeCameraForward = 95,
		Spectators_FreeCameraBackward = 96,
		Spectators_FreeCameraLeft = 97,
		Spectators_FreeCameraRight = 98,
		Spectators_FreeCameraUp = 99,
		Spectators_FreeCameraDown = 100,

		// Squad Tab
		Squad_Location_Arrow = 147,
		Squad_Location_Circle = 148,
		Squad_Location_Heart = 149,
		Squad_Location_Square = 150,
		Squad_Location_Star = 151,
		Squad_Location_Spiral = 152,
		Squad_Location_Triangle = 153,
		Squad_Location_X = 154,
		Squad_ClearAllLocationMarkers = 155,
		Squad_Object_Arrow = 156,
		Squad_Object_Circle = 157,
		Squad_Object_Heart = 158,
		Squad_Object_Square = 159,
		Squad_Object_Star = 160,
		Squad_Object_Spiral = 161,
		Squad_Object_Triangle = 162,
		Squad_Object_X = 163,
		Squad_ClearAllObjectMarkers = 164,

		// Miscellaneous Tab
		Miscellaneous_AoELoot = 107,
		Miscellaneous_Interact = 108,
		Miscellaneous_ShowEnemyNames = 109,
		Miscellaneous_ShowAllyNames = 110,
		Miscellaneous_StowDrawWeapon = 111,
		Miscellaneous_ToggleLanguage = 112,
		Miscellaneous_RangerPetCombatToggle = 113,
		Miscellaneous_ToggleFullScreen = 115,
		Miscellaneous_EquipUnequipNovelty = 189,
		Miscellaneous_ActivateChair = 190,
		Miscellaneous_ActivateMusicalInstrument = 191,
		Miscellaneous_ActivateHeldItem = 192,
		Miscellaneous_ActivateToy = 193,
		Miscellaneous_ActivateTonic = 194,

		// Templates Tab
		Templates_BuildTemplate1 = 196,
		Templates_BuildTemplate2 = 197,
		Templates_BuildTemplate3 = 198,
		Templates_BuildTemplate4 = 199,
		Templates_BuildTemplate5 = 200,
		Templates_BuildTemplate6 = 201,
		Templates_EquipmentTemplate1 = 206,
		Templates_EquipmentTemplate2 = 207,
		Templates_EquipmentTemplate3 = 208,
		Templates_EquipmentTemplate4 = 209,
		Templates_EquipmentTemplate5 = 210,
		Templates_EquipmentTemplate6 = 211
	};
	constexpr int32_t KeyBindsSize = 161;

	// Some of them are not usable (like F13-F35 or PRINT)
	// These are custom scan codes.
	// Names are based upon US keyboard layout.
	// Site to translate it to other languages: http://kbdlayout.info
	enum class KeyCode : int32_t
	{
		LEFT_ALT = 0,
		LEFT_CTRL = 1,
		LEFT_SHIFT = 2,
		QUOTE = 3,
		HASH = 4,
		CAPS_LOCK = 5,
		COLON = 6,
		MINUS = 7,
		EQUALS = 8,
		ESCAPE = 9,
		OPEN_BRACKET = 10,
		NUM_LOCK = 11,
		PERIOD = 12,
		CLOSE_BRACKET = 13,
		SEMICOLON = 14,
		SLASH = 15,
		PRINT = 16,
		TILDE = 17,
		BACKSPACE = 18,
		DELETE = 19,
		ENTER = 20,
		SPACE = 21,
		TAB = 22,
		END = 23,
		HOME = 24,
		INSERT = 25,
		NEXT = 26,
		PRIOR = 27,
		ARROW_DOWN = 28,
		ARROW_LEFT = 29,
		ARROW_RIGHT = 30,
		ARROW_UP = 31,
		F1 = 32,
		F2 = 33,
		F3 = 34,
		F4 = 35,
		F5 = 36,
		F6 = 37,
		F7 = 38,
		F8 = 39,
		F9 = 40,
		F10 = 41,
		F11 = 42,
		F12 = 43,
		_0 = 48,
		_1 = 49,
		_2 = 50,
		_3 = 51,
		_4 = 52,
		_5 = 53,
		_6 = 54,
		_7 = 55,
		_8 = 56,
		_9 = 57,
		A = 65,
		B = 66,
		C = 67,
		D = 68,
		E = 69,
		F = 70,
		G = 71,
		H = 72,
		I = 73,
		J = 74,
		K = 75,
		L = 76,
		M = 77,
		N = 78,
		O = 79,
		P = 80,
		Q = 81,
		R = 82,
		S = 83,
		T = 84,
		U = 85,
		V = 86,
		W = 87,
		X = 88,
		Y = 89,
		Z = 90,
		PLUS_NUM = 91,
		DECIMAL_NUM = 92,
		DIVIDE_NUM = 93,
		MULTIPLY_NUM = 94,
		_0_NUM = 95,
		_1_NUM = 96,
		_2_NUM = 97,
		_3_NUM = 98,
		_4_NUM = 99,
		_5_NUM = 100,
		_6_NUM = 101,
		_7_NUM = 102,
		_8_NUM = 103,
		_9_NUM = 104,
		ENTER_NUM = 105,
		MINUS_NUM = 106,
		IME_Key_1 = 107,
		IME_Key_2 = 108,
		RIGHT_ALT = 109,
		RIGHT_CTRL = 110,
		BACKSLASH = 111,
		F13 = 112,
		F14 = 113,
		F15 = 114,
		F16 = 115,
		F17 = 116,
		F18 = 117,
		F19 = 118,
		F20 = 119,
		F21 = 120,
		F22 = 121,
		F23 = 122,
		F24 = 123,
		F25 = 124,
		F26 = 125,
		F27 = 126,
		F28 = 127,
		F29 = 128,
		F30 = 129,
		F31 = 130,
		F32 = 131,
		F33 = 132,
		F34 = 133,
		F35 = 134,
		RIGHT_SHIFT = 135,
		EJECT = 136,
		EQUAL_NUM = 137,
		CLEAR_NUM = 138,
		LEFT_CMD = 139,
		FUNCTION = 140,
		RIGHT_CMD = 141
	};
	constexpr int32_t KeyCodesSize = 131;

	enum class MouseCode : int32_t
	{
		Mouse_1 = 0,
		Mouse_3 = 1,
		Mouse_2 = 2,
		Mouse_4 = 3,
		Mouse_5 = 4,
		Mouse_6 = 5,
		Mouse_7 = 6,
		Mouse_8 = 7,
		Mouse_9 = 8,
		Mouse_10 = 9,
		Mouse_11 = 10,
		Mouse_12 = 11,
		Mouse_13 = 12,
		Mouse_14 = 13,
		Mouse_15 = 14,
		Mouse_16 = 15,
		Mouse_17 = 16,
		Mouse_18 = 17,
		Mouse_19 = 18,
		Mouse_20 = 19
	};
	constexpr int32_t MouseCodesSize = 20;

	enum class DeviceType : int32_t
	{
		UNSET = 0,
		MOUSE = 1,
		KEYBOARD = 2
	};
	constexpr int32_t DeviceTypeSize = 3;

	enum Modifier_ : int32_t
	{
		Modifier_SHIFT = 1,
		Modifier_CTRL = 2,
		Modifier_ALT = 4
	};
	typedef int32_t Modifier; // -> enum Modifier_

	// A single KeyBind
	struct Key
	{
		DeviceType deviceType; /* 0|1|2 (0 = unset, 1 = MouseKey, 2 = KeyboardKey) */
		int32_t key; // depends on `deviceType`. MouseCode
		Modifier modifier; /* modifier flags (Bit 1 = Shift, Bit 2 = Strg, Bit 3 = Alt) */
	};

	struct KeyBind
	{
		Key left;
		Key right;
	};
}

#pragma pop_macro("DELETE")
