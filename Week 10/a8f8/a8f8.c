#include <stdio.h>
#include "simpio.h"


/*DOMES/EGGRAFES*/
typedef struct
{
    int width;
    int height;
    int depth;
    int area;
    int volume;
}boxT;


/*SYNARTHSEIS/DIADIKASIES*/
void getDimentions(boxT *box);
void calcArea(boxT *box);
void calcVol(boxT *box);


/*KYRIWS PROGRAMMA*/
int main() {

    boxT box;

    /*EISAGWGH TWN DIASTASEWN TOY KOYTIOY, APO TON XRHSTH KAI ENHMERWSH TWN ANTISTOIXWN PEDIWN THS DOMHS(boxT).*/
    getDimentions(&box);

    /*YPOLOGISMOS TOY EMBADOY TOY KOYTIOY KAI ENHMERWSH TOY ANTISTOIXOY PEDIOY(area) THS DOMHS(boxT).*/
    calcArea(&box);

    /*YPOLOGISMOS TOY OGKOY TOY KOYTIOY KAI ENHMERWSH TOY ANTISTOIXOY PEDIOY(volume) THS DOMHS(boxT).*/
    calcVol(&box);

    /*EMFANISH TOY EMBADOY KAI TOY OGKOY TOY KOYTIOY.*/
    printf("TO EMBADON TOY KOYTIOY EINAI %d cm2\n", box.area);
    printf("O OGKOS TOY KOYTIOY EINAI %d cm3\n", box.volume);

return 0;
}



/*SYNARTHSH: EISAGWGH TWN DIASTASEWN TOY KOYTIOY, APO TON XRHSTH KAI ENHMERWSH TWN ANTISTOIXWN PEDIWN THS DOMHS(boxT).*/
void getDimentions(boxT *box)
{
    printf("DWSE TO MHKOS TOY KOYTIOY SE cm: ");
    (*box).width=GetInteger();

    printf("DWSE TO YPSOS TOY KOYTIOY SE cm: ");
    (*box).height=GetInteger();

    printf("DWSE TO BATHOS TOY KOYTIOY SE cm: ");
    (*box).depth=GetInteger();
}

/*SYNARTHSH: YPOLOGISMOS TOY EMBADOY TOY KOYTIOY KAI ENHMERWSH TOY ANTISTOIXOY PEDIOY(area) THS DOMHS(boxT).*/
void calcArea(boxT *box)
{
    (*box).area=2*(((*box).width*(*box).height)+((*box).height*(*box).depth)+((*box).height*(*box).depth));
}

/*YPOLOGISMOS TOY OGKOY TOY KOYTIOY KAI ENHMERWSH TOY ANTISTOIXOY PEDIOY(volume) THS DOMHS(boxT).*/
void calcVol(boxT *box)
{
    (*box).volume=((*box).width*(*box).height*(*box).depth);
}
