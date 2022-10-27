//
//  win.hpp
//  photon
//
//  Created by Virendra Shakya on 10/26/22.
//

#ifndef win_hpp
#define win_hpp

class win {
public:
  virtual ~win() = 0;
  virtual void construct(int argc,  char * argv[]) = 0;
  virtual void show_scene(unsigned int flags) = 0;
};

#endif /* win_hpp */
