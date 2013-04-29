/*
    libember -- C++ 03 implementation of the Ember+ Protocol
    Copyright (C) 2012  L-S-B Broadcast Technologies GmbH

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Lesser General Public
    License as published by the Free Software Foundation; either
    version 2.1 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public
    License along with this library; if not, write to the Free Software
    Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
*/

#ifndef __LIBEMBER_GLOW_CONNECTIONOPERATION_HPP
#define __LIBEMBER_GLOW_CONNECTIONOPERATION_HPP

namespace libember { namespace glow
{
    /**
     * A scoped enumeration type containing the symbolic names
     * for the matrix types supported by Ember+.
     */
    class ConnectionOperation
    {
        public:
            enum _Domain
            {
                Absolute = 0,
                Connect = 1,
                Disconnect = 2
            };

            typedef int value_type;

        public:
            /**
             * Initializes a ConnectionOperation.
             * @param type The connection operation to initialize this instance with.
             */
            ConnectionOperation(_Domain type)
                : m_value(type)
            {}

            /**
             * Returns the connection operation.
             * @return The connection operation.
             */
            value_type value() const
            {
                return m_value;
            }

        private:
            value_type m_value;
    };
}
}

#endif  // __LIBEMBER_GLOW_CONNECTIONOPERATION_HPP
