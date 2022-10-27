//
//  cmn.hpp
//  photon
//
//  Created by Virendra Shakya on 10/26/22.
//

#ifndef cmn_hpp
#define cmn_hpp

#include <iostream>

struct point2d {
  int x;
  int y;
};

struct line_segment {
  point2d initial;
  point2d terminal;
};

#define TRACE std::cout << __PRETTY_FUNCTION__ << std::endl;

#endif /* cmn_hpp */
