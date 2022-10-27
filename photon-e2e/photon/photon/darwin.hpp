//
//  darwin.hpp
//  photon
//
//  Created by Virendra Shakya on 10/26/22.
//

#ifndef darwin_hpp
#define darwin_hpp

#include "win.hpp"

class darwin : public win {
public:
  virtual ~darwin();
  virtual void construct(int argc,  char * argv[]);
  virtual void show_scene(unsigned int flags);
};

#endif /* darwin_hpp */
