int xxx=10;
int yyy=10;
int yyy1=10;
int xxx1=10;
int www=500;
int hhh=500;
void setxxx(int x){
    xxx1=x;
}
void setyyy(int y){
    yyy1=y;
}
void setwww(int w){
    www=w;
}
void sethhh(int h){
    hhh=h;
}
int gety(int key){
       if(key==1 && yyy>20){
        yyy=yyy-yyy1;
    
    }
    if(key==2 && yyy<hhh-20){
        yyy=yyy+yyy1;
    
    }
    return yyy;
}
int getx(int key){
    if(key==1 && xxx>20){
        xxx=xxx-xxx1;
    
    }
    if(key==2 && xxx<www-20){
        xxx=xxx+xxx1;
    
    }
    return xxx;
}