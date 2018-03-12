/*****************************************************************************
 *
 *  PROJECT:     Multi Theft Auto v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        mods/deathmatch/logic/packets/CUnoccupiedVehicleStartSyncPacket.h
 *  PURPOSE:     Unoccupied vehicle start synchronization packet class
 *
 *  Multi Theft Auto is available from http://www.multitheftauto.com/
 *
 *****************************************************************************/

#ifndef __CUNOCCUPIEDVEHICLESTARTSYNCPACKET_H
#define __CUNOCCUPIEDVEHICLESTARTSYNCPACKET_H

#include "CPacket.h"
class CVehicle;

class CUnoccupiedVehicleStartSyncPacket : public CPacket
{
public:
    CUnoccupiedVehicleStartSyncPacket(CVehicle* pVehicle) { m_pVehicle = pVehicle; };

    ePacketID     GetPacketID(void) const { return PACKET_ID_UNOCCUPIED_VEHICLE_STARTSYNC; };
    unsigned long GetFlags(void) const { return PACKET_HIGH_PRIORITY | PACKET_RELIABLE | PACKET_SEQUENCED; };

    bool Write(NetBitStreamInterface& BitStream) const;

private:
    CVehicle* m_pVehicle;
};

#endif
