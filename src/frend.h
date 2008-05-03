/*
	This file is part of Warzone 2100.
	Copyright (C) 1999-2004  Eidos Interactive
	Copyright (C) 2005-2007  Warzone Resurrection Project

	Warzone 2100 is free software; you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation; either version 2 of the License, or
	(at your option) any later version.

	Warzone 2100 is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with Warzone 2100; if not, write to the Free Software
	Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
*/
/** @file
 *  Image ID definitions
 */

#ifndef __INCLUDED_SRC_FREND_H__
#define __INCLUDED_SRC_FREND_H__

enum {
	IMAGE_FE_LOGO,
	IMAGE_TFONT_33,
	IMAGE_TFONT_34,
	IMAGE_TFONT_35,
	IMAGE_TFONT_36,
	IMAGE_TFONT_37,
	IMAGE_TFONT_38,
	IMAGE_TFONT_39,
	IMAGE_TFONT_40,
	IMAGE_TFONT_41,
	IMAGE_TFONT_42,
	IMAGE_TFONT_43,
	IMAGE_TFONT_44,
	IMAGE_TFONT_46,
	IMAGE_TFONT_47,
	IMAGE_TFONT_48,
	IMAGE_TFONT_49,
	IMAGE_TFONT_50,
	IMAGE_TFONT_51,
	IMAGE_TFONT_52,
	IMAGE_TFONT_53,
	IMAGE_TFONT_54,
	IMAGE_TFONT_55,
	IMAGE_TFONT_56,
	IMAGE_TFONT_57,
	IMAGE_TFONT_58,
	IMAGE_TFONT_59,
	IMAGE_TFONT_60,
	IMAGE_TFONT_61,
	IMAGE_TFONT_62,
	IMAGE_TFONT_64,
	IMAGE_TFONT_65,
	IMAGE_TFONT_66,
	IMAGE_TFONT_67,
	IMAGE_TFONT_68,
	IMAGE_TFONT_69,
	IMAGE_TFONT_70,
	IMAGE_TFONT_71,
	IMAGE_TFONT_72,
	IMAGE_TFONT_73,
	IMAGE_TFONT_74,
	IMAGE_TFONT_75,
	IMAGE_TFONT_76,
	IMAGE_TFONT_77,
	IMAGE_TFONT_78,
	IMAGE_TFONT_79,
	IMAGE_TFONT_80,
	IMAGE_TFONT_81,
	IMAGE_TFONT_82,
	IMAGE_TFONT_83,
	IMAGE_TFONT_84,
	IMAGE_TFONT_85,
	IMAGE_TFONT_86,
	IMAGE_TFONT_87,
	IMAGE_TFONT_88,
	IMAGE_TFONT_89,
	IMAGE_TFONT_90,
	IMAGE_TFONT_91,
	IMAGE_TFONT_92,
	IMAGE_TFONT_93,
	IMAGE_TFONT_94,
	IMAGE_TFONT_95,
	IMAGE_TFONT_96,
	IMAGE_TFONT_97,
	IMAGE_TFONT_98,
	IMAGE_TFONT_99,
	IMAGE_TFONT_100,
	IMAGE_TFONT_101,
	IMAGE_TFONT_102,
	IMAGE_TFONT_103,
	IMAGE_TFONT_104,
	IMAGE_TFONT_105,
	IMAGE_TFONT_106,
	IMAGE_TFONT_107,
	IMAGE_TFONT_108,
	IMAGE_TFONT_109,
	IMAGE_TFONT_110,
	IMAGE_TFONT_111,
	IMAGE_TFONT_112,
	IMAGE_TFONT_113,
	IMAGE_TFONT_114,
	IMAGE_TFONT_115,
	IMAGE_TFONT_116,
	IMAGE_TFONT_117,
	IMAGE_TFONT_118,
	IMAGE_TFONT_119,
	IMAGE_TFONT_120,
	IMAGE_TFONT_121,
	IMAGE_TFONT_122,
	IMAGE_TFONT_123,
	IMAGE_TFONT_124,
	IMAGE_TFONT_125,
	IMAGE_TFONT_126,
	IMAGE_COM1,
	IMAGE_COM2,
	IMAGE_COM3,
	IMAGE_COM4,
	IMAGE_COM1_HI,
	IMAGE_COM2_HI,
	IMAGE_14400_HI,
	IMAGE_19200_HI,
	IMAGE_56000_HI,
	IMAGE_115200_HI,
	IMAGE_ARENA_HI,
	IMAGE_CAMPAIGN_HI,
	IMAGE_14400,
	IMAGE_19200,
	IMAGE_56000,
	IMAGE_115200,
	IMAGE_ARENA,
	IMAGE_CAMPAIGN,
	IMAGE_REFRESH,
	IMAGE_PLAYER0,
	IMAGE_PLAYER1,
	IMAGE_PLAYER2,
	IMAGE_PLAYER3,
	IMAGE_PLAYER4,
	IMAGE_PLAYER5,
	IMAGE_PLAYER6,
	IMAGE_PLAYER7,
	IMAGE_HOST,
	IMAGE_NO,
	IMAGE_OK,
	IMAGE_QUESTION,
	IMAGE_POWMED,
	IMAGE_POWHI,
	IMAGE_POWLO_HI,
	IMAGE_POWMED_HI,
	IMAGE_POWHI_HI,
	IMAGE_NOALLI,
	IMAGE_OFFALLI,
	IMAGE_ALLI,
	IMAGE_NOALLI_HI,
	IMAGE_OFFALLI_HI,
	IMAGE_ALLI_HI,
	IMAGE_COM3_HI,
	IMAGE_COM4_HI,
	IMAGE_HI34,
	IMAGE_HI31,
	IMAGE_HI23,
	IMAGE_HI39,
	IMAGE_HI41,
	IMAGE_HI64,
	IMAGE_ARENA_OVER,
	IMAGE_CAMPAIGN_OVER,
	IMAGE_MEDAL_GOLD,
	IMAGE_MEDAL_SILVER,
	IMAGE_MEDAL_BRONZE,
	IMAGE_POWLO,
	IMAGE_MULTIRANK1,
	IMAGE_RETURN,
	IMAGE_EDIT_PLAYER,
	IMAGE_EDIT_FORCE,
	IMAGE_EDIT_MAP,
	IMAGE_EDIT_GAME,
	IMAGE_TECHLO,
	IMAGE_TECHMED,
	IMAGE_TECHHI,
	IMAGE_TECHLO_HI,
	IMAGE_TECHMED_HI,
	IMAGE_TECHHI_HI,
	IMAGE_NOBASE,
	IMAGE_SBASE,
	IMAGE_LBASE,
	IMAGE_NOBASE_HI,
	IMAGE_SBASE_HI,
	IMAGE_LBASE_HI,
	IMAGE_NOLIMIT,
	IMAGE_TIMELIMIT,
	IMAGE_FRAGLIMIT,
	IMAGE_NOLIMIT_HI,
	IMAGE_TIMELIMIT_HI,
	IMAGE_FRAGLIMIT_HI,
	IMAGE_RETURN_HI,
	IMAGE_SLIM,
	IMAGE_SLIM_HI,
	IMAGE_LOADFORCE,
	IMAGE_SAVEFORCE,
	IMAGE_CLEARFORCE,
	IMAGE_DEFAULTFORCE,
	IMAGE_HI56,
	IMAGE_COMPUTER_N_HI,
	IMAGE_COMPUTER_N,
	IMAGE_COMPUTER_Y,
	IMAGE_COMPUTER_Y_HI,
	IMAGE_LAMP_RED,
	IMAGE_LAMP_AMBER,
	IMAGE_LAMP_GREEN,
	IMAGE_SKIRMISH_OVER,
	IMAGE_TEAM_OVER,
	IMAGE_SKIRMISH,
	IMAGE_TEAM,
	IMAGE_SKIRMISH_HI,
	IMAGE_TEAM_HI,
	IMAGE_PLAYER_PC,
	IMAGE_MULTIRANK2,
	IMAGE_MEDAL_DUMMY,
	IMAGE_PLAYERX,
	IMAGE_FOG_OFF,
	IMAGE_FOG_ON,
	IMAGE_FOG_OFF_HI,
	IMAGE_FOG_ON_HI,
	IMAGE_WEE_GUY,
	IMAGE_TFONT_189,
	IMAGE_TFONT_225,
	IMAGE_TFONT_224,
	IMAGE_TFONT_188,
	IMAGE_TFONT_226,
	IMAGE_TFONT_227,
	IMAGE_TFONT_228,
	IMAGE_TFONT_229,
	IMAGE_TFONT_230,
	IMAGE_TFONT_199,
	IMAGE_TFONT_232,
	IMAGE_TFONT_233,
	IMAGE_TFONT_234,
	IMAGE_TFONT_235,
	IMAGE_TFONT_236,
	IMAGE_TFONT_237,
	IMAGE_TFONT_238,
	IMAGE_TFONT_239,
	IMAGE_TFONT_241,
	IMAGE_TFONT_209,
	IMAGE_TFONT_242,
	IMAGE_TFONT_243,
	IMAGE_TFONT_244,
	IMAGE_TFONT_246,
	IMAGE_TFONT_248,
	IMAGE_TFONT_249,
	IMAGE_TFONT_250,
	IMAGE_TFONT_251,
	IMAGE_TFONT_252,
	IMAGE_TFONT_253,
	IMAGE_TFONT_128,
	IMAGE_TFONT_198,
	IMAGE_TFONT_196,
	IMAGE_TFONT_197,
	IMAGE_TFONT_201,
	IMAGE_TFONT_214,
	IMAGE_TFONT_220,
	IMAGE_TFONT_216,
	IMAGE_TFONT_215,
	IMAGE_TFONT_131,
	IMAGE_TFONT_176,
	IMAGE_TFONT_191,
	IMAGE_TFONT_161,
	IMAGE_TFONT_174,
	IMAGE_TFONT_172,
	IMAGE_TFONT_171,
	IMAGE_TFONT_187,
	IMAGE_TFONT_193,
	IMAGE_TFONT_194,
	IMAGE_TFONT_192,
	IMAGE_TFONT_195,
	IMAGE_TFONT_240,
	IMAGE_TFONT_208,
	IMAGE_TFONT_203,
	IMAGE_TFONT_200,
	IMAGE_TFONT_212,
	IMAGE_TFONT_210,
	IMAGE_TFONT_213,
	IMAGE_TFONT_218,
	IMAGE_TFONT_219,
	IMAGE_TFONT_217,
	IMAGE_TFONT_221,
	IMAGE_TFONT_245,
	IMAGE_PENCIL,
	IMAGE_NOPENCIL,
	IMAGE_KEYMAP_DEFAULT,
	IMAGE_MULTIRANK3,
	IMAGE_TFONT_223,
	IMAGE_TFONT_163,
	IMAGE_TFONT_170,
	IMAGE_TFONT_202,
	IMAGE_TFONT_211,
	IMAGE_TFONT_206,
	IMAGE_TFONT_207,
	IMAGE_TFONT_204,
	IMAGE_TFONT_205,
	IMAGE_TFONT_63,
	IMAGE_TFONT_45,
	IMAGE_NOJOIN,
	IMAGE_ALLI_TEAMS_HI,
	IMAGE_ALLI_TEAMS,
	IMAGE_TEAM0,
	IMAGE_TEAM1,
	IMAGE_TEAM2,
	IMAGE_TEAM3,
	IMAGE_TEAM4,
	IMAGE_TEAM5,
	IMAGE_TEAM6,
	IMAGE_TEAM7,
	IMAGE_HOST_HI,
	IMAGE_KEYMAP_DEFAULT_HI,
	IMAGE_EDIT_MAP_HI,
	IMAGE_EDIT_GAME_HI,
	IMAGE_EDIT_PLAYER_HI,
	IMAGE_PLAYER0_HI,
	IMAGE_PLAYER1_HI,
	IMAGE_PLAYER2_HI,
	IMAGE_PLAYER3_HI,
	IMAGE_PLAYER4_HI,
	IMAGE_PLAYER5_HI,
	IMAGE_PLAYER6_HI,
	IMAGE_PLAYER7_HI,
	IMAGE_TEAM0_HI,
	IMAGE_TEAM1_HI,
	IMAGE_TEAM2_HI,
	IMAGE_TEAM3_HI,
	IMAGE_TEAM4_HI,
	IMAGE_TEAM5_HI,
	IMAGE_TEAM6_HI,
	IMAGE_TEAM7_HI,
	IMAGE_CHECK_OFF,		// checkbox unchecked
	IMAGE_CHECK_ON,			// checkbox checked
	IMAGE_CHECK_OFF_HI,		// checkbox unchecked highlighted
	IMAGE_CHECK_ON_HI,			// checkbox checked highlighted
};

#endif // __INCLUDED_SRC_FREND_H__
