/******************************************************************************************
* Copyright 2015, 2016 Ideetron B.V.
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU Lesser General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU Lesser General Public License for more details.
*
* You should have received a copy of the GNU Lesser General Public License
* along with this program.  If not, see <http://www.gnu.org/licenses/>.
******************************************************************************************/
/******************************************************************************************
* File:        LoRaWAN_V31.h
* Author:      Gerben den Hartog
* Compagny:    Ideetron B.V.
* Website:     http://www.ideetron.nl/LoRa
* E-mail:      info@ideetron.nl
******************************************************************************************/

/****************************************************************************************
*
* Created on: 			  04-02-2016
* Supported Hardware:	ID150119-02 Nexus board with RFM95
*
* History:
*
* Firmware version: 1.0
* First version for LoRaWAN
*
* Firmware version: 2.0
* Ported to Arduino using own AES encryption
*
* Firmware version 3.0
* Added receiving in receive slot 2
*
* Firmware version 3.1
* Removed a bug from the Waitloop file
****************************************************************************************/

#ifndef LORAWAN_V31_H
#define LORAWAN_V31_H

/*
*****************************************************************************************
* DEFINES
*****************************************************************************************
*/

#define DIO0    4
#define DIO1    5
#define DIO5    6
#define DIO2    7
#define CS      8
#define SF      9   // Needs to be changed later to an variable which can be changed on the fly

#endif
