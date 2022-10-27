//
//  photon.hpp
//  photon
//
//  Created by Virendra Shakya on 10/26/22.
//

#ifndef photon_hpp
#define photon_hpp

#include <vector>
#include "vd.hpp"
#include "win.hpp"
#include "cmn.hpp"

static const unsigned int SHOW_SITES = 2;
static const unsigned int SHOW_VORONOI_VERTICES = 8;
static const unsigned int SHOW_VORONOI_EDGES = 16;

class photon {
public:
  photon();
  ~photon();
  void construct(int argc, const char * argv[]);
  void reset();
  int configure_space(const std::vector<line_segment> segments);
  std::vector<point2d> compute_path(const point2d &from, const point2d &to);
  int show_scene(unsigned int show_flags);
private:
  photon(const photon &rhs);
  const photon &operator=(const photon &rhs);
private:
  vd vd_;
  win *window_;
};

#endif /* photon_hpp */
