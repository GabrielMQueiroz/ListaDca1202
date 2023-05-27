#include "sculptor.hpp"

int main()
{
    Sculptor model(100,100,100);

    model.setColor(0,0,0,1);

    model.putBox(25,75,25,50,0,5);
    model.putBox(25,50,25,75,0,5);

    model.cutBox(30,40,30,40,0,0);
    

    model.setColor(0,255,0,1);

    model.putVoxel(0,0,15);

    model.setColor(0,255,0,1);

    model.putSphere(15,70,30,10);

    model.setColor(0,0,255,1);

    model.putEllipsoid(70,70,70,15,10,15);

    model.cutEllipsoid(80,50,80,5,10,15);

    model.cutSphere(40,40,40,15);

    model.cutVoxel(99,99,9);

    model.writeOFF("model.off");
    return 0;
}
