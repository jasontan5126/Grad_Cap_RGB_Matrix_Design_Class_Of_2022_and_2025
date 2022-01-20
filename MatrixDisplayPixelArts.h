#include "AmongUsBMP.h"
#include "AngryBirdsBMP.h"
#include "AolBMP.h"
#include "AStudentBMP.h"
#include "ChampionIslandLuckyBMP.h"
#include "CuteFaceBMP.h"
#include "DigitBMP.h"
#include "InezBMP.h"
#include "JackieBMP.h"
#include "KirbyBMP.h"
#include "MarioBMP.h"
#include "MarioStarBMP.h"
#include "MattBMP.h"
#include "PBSKidsBMP.h"
#include "PikachuBMP.h"
#include "RedGhostBMP.h"
#include "StarfyBMP.h"
#include "StonyBrookLogoBMP.h"
#include "WubbzyBMP.h"
#include "YoshiBMP.h"
#include "MatrixDisplayPixelArts.h"

#define setBrightness(x) fillScreen(0) // no-op, no brightness on this board
#define clear()          fillScreen(0)
#define show()           swapBuffers(true)

/**
 * Display all the pixel arts used for Class of 2022 SBU Undergraduate Commencement
 */
void displayMatrix(int dela){
    //Display the Stony Brook handmade logo
    matrix->drawRGBBitmap(0, 0, (const uint16_t *) stony_brook_logo, 32, 32);
    matrix->show();
    delay(dela);    //7 seconds delay: 7000 ms
    matrix->clear(); //Set image to black

    /**
     * Name and major and class of 2022 here
     */

    //Display the AStudentBMP.h 32x32 matrix
    matrix->drawRGBBitmap(0, 0, (const uint16_t *) a_student, 32, 32);
    matrix->show();
    delay(dela);    //7 seconds delay: 7000 ms
    matrix->clear(); //Set image to black 

    //Display the AmongUsBMP.h
    matrix->drawRGBBitmap(0, 0, (const uint16_t *) among_us, 32, 32);
    matrix->show();
    delay(dela);    //7 seconds delay: 7000 ms
    matrix->clear(); //Set image to black 

    //Display the AolBMP.h
    matrix->drawRGBBitmap(0, 0, (const uint16_t *) aol, 32, 32);
    matrix->show();
    delay(dela);    //7 seconds delay: 7000 ms
    matrix->clear(); //Set image to black 

    //Display the CuteFaceBMP.h
    matrix->drawRGBBitmap(0, 0, (const uint16_t *) cute, 32, 32);
    matrix->show();
    delay(dela);    //7 seconds delay: 7000 ms
    matrix->clear(); //Set image to black 

    //Display the AngryBirdsBMP.h
    matrix->drawRGBBitmap(0, 0, (const uint16_t *) angry_birds, 32, 32);
    matrix->show();
    delay(dela);    //7 seconds delay: 7000 ms
    matrix->clear(); //Set image to black 
    
    //Display the ChampionIslandLuckyBMP.h
    displayChampionIslandLuckyBMP(300, 3);

    //Display the DigitBMP.h
    matrix->drawRGBBitmap(0, 0, (const uint16_t *) digit, 32, 32);
    matrix->show();
    delay(dela);    //7 seconds delay: 7000 ms
    matrix->clear(); //Set image to black 

    //Display the InezBMP.h
    matrix->drawRGBBitmap(0, 0, (const uint16_t *) inez, 32, 32);
    matrix->show();
    delay(dela);    //7 seconds delay: 7000 ms
    matrix->clear(); //Set image to black 

    //Display the JackieBMP.h
    matrix->drawRGBBitmap(0, 0, (const uint16_t *) jackie, 32, 32);
    matrix->show();
    delay(dela);    //7 seconds delay: 7000 ms
    matrix->clear(); //Set image to black 

    //Display the MattBMP.h
    matrix->drawRGBBitmap(0, 0, (const uint16_t *) matt, 32, 32);
    matrix->show();
    delay(dela);    //7 seconds delay: 7000 ms
    matrix->clear(); //Set image to black 

    //Display the PBSKidsBMP.h
    matrix->drawRGBBitmap(0, 0, (const uint16_t *) pbskids, 32, 32);
    matrix->show();
    delay(dela);    //7 seconds delay: 7000 ms
    matrix->clear(); //Set image to black 

    //Display the YoshiBMP.h
    matrix->drawRGBBitmap(0, 0, (const uint16_t *) yoshi, 32, 32);
    matrix->show();
    delay(dela);    //7 seconds delay: 7000 ms
    matrix->clear(); //Set image to black 

    //Display the WubbzyBMP.h
    matrix->drawRGBBitmap(0, 0, (const uint16_t *) wubbzy, 32, 32);
    matrix->show();
    delay(dela);    //7 seconds delay: 7000 ms
    matrix->clear(); //Set image to black 

    //Display the PikachuBMP.h
    displayPikachuBMP(300, 3);

    //Display the MarioBMP.h
    matrix->drawRGBBitmap(0, 0, (const uint16_t *) mario, 32, 32);
    matrix->show();
    delay(dela);    //7 seconds delay: 7000 ms
    matrix->clear(); //Set image to black 

    //Display the MarioStarBMP.h
    matrix->drawRGBBitmap(0, 0, (const uint16_t *) mario_star, 32, 32);
    matrix->show();
    delay(dela);    //7 seconds delay: 7000 ms
    matrix->clear(); //Set image to black 

    //Display the AngryBirdsBMP.h
    matrix->drawRGBBitmap(0, 0, (const uint16_t *) angry_birds, 32, 32);
    matrix->show();
    delay(dela);    //7 seconds delay: 7000 ms
    matrix->clear(); //Set image to black 

    //Display the StarfyBMP.h
    matrix->drawRGBBitmap(0, 0, (const uint16_t *) starfy, 32, 32);
    matrix->show();
    delay(dela);    //7 seconds delay: 7000 ms
    matrix->clear(); //Set image to black 

    /*
     * Display the red ghost gif from pacman
     */
    displayRedGhostBMP(300, 3);

    /*
     * Display the kirby gif
     */
    displayKirbyBMP(300,3);
}

