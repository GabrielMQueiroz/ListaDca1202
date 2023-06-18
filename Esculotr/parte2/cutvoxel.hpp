#ifndef CUTVOXEL_H
#define CUTVOXEL_H
#include "figurageometrica.hpp"

class CutVoxel : public FiguraGeometrica
{
public:
    CutVoxel(int x, int y, int z);
    void draw(Sculptor &s);
};

#endif // CUTVOXEL_H
