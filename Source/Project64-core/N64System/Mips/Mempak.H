/****************************************************************************
*                                                                           *
* Project64 - A Nintendo 64 emulator.                                      *
* http://www.pj64-emu.com/                                                  *
* Copyright (C) 2012 Project64. All rights reserved.                        *
*                                                                           *
* License:                                                                  *
* GNU/GPLv2 http://www.gnu.org/licenses/gpl-2.0.html                        *
*                                                                           *
****************************************************************************/
#pragma once

class Mempak
{
public:
    static void Close();
    static uint8_t CalculateCrc(uint8_t * DataToCrc);
    static void ReadFrom(int32_t Control, uint8_t * command);
    static void WriteTo(int32_t Control, uint8_t * command);
};