void displayKirbyBMP(int delayNum, int count){
    for(int i = 0; i < count; i++){
        matrix->drawRGBBitmap(0, 0, (const uint16_t *) kirby, 32, 32);
        matrix->show();
        delay(delayNum);    //0.3 seconds delay: 300 ms
        matrix->clear(); //Set image to black 

        matrix->drawRGBBitmap(0, 0, (const uint16_t *) kirby1, 32, 32);
        matrix->show();
        delay(delayNum);    //0.3 seconds delay: 300 ms
        matrix->clear(); //Set image to black 

        matrix->drawRGBBitmap(0, 0, (const uint16_t *) kirby2, 32, 32);
        matrix->show();
        delay(delayNum);    //0.3 seconds delay: 300 ms
        matrix->clear(); //Set image to black 

        matrix->drawRGBBitmap(0, 0, (const uint16_t *) kirby3, 32, 32);
        matrix->show();
        delay(delayNum);    //0.3 seconds delay: 300 ms
        matrix->clear(); //Set image to black   

        matrix->drawRGBBitmap(0, 0, (const uint16_t *) kirby4, 32, 32);
        matrix->show();
        delay(delayNum);    //0.3 seconds delay: 300 ms
        matrix->clear(); //Set image to black   

        matrix->drawRGBBitmap(0, 0, (const uint16_t *) kirby5, 32, 32);
        matrix->show();
        delay(delayNum);    //0.3 seconds delay: 300 ms
        matrix->clear(); //Set image to black   

        matrix->drawRGBBitmap(0, 0, (const uint16_t *) kirby6, 32, 32);
        matrix->show();
        delay(delayNum);    //0.3 seconds delay: 300 ms
        matrix->clear(); //Set image to black   

        matrix->drawRGBBitmap(0, 0, (const uint16_t *) kirby7, 32, 32);
        matrix->show();
        delay(delayNum);    //0.3 seconds delay: 300 ms
        matrix->clear(); //Set image to black   

        matrix->drawRGBBitmap(0, 0, (const uint16_t *) kirby8, 32, 32);
        matrix->show();
        delay(delayNum);    //0.3 seconds delay: 300 ms
        matrix->clear(); //Set image to black   


        matrix->drawRGBBitmap(0, 0, (const uint16_t *) kirby9, 32, 32);
        matrix->show();
        delay(delayNum);    //0.3 seconds delay: 300 ms
        matrix->clear(); //Set image to black   

        matrix->drawRGBBitmap(0, 0, (const uint16_t *) kirby10, 32, 32);
        matrix->show();
        delay(delayNum);    //0.3 seconds delay: 300 ms
        matrix->clear(); //Set image to black   

        matrix->drawRGBBitmap(0, 0, (const uint16_t *) kirby11, 32, 32);
        matrix->show();
        delay(delayNum);    //0.3 seconds delay: 300 ms
        matrix->clear(); //Set image to black   

        matrix->drawRGBBitmap(0, 0, (const uint16_t *) kirby12, 32, 32);
        matrix->show();
        delay(delayNum);    //0.3 seconds delay: 300 ms
        matrix->clear(); //Set image to black   

        matrix->drawRGBBitmap(0, 0, (const uint16_t *) kirby13, 32, 32);
        matrix->show();
        delay(delayNum);    //0.3 seconds delay: 300 ms
        matrix->clear(); //Set image to black   

        matrix->drawRGBBitmap(0, 0, (const uint16_t *) kirby14, 32, 32);
        matrix->show();
        delay(delayNum);    //0.3 seconds delay: 300 ms
        matrix->clear(); //Set image to black   

        matrix->drawRGBBitmap(0, 0, (const uint16_t *) kirby15, 32, 32);
        matrix->show();
        delay(delayNum);    //0.3 seconds delay: 300 ms
        matrix->clear(); //Set image to black   

        matrix->drawRGBBitmap(0, 0, (const uint16_t *) kirby16, 32, 32);
        matrix->show();
        delay(delayNum);    //0.3 seconds delay: 300 ms
        matrix->clear(); //Set image to black   

        matrix->drawRGBBitmap(0, 0, (const uint16_t *) kirby17, 32, 32);
        matrix->show();
        delay(delayNum);    //0.3 seconds delay: 300 ms
        matrix->clear(); //Set image to black   

        matrix->drawRGBBitmap(0, 0, (const uint16_t *) kirby18, 32, 32);
        matrix->show();
        delay(delayNum);    //0.3 seconds delay: 300 ms
        matrix->clear(); //Set image to black   

        matrix->drawRGBBitmap(0, 0, (const uint16_t *) kirby19, 32, 32);
        matrix->show();
        delay(delayNum);    //0.3 seconds delay: 300 ms
        matrix->clear(); //Set image to black   

        matrix->drawRGBBitmap(0, 0, (const uint16_t *) kirby20, 32, 32);
        matrix->show();
        delay(delayNum);    //0.3 seconds delay: 300 ms
        matrix->clear(); //Set image to black   

        matrix->drawRGBBitmap(0, 0, (const uint16_t *) kirby21, 32, 32);
        matrix->show();
        delay(delayNum);    //0.3 seconds delay: 300 ms
        matrix->clear(); //Set image to black   

        matrix->drawRGBBitmap(0, 0, (const uint16_t *) kirby22, 32, 32);
        matrix->show();
        delay(delayNum);    //0.3 seconds delay: 300 ms
        matrix->clear(); //Set image to black   

        matrix->drawRGBBitmap(0, 0, (const uint16_t *) kirby23, 32, 32);
        matrix->show();
        delay(delayNum);    //0.3 seconds delay: 300 ms
        matrix->clear(); //Set image to black   

        matrix->drawRGBBitmap(0, 0, (const uint16_t *) kirby24, 32, 32);
        matrix->show();
        delay(delayNum);    //0.3 seconds delay: 300 ms
        matrix->clear(); //Set image to black   

        matrix->drawRGBBitmap(0, 0, (const uint16_t *) kirby25, 32, 32);
        matrix->show();
        delay(delayNum);    //0.3 seconds delay: 300 ms
        matrix->clear(); //Set image to black   

        matrix->drawRGBBitmap(0, 0, (const uint16_t *) kirby26, 32, 32);
        matrix->show();
        delay(delayNum);    //0.3 seconds delay: 300 ms
        matrix->clear(); //Set image to black   

        matrix->drawRGBBitmap(0, 0, (const uint16_t *) kirby27, 32, 32);
        matrix->show();
        delay(delayNum);    //0.3 seconds delay: 300 ms
        matrix->clear(); //Set image to black   

        matrix->drawRGBBitmap(0, 0, (const uint16_t *) kirby28, 32, 32);
        matrix->show();
        delay(delayNum);    //0.3 seconds delay: 300 ms
        matrix->clear(); //Set image to black   

        matrix->drawRGBBitmap(0, 0, (const uint16_t *) kirby29, 32, 32);
        matrix->show();
        delay(delayNum);    //0.3 seconds delay: 300 ms
        matrix->clear(); //Set image to black   

        matrix->drawRGBBitmap(0, 0, (const uint16_t *) kirby30, 32, 32);
        matrix->show();
        delay(delayNum);    //0.3 seconds delay: 300 ms
        matrix->clear(); //Set image to black   

        matrix->drawRGBBitmap(0, 0, (const uint16_t *) kirby31, 32, 32);
        matrix->show();
        delay(delayNum);    //0.3 seconds delay: 300 ms
        matrix->clear(); //Set image to black   


        matrix->drawRGBBitmap(0, 0, (const uint16_t *) kirby32, 32, 32);
        matrix->show();
        delay(delayNum);    //0.3 seconds delay: 300 ms
        matrix->clear(); //Set image to black   

        matrix->drawRGBBitmap(0, 0, (const uint16_t *) kirby33, 32, 32);
        matrix->show();
        delay(delayNum);    //0.3 seconds delay: 300 ms
        matrix->clear(); //Set image to black   

        matrix->drawRGBBitmap(0, 0, (const uint16_t *) kirby34, 32, 32);
        matrix->show();
        delay(delayNum);    //0.3 seconds delay: 300 ms
        matrix->clear(); //Set image to black   

        matrix->drawRGBBitmap(0, 0, (const uint16_t *) kirby35, 32, 32);
        matrix->show();
        delay(delayNum);    //0.3 seconds delay: 300 ms
        matrix->clear(); //Set image to black   

        matrix->drawRGBBitmap(0, 0, (const uint16_t *) kirby36, 32, 32);
        matrix->show();
        delay(delayNum);    //0.3 seconds delay: 300 ms
        matrix->clear(); //Set image to black   

        matrix->drawRGBBitmap(0, 0, (const uint16_t *) kirby37, 32, 32);
        matrix->show();
        delay(delayNum);    //0.3 seconds delay: 300 ms
        matrix->clear(); //Set image to black   

        matrix->drawRGBBitmap(0, 0, (const uint16_t *) kirby38, 32, 32);
        matrix->show();
        delay(delayNum);    //0.3 seconds delay: 300 ms
        matrix->clear(); //Set image to black   

        matrix->drawRGBBitmap(0, 0, (const uint16_t *) kirby39, 32, 32);
        matrix->show();
        delay(delayNum);    //0.3 seconds delay: 300 ms
        matrix->clear(); //Set image to black   

        matrix->drawRGBBitmap(0, 0, (const uint16_t *) kirby40, 32, 32);
        matrix->show();
        delay(delayNum);    //0.3 seconds delay: 300 ms
        matrix->clear(); //Set image to black   

        matrix->drawRGBBitmap(0, 0, (const uint16_t *) kirby41, 32, 32);
        matrix->show();
        delay(delayNum);    //0.3 seconds delay: 300 ms
        matrix->clear(); //Set image to black   

        matrix->drawRGBBitmap(0, 0, (const uint16_t *) kirby42, 32, 32);
        matrix->show();
        delay(delayNum);    //0.3 seconds delay: 300 ms
        matrix->clear(); //Set image to black   

        matrix->drawRGBBitmap(0, 0, (const uint16_t *) kirby43, 32, 32);
        matrix->show();
        delay(delayNum);    //0.3 seconds delay: 300 ms
        matrix->clear(); //Set image to black   

        matrix->drawRGBBitmap(0, 0, (const uint16_t *) kirby44, 32, 32);
        matrix->show();
        delay(delayNum);    //0.3 seconds delay: 300 ms
        matrix->clear(); //Set image to black   

        matrix->drawRGBBitmap(0, 0, (const uint16_t *) kirby45, 32, 32);
        matrix->show();
        delay(delayNum);    //0.3 seconds delay: 300 ms
        matrix->clear(); //Set image to black   
        
        matrix->drawRGBBitmap(0, 0, (const uint16_t *) kirby46, 32, 32);
        matrix->show();
        delay(delayNum);    //0.3 seconds delay: 300 ms
        matrix->clear(); //Set image to black   

        matrix->drawRGBBitmap(0, 0, (const uint16_t *) kirby47, 32, 32);
        matrix->show();
        delay(delayNum);    //0.3 seconds delay: 300 ms
        matrix->clear(); //Set image to black   

        matrix->drawRGBBitmap(0, 0, (const uint16_t *) kirby48, 32, 32);
        matrix->show();
        delay(delayNum);    //0.3 seconds delay: 300 ms
        matrix->clear(); //Set image to black   

        matrix->drawRGBBitmap(0, 0, (const uint16_t *) kirby49, 32, 32);
        matrix->show();
        delay(delayNum);    //0.3 seconds delay: 300 ms
        matrix->clear(); //Set image to black   
    }
    delay(1000);  //Wait 1 seconds to go to next BMP
}


