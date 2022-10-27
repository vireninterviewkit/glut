//
//  photon_xface.cpp
//  photon
//
//  Created by Virendra Shakya on 10/26/22.
//

#include <iostream>
#include "photon_xface.hpp"
#include "photon.hpp"

photon g_photon_;

void construct(int argc, const char * argv[]) {
  std::cout << __PRETTY_FUNCTION__ << std::endl;
  g_photon_.construct(argc, argv);
}

void destruct() {
  std::cout << __PRETTY_FUNCTION__ << std::endl;
  g_photon_.reset();
}

int configure_space(const std::vector<line_segment> segments) {
  std::cout << __PRETTY_FUNCTION__ << std::endl;
  g_photon_.configure_space(segments);
  return 0;
}

void compute_path() {
  std::cout << __PRETTY_FUNCTION__ << std::endl;
}

int show_scene() {
  std::cout << __PRETTY_FUNCTION__ << std::endl;
  g_photon_.show_scene(SHOW_SITES | SHOW_VORONOI_VERTICES | SHOW_VORONOI_EDGES);
  return 0;
}
