// This is an open source non-commercial project. Dear PVS-Studio, please check it.
// PVS-Studio Static Code Analyzer for C, C++ and C#: http://www.viva64.com
// ******************************************************************
// *
// *  This file is part of the Cxbx project.
// *
// *  Cxbx and Cxbe are free software; you can redistribute them
// *  and/or modify them under the terms of the GNU General Public
// *  License as published by the Free Software Foundation; either
// *  version 2 of the license, or (at your option) any later version.
// *
// *  This program is distributed in the hope that it will be useful,
// *  but WITHOUT ANY WARRANTY; without even the implied warranty of
// *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// *  GNU General Public License for more details.
// *
// *  You should have recieved a copy of the GNU General Public License
// *  along with this program; see the file COPYING.
// *  If not, write to the Free Software Foundation, Inc.,
// *  59 Temple Place - Suite 330, Bostom, MA 02111-1307, USA.
// *
// *  (c) 2017 Patrick van Logchem <pvanlogchem@gmail.com>
// *
// *  All rights reserved
// *
// ******************************************************************
#pragma once

#include "PCIBus.h" // For PCIBus
#include "SMBus.h" // For SMBus
#include "MCPXDevice.h" // For MCPXDevice
#include "SMCDevice.h" // For SMCDevice
#include "EEPROMDevice.h" // For EEPROMDevice
#include "network/NVNetDevice.h" // For NVNetDevice
#include "ADM1032Device.h" // For ADM1032
#include "devices\video\nv2a.h" // For NV2ADevice
#include "Usb\USBDevice.h" // For USBDevice
#include "chihiro\MediaBoard.h"

#define SMBUS_ADDRESS_MCPX 0x10 // = Write; Read = 0x11
#define SMBUS_ADDRESS_TV_ENCODER 0x88 // = Write; Read = 0x89
#define SMBUS_ADDRESS_SYSTEM_MICRO_CONTROLLER 0x20 // = Write; Read = 0x21
#define SMBUS_ADDRESS_TV_ENCODER_ID_CONEXANT 0x8A // = Write; Read = 0x8B
#define SMBUS_ADDRESS_TEMPERATURE_MONITOR 0x98 // = Write; Read = 0x99
#define SMBUS_ADDRESS_EEPROM 0xA8 // = Write; Read = 0xA9
#define SMBUS_ADDRESS_TV_ENCODER_ID_FOCUS 0xD4 // = Write; Read = 0xD5
#define SMBUS_ADDRESS_TV_ENCODER_ID_XCALIBUR 0xE0 // = Write; Read = 0xE1

typedef enum {
	Revision1_0,
	Revision1_1,
	Revision1_2,
	Revision1_3,
	Revision1_4,
	Revision1_5,
	Revision1_6,
	Retail = 0x00,
	// We don't need include revison 1.0 to 1.6 here, use above revision range instead.
	DebugKit = 0x10, // TODO: Since there are 1.0/1.1/1.2 revisions. For now, let's go with 1.2 by default.
	DebugKit_r1_2 = DebugKit | Revision1_2,
	Chihiro = 0x20,
	Chihiro_Type1 = Chihiro | Revision1_1,
	Chihiro_Type3 = Chihiro | Revision1_2, // TODO: Need verify on Chihiro hw, it is currently base on (B11) Debug Kit list.
} HardwareModel;

#define GET_HW_REVISION(hardwareModel) (hardwareModel & 0x0F)
#define GET_HW_CONSOLE(hardwareModel) (hardwareModel & 0xF0)
#define IS_RETAIL(hardwareModel) (GET_HW_CONSOLE(hardwareModel) == Retail)
#define IS_DEVKIT(hardwareModel) (GET_HW_CONSOLE(hardwareModel) == DebugKit)
#define IS_CHIHIRO(hardwareModel) (GET_HW_CONSOLE(hardwareModel) == Chihiro)

typedef enum { // TODO : Move to it's own file
	// https://xboxdevwiki.net/Hardware_Revisions#Video_encoder
	Conexant,
	Focus,
	XCalibur
} TVEncoder;

extern PCIBus* g_PCIBus;
extern SMBus* g_SMBus;
extern MCPXDevice* g_MCPX;
extern SMCDevice* g_SMC;
extern EEPROMDevice* g_EEPROM;
extern NVNetDevice* g_NVNet;
extern NV2ADevice* g_NV2A;
extern USBDevice* g_USB0;
extern MediaBoard* g_MediaBoard;

extern void InitXboxHardware(HardwareModel hardwareModel);
