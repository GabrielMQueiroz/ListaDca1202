#include "sculptor.hpp"

int main(){
    Sculptor model(200,200,200);

    model.setColor(209,123,246,0.7);
    //
    //model.putEllipsoid(120,120,120,30,20,15);
    //model.cutEllipsoid(120,130,120,28,18,13);
    //corpo celualar
    model.putSphere(50,120,120,10);
    //braços dendtriticos
    for(int i=0;i<10;i++){
        model.putSphere(40+i,120,120,3);
    }
    for(int i=0;i<15;i++){
        model.putSphere(65-i,120,120,3);
    };
    model.cutSphere(50,120,120,7);
    //núcleo
    model.setColor(100,223,246,0.7);
    model.putSphere(50,120,120,3);
    //dendritos
    model.setColor(209,123,246,0.7);
    for (int i = 0; i < 15; i++){
        if(i%2==0){
            model.putVoxel(120,65+i,122+i);
        }else{
            model.putVoxel(122+i,65+i,120);
        };
    };
    for (int i = 0; i < 15; i++){
        if(i%2==0){
            model.putVoxel(122+i,67+i,122+i);
        }else{
            model.putVoxel(121+i+1,67+i,121+i+1);
        };
    };
    for (int i = 0; i < 8; i++){
        if(i%2==0){
            model.putVoxel(118-i,67+i,118-i);
        }else{
            model.putVoxel(118-(i-2),67+i,118-(i-2));
        };
    };    
    
    //baixo

    for (int i = 0; i < 8; i++){
        if(i%2==0){
            model.putVoxel(121+i,37-i,121+i);
        }else{
            model.putVoxel(123+(i-2),37-i,123+(i-2));
        };
    };
    for (int i = 0; i < 8; i++){
        if(i%2==0){
            model.putVoxel(121-i,37-i,121-i);
        }else{
            model.putVoxel(123-(i+2),37-i,123-(i+2));
        };
    };
    

    for (int i = 0; i < 8; i++){
        if(i%2==0){
            model.putVoxel(131-i-i,29,131);
        }else{
            model.putVoxel(131-(i+2)+i,29,131);
        };
    };

    for (int i = 0; i < 8; i++){
        if(i%2==0){
            model.putVoxel(131-i-i,29,131-i);
        }else{
            model.putVoxel(133-(i+2)+i,29,133+(i-2));
        };
    };

    for (int i = 0; i < 8; i++){
        if(i%2==0){
            model.putVoxel(121-i,29,121-i);
        }else{
            model.putVoxel(123-(i+2)+i,29,123+(i-2));
        };
    };

    model.writeOFF("model.off");
    return 0;
}

