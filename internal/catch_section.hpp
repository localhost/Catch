/*
 *  catch_section.hpp
 *  Catch
 *
 *  Created by Phil on 03/11/2010.
 *  Copyright 2010 Two Blue Cubes Ltd. All rights reserved.
 *
 *  Distributed under the Boost Software License, Version 1.0. (See accompanying
 *  file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
 *
 */

#ifndef TWOBLUECUBES_CATCH_SECTION_HPP_INCLUDED
#define TWOBLUECUBES_CATCH_SECTION_HPP_INCLUDED

#include <string>

namespace Catch
{
    class Section
    {
    public:
        Section( const std::string& name, const std::string& description )
        {
            // !TBD notify the runner
        }
        
        operator bool()
        {
            // !TBD get this from runner
            return true;
        }
    };
    
} // end namespace Catch

#define CATCH_SECTION( name, desc ) if( Catch::Section catch_internal_Section = Catch::Section( name, desc ) )

#endif // TWOBLUECUBES_CATCH_SECTION_HPP_INCLUDED