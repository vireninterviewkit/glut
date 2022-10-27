//
//  driver.cpp
//  photon
//
//  Created by Virendra Shakya on 10/26/22.
//

#include "driver.hpp"
#include "photon_xface.hpp"
#include "cmn.hpp"

driver::driver() {
  TRACE
}

driver::~driver() {
  TRACE
}

void driver::initialize(int argc, char * argv[], const std::string &file_path, const std::string &file_name) {
  TRACE
  construct(argc, argv);
  
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

