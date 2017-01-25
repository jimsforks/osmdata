/***************************************************************************
 *  Project:    osmdata
 *  File:       trace_osm.h
 *  Language:   C++
 *
 *  osmdata is free software: you can redistribute it and/or modify it under
 *  the terms of the GNU General Public License as published by the Free
 *  Software Foundation, either version 3 of the License, or (at your option)
 *  any later version.
 *
 *  osmdata is distributed in the hope that it will be useful, but WITHOUT ANY
 *  WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 *  FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
 *  details.
 *
 *  You should have received a copy of the GNU General Public License along with
 *  osm-router.  If not, see <http://www.gnu.org/licenses/>.
 *
 *  Author:     Mark Padgham 
 *  E-Mail:     mark.padgham@email.com 
 *
 *  Description:    Functions to trace OSM ways and store in C++ dynamic arrays
 *                  (no RCpp here).
 *
 *  Limitations:
 *
 *  Dependencies:       none (rapidXML header included in osmdatar)
 *
 *  Compiler Options:   -std=c++11
 ***************************************************************************/

#pragma once

#include "common.h"

void trace_multipolygon (Relations::const_iterator itr_rel, const Ways &ways,
        const Nodes &nodes, float_arr2 &lon_vec, float_arr2 &lat_vec,
        string_arr2 &rowname_vec, std::vector <std::string> &ids);

void trace_multilinestring (Relations::const_iterator itr_rel, const std::string role,
        const Ways &ways, const Nodes &nodes, float_arr2 &lon_vec, 
        float_arr2 &lat_vec, string_arr2 &rowname_vec, std::vector <osmid_t> &ids);

osmid_t trace_way (const Ways &ways, const Nodes &nodes, osmid_t first_node,
        const osmid_t &wayi_id, std::vector <float> &lons, 
        std::vector <float> &lats, std::vector <std::string> &rownames);

