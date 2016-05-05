/**
 * @file      CFStringComparators.hpp
 * @copyright Copyright 2016 Clay Freeman. All rights reserved
 * @license   GNU Lesser General Public License v3 (LGPL-3.0)
 *
 * Forward declaration of the `CFStringComparators` namespace and related items.
 */

#ifndef _CFSTRINGCOMPARATORS_H
#define _CFSTRINGCOMPARATORS_H

/**
 * @namespace CFStringComparators
 * `CFStringComparators` is a C++ comparator expansion pack that provides extra
 * `std::string` comparators for use with standard C++ data structures
 * (`std::map`, `std::set`, etc).
 */
namespace CFStringComparators {
  // Make forward declaration of members provided by this namespace
  namespace CaseInsensitive {}
}

#endif
