/**
 * @file      Sort.cpp
 * @copyright Copyright 2016 Clay Freeman. All rights reserved
 * @license   GNU Lesser General Public License v3 (LGPL-3.0)
 *
 * Implementation source for the `Sort` object.
 */

#include <string>
#include <strings.h>
#include "Sort.hpp"

namespace CFStringComparators {
  namespace CaseInsensitive {
    /**
     * Compares two strings in a case-insensitive manner to determine sort order
     *
     * By making use of the `strncasecmp()` POSIX function, one can define a
     * custom comparator for strings that is case-insensitive and memory-safe
     * (only measuring up to the smallest string's length)
     *
     * This method for comparing strings is *probably not* Unicode compatible
     *
     * @see    `strncasecmp()` for more details on string comparison
     *
     * @return `true`  if the left string sorts before the other,
     *         `false` otherwise
     */
    bool Sort::operator()(const std::string& lhs,
        const std::string& rhs) const {
      // Determine the maximum length between the two strings
      int       lhl = lhs.length(), rhl = rhs.length();
      int maxlength = (lhl < rhl ? lhl : rhl);
      // Perform a case-insensitive, memory-safe comparison of the two strings
      int result    = strncasecmp(lhs.c_str(), rhs.c_str(), maxlength);
      // Determine if the left string sorts before the right string
      return result < 0;
    }
  }
}
