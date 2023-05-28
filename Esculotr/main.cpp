#include "sculptor.hpp"

int main()
{
    Sculptor model(200,200,200);

    model.setColor(209,123,246,0.25);
    //corpo celualar
    model.putSphere(50,0,0,10);
    model.cutSphere(30,30,30,5);
    //braços dendtriticos
    for(int i=0;i<10;i++){
        model.putSphere(40+i,0,0,3);
    }
    for(int i=0;i<15;i++){
        model.putSphere(65-i,0,0,3);
    };
    //dendritos
    for (int i = 0; i < 15; i++){
        if(i%2==0){
            model.putVoxel(0,65+i,2+i);
        }else{
            model.putVoxel(2+i,65+i,0);
        };
    }
    for (int i = 0; i < 15; i++){
        if(i%2==0){
            model.putVoxel(2+i,67+i,2+i);
        }else{
            model.putVoxel(1+i+1,67+i,1+i+1);
        };
    }
    


    /*for(int i=0;i<15;i++){
        for(int j=0;j<15;j++){
            for(int k=0;k<15;k++){
                model.putSphere(5+i,5+j,5+k,2);
            };
        model.putSphere(5+i,5+j,5,2);
        };
    model.putSphere(5+i,5,5,2);
    };
    /*model.putBox(25,75,25,50,0,5);
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

    model.cutVoxel(99,99,9);*/
    model.writeOFF("model.off");
    return 0;
}
