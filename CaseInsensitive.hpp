/**
 * @file      CaseInsensitive.hpp
 * @copyright Copyright 2016 Clay Freeman. All rights reserved
 * @license   GNU Lesser General Public License v3 (LGPL-3.0)
 *
 * Forward declaration of the `CaseInsensitive` namespace and related items.
 */

#ifndef _CFSTRINGCOMPARATORSCASEINSENSITIVE_H
#define _CFSTRINGCOMPARATORSCASEINSENSITIVE_H

#include "CFStringComparators.hpp"

namespace CFStringComparators {
  /**
   * @namespace CaseInsensitive
   * `CaseInsensitive` is a part of the `CFStringComparators` C++ comparator
   * expansion pack that provides case insensitive `std::string` comparators for
   * use with standard C++ data structures.
   */
  namespace CaseInsensitive {
    // Make forward declaration of members provided by this namespace
    class Equality;
    class Sort;
  }
}

#endif