/**
 * Display the red ghost gif
 */
void displayRedGhostBMP(int delayNum, int count){
    for(int i = 0; i < count; i++){
        matrix->drawRGBBitmap(0, 0, (const uint16_t *) redGhost, 32, 32);
        matrix->show();
        delay(delayNum);    //0.3 seconds delay: 300 ms
        matrix->clear(); //Set image to black 

        matrix->drawRGBBitmap(0, 0, (const uint16_t *) redGhost1, 32, 32);
        matrix->show();
        delay(delayNum);    //0.3 seconds delay: 300 ms
        matrix->clear(); //Set image to black 

        matrix->drawRGBBitmap(0, 0, (const uint16_t *) redGhost2, 32, 32);
        matrix->show();
        delay(delayNum);    //0.3 seconds delay: 300 ms
        matrix->clear(); //Set image to black 

        matrix->drawRGBBitmap(0, 0, (const uint16_t *) redGhost3, 32, 32);
        matrix->show();
        delay(delayNum);    //0.3 seconds delay: 300 ms
        matrix->clear(); //Set image to black   
    }
    delay(1000);  //Wait 1 seconds to go to next BMP
}

/**
 * Display the Pikachu gif
 */
void displayPikachuBMP(int delayNum, int count){
    for(int i = 0; i < count; i++){
        matrix->drawRGBBitmap(0, 0, (const uint16_t *) pikachu, 32, 32);
        matrix->show();
        delay(delayNum);    //0.3 seconds delay: 300 ms
        matrix->clear(); //Set image to black 

        matrix->drawRGBBitmap(0, 0, (const uint16_t *) pikachu1, 32, 32);
        matrix->show();
        delay(delayNum);    //0.3 seconds delay: 300 ms
        matrix->clear(); //Set image to black 

        matrix->drawRGBBitmap(0, 0, (const uint16_t *) pikachu2, 32, 32);
        matrix->show();
        delay(delayNum);    //0.3 seconds delay: 300 ms
        matrix->clear(); //Set image to black 

        matrix->drawRGBBitmap(0, 0, (const uint16_t *) pikachu3, 32, 32);
        matrix->show();
        delay(delayNum);    //0.3 seconds delay: 300 ms
        matrix->clear(); //Set image to black 

        matrix->drawRGBBitmap(0, 0, (const uint16_t *) pikachu4, 32, 32);
        matrix->show();
        delay(delayNum);    //0.3 seconds delay: 300 ms
        matrix->clear(); //Set image to black     

        matrix->drawRGBBitmap(0, 0, (const uint16_t *) pikachu5, 32, 32);
        matrix->show();
        delay(delayNum);    //0.3 seconds delay: 300 ms
        matrix->clear(); //Set image to black  

        matrix->drawRGBBitmap(0, 0, (const uint16_t *) pikachu6, 32, 32);
        matrix->show();
        delay(delayNum);    //0.3 seconds delay: 300 ms
        matrix->clear(); //Set image to black  

        matrix->drawRGBBitmap(0, 0, (const uint16_t *) pikachu7, 32, 32);
        matrix->show();
        delay(delayNum);    //0.3 seconds delay: 300 ms
        matrix->clear(); //Set image to black  
    }
    delay(1000);  //Wait 1 seconds to go to next BMP
}


