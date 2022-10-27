//
//  driver.cpp
//  photon
//
//  Created by Virendra Shakya on 10/26/22.
//

#include <fstream>

#include "driver.hpp"
#include "photon_xface.hpp"
#include "cmn.hpp"
#include "voronoi_visual_utils.hpp"


driver::driver() {
  TRACE
}

driver::~driver() {
  TRACE
}

void driver::initialize(int argc, char * argv[], const std::string &file_path) {
  TRACE
  read_data(file_path);
  construct(argc, argv);
}


int driver::read_data(const std::string& file_path) {
  int sum = 0;
  int x;
  std::ifstream inFile;
  
  inFile.open(file_path);
  if (!inFile) {
    std::cout << "Unable to open file" << std::endl;
    return -1;
  }
  
  while (inFile >> x) {
    sum = sum + x;
  }
  
  inFile.close();
  std::cout << "Sum = " << sum << std::endl;
  
  return 0;
  
//  std::size_t num_points, num_segments;
//  int x1, y1, x2, y2;
//  in_stream >> num_points;
//  for (std::size_t i = 0; i < num_points; ++i) {
//    in_stream >> x1 >> y1;
//    point_type p(x1, y1);
//    update_brect(p);
//    point_data_.push_back(p);
//  }
//  in_stream >> num_segments;
//  for (std::size_t i = 0; i < num_segments; ++i) {
//    in_stream >> x1 >> y1 >> x2 >> y2;
//    point_type lp(x1, y1);
//    point_type hp(x2, y2);
//    update_brect(lp);
//    update_brect(hp);
//    segment_data_.push_back(segment_type(lp, hp));
//  }
//  in_stream.flush();
}

void driver::destruct() {
  TRACE
  destroy();
}

void driver::set_show_options(unsigned int flags) {
  TRACE
}

void driver::show() {
  TRACE
  show_scene();
}

