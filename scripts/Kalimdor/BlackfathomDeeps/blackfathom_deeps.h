/*
 * Copyright (C) 2008-2015 TrinityCore <http://www.trinitycore.org/>
 * Copyright (C) 2006-2009 ScriptDev2 <https://scriptdev2.svn.sourceforge.net/>
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef BFD_H_
#define BFD_H_

#define DataHeader "BFD"

enum Data
{
	DATA_ZIBUN = 1,
	DATA_KRAKEN,
	DATA_DIONIS,
	DATA_ASGUR,
};

enum GameObjectIds
{
	GO_ZIBUN_DOOR = 146085,
	GO_KRAKEN_DOOR,
	GO_DIONIS_DOOR = 21117,
};

#endif // BFD_H_