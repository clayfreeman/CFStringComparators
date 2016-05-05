/**
 * @file      Sort.hpp
 * @copyright Copyright 2016 Clay Freeman. All rights reserved
 * @license   GNU Lesser General Public License v3 (LGPL-3.0)
 *
 * Implementation reference for the `Sort` object.
 */

#ifndef _CFSTRINGCOMPARATORSCASEINSENSITIVESORT_H
#define _CFSTRINGCOMPARATORSCASEINSENSITIVESORT_H

#include <string>
#include "../CaseInsensitive.hpp"

namespace CFStringComparators {
  namespace CaseInsensitive {
    /**
     * @class Sort
     * Function object used to compare two `std::string` objects in order to
     * determine sort order.
     *
     * This object implements the function call operator to provide a callable
     * class interface for string comparison.
     *
     * @see `Sort::operator()()` for details regarding actual string comparison.
     */
    class Sort {
      public:
        bool operator()(const std::string& lhs, const std::string& rhs) const;
    };
  }
}

#endif
