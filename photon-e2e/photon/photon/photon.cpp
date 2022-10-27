//
//  photon.cpp
//  photon
//
//  Created by Virendra Shakya on 10/26/22.
//

#include "cmn.hpp"
#include "photon.hpp"
#include "darwin.hpp"

photon::photon() : window_(0) {
  TRACE
  window_ = new darwin();
}

photon::~photon() {
  TRACE
  delete window_;
}

void photon::construct(int argc,  char * argv[]) {
  TRACE
  window_->construct(argc, argv);
}

void photon::reset() {
  TRACE
}

int photon::configure_space(const std::vector<line_segment> segments) {
  TRACE
  return 0;
}

std::vector<point2d> photon::compute_path(const point2d &from, const point2d &to) {
  TRACE
  std::vector<point2d> result;
  return result;
}

int photon::show_scene(unsigned int show_flags) {
  TRACE
  window_->show_scene(show_flags);
  return 0;
}

