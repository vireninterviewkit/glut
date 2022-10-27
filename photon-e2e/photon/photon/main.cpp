//
//  main.cpp
//  photon
//
//  Created by Virendra Shakya on 10/26/22.
//

#include <iostream>
#include "photon_xface.hpp"

int main(int argc, const char * argv[]) {
  
  construct(argc, argv);
  //  std::vector<line_segment> segments = {};
  //  configure_space(segments);
  //  compute_path();
  show_scene();
  destruct();
  
  std::cout << "photon ended" << std::endl;
  return 0;
}
