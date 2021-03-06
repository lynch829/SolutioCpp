/******************************************************************************/
/*                                                                            */
/* Copyright 2016-2017 Steven Dolly                                           */
/*                                                                            */
/* Licensed under the Apache License, Version 2.0 (the "License");            */
/* you may not use this file except in compliance with the License.           */
/* You may obtain a copy of the License at:                                   */
/*                                                                            */
/*     http://www.apache.org/licenses/LICENSE-2.0                             */
/*                                                                            */
/* Unless required by applicable law or agreed to in writing, software        */
/* distributed under the License is distributed on an "AS IS" BASIS,          */
/* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.   */
/* See the License for the specific language governing permissions and        */
/* limitations under the License.                                             */
/*                                                                            */
/******************************************************************************/

////////////////////////////////////////////////////////////////////////////////
//                                                                            //
// Tasmip.hpp                                                                 //
// TASMIP Algorithm Function File                                             //
// Created September 30, 2016 (Steven Dolly)                                  //
//                                                                            //
// This function uses TASMIP to generate realistic x-ray spectra from a       //
// tungsten source, given a tube voltage (kVp) and filtration thickness of    //
// Aluminum, in mm (mmAl).                                                    //
//                                                                            //
// Publication information:                                                   //
// John M. Boone and J. Anthony Seibert, "An accurate method for              //
// computer-generating tungsten anode x-ray spectra from 30 to 140 kV",       //
// Med. Phys. 24(11), November 1997                                           //
//                                                                            //
////////////////////////////////////////////////////////////////////////////////

// Header guards
#ifndef TASMIP_HPP
#define TASMIP_HPP

// Standard C++ header files
#include <string>
#include <vector>

namespace solutio
{
  std::vector<double> Tasmip(int tube_potential, double mm_filtration,
      std::string filter_material, std::string folder);
}

// End header guard
#endif
