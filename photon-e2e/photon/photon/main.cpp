//
//  main.cpp
//  photon
//
//  Created by Virendra Shakya on 10/26/22.
//
#include "driver.hpp"

int main(int argc, char * argv[]) {
  
  const std::string file_path = "test_points.txt"; 
  driver driver_;
  driver_.initialize(argc, argv, file_path);
  driver_.set_show_options(0);
  driver_.show();
  driver_.destruct();
  
  return 0;
}
