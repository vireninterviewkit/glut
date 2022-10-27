//
//  photon.cpp
//  photon
//
//  Created by Virendra Shakya on 10/26/22.
//

#include <iostream>
#include "photon.hpp"
#include "darwin.hpp"

photon::photon() : window_(0) {
  std::cout << __PRETTY_FUNCTION__ << std::endl;
  window_ = new darwin();
}

photon::~photon() {
  std::cout << __PRETTY_FUNCTION__ << std::endl;
  delete window_;
}

void photon::construct(int argc, const char * argv[]) {
  std::cout << __PRETTY_FUNCTION__ << std::endl;
  window_->construct(argc, argv);
}

void photon::reset() {
  std::cout << __PRETTY_FUNCTION__ << std::endl;
}

int photon::configure_space(const std::vector<line_segment> segments) {
  std::cout << __PRETTY_FUNCTION__ << std::endl;
  return 0;
}

std::vector<point2d> photon::compute_path(const point2d &from, const point2d &to) {
  std::cout << __PRETTY_FUNCTION__ << std::endl;
  std::vector<point2d> result;
  return result;
}

int photon::show_scene(unsigned int show_flags) {
  std::cout << __PRETTY_FUNCTION__ << std::endl;
  window_->show_scene(show_flags);
  return 0;
}

