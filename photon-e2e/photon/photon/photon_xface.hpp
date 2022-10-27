//
//  photon_xface.hpp
//  photon
//
//  Created by Virendra Shakya on 10/26/22.
//

#ifndef photon_xface_hpp
#define photon_xface_hpp

#include <vector>
#include "cmn.hpp"

void construct(int argc,  char * argv[]);
void destruct();
int configure_space(const std::vector<line_segment> segments);
void compute_path();
int show_scene();

#endif /* photon_xface_hpp */
