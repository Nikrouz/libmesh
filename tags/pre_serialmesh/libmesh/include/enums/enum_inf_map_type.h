// $Id: enum_inf_map_type.h,v 1.4 2005-06-21 21:53:58 benkirk Exp $

// The libMesh Finite Element Library.
// Copyright (C) 2002-2005  Benjamin S. Kirk, John W. Peterson
  
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation; either
// version 2.1 of the License, or (at your option) any later version.
  
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// Lesser General Public License for more details.
  
// You should have received a copy of the GNU Lesser General Public
// License along with this library; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA



#ifndef __enum_inf_map_type_h__
#define __enum_inf_map_type_h__

/**
 * The \p libMeshEnums namespace is the namespace all \p enum definitions
 * should be put into.
 */

// ------------------------------------------------------------
// enum Order definition
namespace libMeshEnums {

  /**
   * \enum libMeshEnums::InfMapType defines an \p enum for the
   * types of coordinate mappings available in infinite elements.
   */
  enum InfMapType {CARTESIAN=0,
		   SPHERICAL,
		   ELLIPSOIDAL,
		   INVALID_INF_MAP};

}

using namespace libMeshEnums;

#endif // #define __enum_inf_map_type_h__