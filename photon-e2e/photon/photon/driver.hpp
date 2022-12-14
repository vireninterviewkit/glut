//
//  driver.hpp
//  photon
//
//  Created by Virendra Shakya on 10/26/22.
//

#ifndef driver_hpp
#define driver_hpp

#include <string>

class driver {
public:
  driver();
  ~driver();
  void initialize(int argc, char * argv[], const std::string &file_path);
  void destruct();
  void set_show_options(unsigned int flags);
  void show();
private:
  int read_data(const std::string& file_path);
};

#endif /* driver_hpp */
