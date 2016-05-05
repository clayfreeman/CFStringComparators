/**
 * @file      Equality.hpp
 * @copyright Copyright 2016 Clay Freeman. All rights reserved
 * @license   GNU Lesser General Public License v3 (LGPL-3.0)
 *
 * Implementation reference for the `Equality` object.
 */

#ifndef _CFSTRINGCOMPARATORSCASEINSENSITIVEEQUALITY_H
#define _CFSTRINGCOMPARATORSCASEINSENSITIVEEQUALITY_H

#include <string>
#include "../CaseInsensitive.hpp"

namespace CFStringComparators {
  namespace CaseInsensitive {
    /**
     * @class Equality
     * Function object used to compare two `std::string` objects in order to
     * determine equality of their contents.
     *
     * This object implements the function call operator to provide a callable
     * class interface for string comparison.
     *
     * @see `Sort::operator()()` for details regarding actual string comparison.
     */
    class Equality {
      public:
        bool operator()(const std::string& lhs, const std::string& rhs) const;
    };
  }
}

#endif