/**
 * Display the Champion Island gif
 */
void displayChampionIslandLuckyBMP(int delayNum, int count){
    for(int i = 0; i < count; i++){
        //Display the ChampionIslandLuckyBMP.h as a gif animation
        matrix->drawRGBBitmap(0, 0, (const uint16_t *) luckyCat, 32, 32);
        matrix->show();
        delay(delayNum);    //0.3 seconds delay: 300 ms
        matrix->clear(); //Set image to black 

        matrix->drawRGBBitmap(0, 0, (const uint16_t *) luckyCat_1, 32, 32);
        matrix->show();
        delay(delayNum);    //0.3 seconds delay: 300 ms
        matrix->clear(); //Set image to black 

        matrix->drawRGBBitmap(0, 0, (const uint16_t *) luckyCat2, 32, 32);
        matrix->show();
        delay(delayNum);    //0.3 seconds delay: 300 ms
        matrix->clear(); //Set image to black 

        matrix->drawRGBBitmap(0, 0, (const uint16_t *) luckyCat_3, 32, 32);
        matrix->show();
        delay(delayNum);    //0.3 seconds delay: 300 ms
        matrix->clear(); //Set image to black 

        matrix->drawRGBBitmap(0, 0, (const uint16_t *) luckyCat_4, 32, 32);
        matrix->show();
        delay(delayNum);    //0.3 seconds delay: 300 ms
        matrix->clear(); //Set image to black        
    }

    delay(1000);  //Wait 1 seconds to go to next BMP
}
