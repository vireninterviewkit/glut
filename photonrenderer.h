#ifndef PHOTONRENDERER_H
#define PHOTONRENDERER_H


#include <iostream>
#include <vector>
#include <boost/polygon/polygon.hpp>
#include <boost/polygon/voronoi.hpp>
#include <QOpenGLWidget>
#include <QWidget>
using namespace boost::polygon;

class PhotonRenderer : public QOpenGLWidget
{
    Q_OBJECT
public:
    explicit PhotonRenderer(QWidget *parent = nullptr);

    QSize sizeHint() const;
protected:
    void initializeGL();
    void paintGL();
    void resizeGL(int width, int height);
private:
    typedef double coordinate_type;
    typedef point_data<coordinate_type> point_type;
    typedef segment_data<coordinate_type> segment_type;
    typedef rectangle_data<coordinate_type> rect_type;
    typedef voronoi_builder<int> VB;
    typedef voronoi_diagram<coordinate_type> VD;
    typedef VD::cell_type cell_type;
    typedef VD::cell_type::source_index_type source_index_type;
    typedef VD::cell_type::source_category_type source_category_type;
    typedef VD::edge_type edge_type;
    typedef VD::cell_container_type cell_container_type;
    typedef VD::cell_container_type vertex_container_type;
    typedef VD::edge_container_type edge_container_type;
    typedef VD::const_cell_iterator const_cell_iterator;
    typedef VD::const_vertex_iterator const_vertex_iterator;
    typedef VD::const_edge_iterator const_edge_iterator;

    static const std::size_t EXTERNAL_COLOR = 1;

signals:

};

#endif // PHOTONRENDERER_H
