/* $Id$ */

/*
 * This file is part of OpenTTD.
 * OpenTTD is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * OpenTTD is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with OpenTTD. If not, see <http://www.gnu.org/licenses/>.
 */

/** @file ai_airportviewlist.cpp Implementation of AIAirportViewList. */

#include "../../stdafx.h"
#include "ai_airportviewlist.hpp"
#include "ai_airporttype.hpp"
//#include "../../airport.h"
#include "../../newgrf_airport.h"

AIAirportViewList::AIAirportViewList(AirportType type)
{
	if (!AIAirportType::IsAirportTypeInformationAvailable(type)) return;

	const AirportSpec *as = ::AirportSpec::Get(type);

	for (byte j = 0; j < as->num_table; j++)
	{
		this->AddItem(j);
	}
}
