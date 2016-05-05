/**
 * @file      Equality.cpp
 * @copyright Copyright 2016 Clay Freeman. All rights reserved
 * @license   GNU Lesser General Public License v3 (LGPL-3.0)
 *
 * Implementation source for the `Equality` object.
 */

#include <string>
#include <strings.h>
#include "Equality.hpp"

namespace CFStringComparators {
  namespace CaseInsensitive {
    /**
     * Compares two strings in a case-insensitive manner to determine equality
     *
     * By making use of the `strncasecmp()` POSIX function, one can define a
     * custom comparator for strings that is case-insensitive and memory-safe
     *
     * This method for comparing strings is *probably not* Unicode compatible
     *
     * @see    `strncasecmp()` for more details on string comparison
     *
     * @return `true`  if both strings are equal,
     *         `false` otherwise
     */
    bool Equality::operator()(const std::string& lhs,
        const std::string& rhs) const {
      // Determine if both strings are equal
      int    lhl =  lhs.length(), rhl = rhs.length();
      return lhl == rhl && strncasecmp(lhs.c_str(), rhs.c_str(), lhl) == 0;
    }
  }
}
