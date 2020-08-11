#include "LedControl.h"

LedControl lc=LedControl(2,4,3,4);

byte testing[] =
{
   B0,
   B0,
   B0,
   B0,
   B0,
   B0,
   B0,
   B0
};
byte ascii[][8] =
{{
   B00000000,
   B00000000,
   B00000000,
   B00000000,
   B00000000,
   B00000000,
   B00000000,
   B00000000
   //--espace--//
},
{
   B10000000,
   B10000000,
   B10000000,
   B10000000,
   B10000000,
   B00000000,
   B10000000,
   B00000000
   //--!--//
},
{
   B00000000,
   B10100000,
   B10100000,
   B01010000,
   B00000000,
   B00000000,
   B00000000,
   B00000000
   //--"--//
},
{
   B00000000,
   B01010000,
   B11111000,
   B01010000,
   B01010000,
   B11111000,
   B01010000,
   B00000000
   //--#--//
},
{
   B00000000,
   B00100000,
   B01111000,
   B10100000,
   B01110000,
   B00101000,
   B11110000,
   B00100000
   //--$--//
},
{
   B00000000,
   B00000000,
   B01100100,
   B01101000,
   B00010000,
   B00101100,
   B01001100,
   B00000000
   //--%--//
},
{
   B00000000,
   B00010000,
   B00101000,
   B00101000,
   B00010000,
   B00101010,
   B00100100,
   B00011010
   //--&--//
},
{
   B00000000,
   B00010000,
   B00010000,
   B00100000,
   B00000000,
   B00000000,
   B00000000,
   B00000000
   //--'--//
},
{
   B00100000,
   B01000000,
   B01000000,
   B01000000,
   B01000000,
   B01000000,
   B01000000,
   B00100000
   //--(--//
},
{
   B01000000,
   B00100000,
   B00100000,
   B00100000,
   B00100000,
   B00100000,
   B00100000,
   B01000000
   //--)--//
},
{
   B00000000,
   B00000000,
   B00000000,
   B01010000,
   B00100000,
   B01010000,
   B00000000,
   B00000000
   //--*--//
},
{
   B00000000,
   B00000000,
   B00100000,
   B00100000,
   B11111000,
   B00100000,
   B00100000,
   B00000000
   //--+--//
},
{
   B00000000,
   B00000000,
   B00000000,
   B00000000,
   B00000000,
   B00100000,
   B00100000,
   B01000000
   //--,--//
},
{
   B00000000,
   B00000000,
   B00000000,
   B00000000,
   B11111000,
   B00000000,
   B00000000,
   B00000000
   //-----//
},
{
   B00000000,
   B00000000,
   B00000000,
   B00000000,
   B00000000,
   B00000000,
   B00011000,
   B00011000
   //--.--//
},
{
   B00000000,
   B00000100,
   B00001000,
   B00001000,
   B00010000,
   B00010000,
   B00100000,
   B00000000
   //--/--//
},
{
   B00000000,
   B11111000,
   B10001000,
   B10001000,
   B10001000,
   B10001000,
   B10001000,
   B11111000
   //--0--//
},
{
   B00000000,
   B01000000,
   B11000000,
   B01000000,
   B01000000,
   B01000000,
   B01000000,
   B01000000
   //--1--//
},
{
   B00000000,
   B01111100,
   B00000100,
   B00000100,
   B01111100,
   B01000000,
   B01000000,
   B01111100
   //--2--//
},
{
   B00000000,
   B00111100,
   B00000100,
   B00000100,
   B00111100,
   B00000100,
   B00000100,
   B00111100
   //--3--//
},
{
   B00000000,
   B01000100,
   B01000100,
   B01000100,
   B01111100,
   B00000100,
   B00000100,
   B00000100
   //--4--//
},
{
   B00000000,
   B01111100,
   B01000000,
   B01000000,
   B01111100,
   B00000100,
   B00000100,
   B01111100
   //--5--//
},
{
   B00000000,
   B01111100,
   B01000000,
   B01000000,
   B01111100,
   B01000100,
   B01000100,
   B01111100
   //--6--//
},
{
   B00000000,
   B01111100,
   B00000100,
   B00000100,
   B00001000,
   B00010000,
   B00010000,
   B00010000
   //--7--//
},
{
   B00000000,
   B01111100,
   B01000100,
   B01000100,
   B01111100,
   B01000100,
   B01000100,
   B01111100
   //--8--//
},
{
   B00000000,
   B01111100,
   B01000100,
   B01000100,
   B01111100,
   B00000100,
   B00000100,
   B01111100
   //--9--//
},
{
   B00000000,
   B00000000,
   B00011000,
   B00011000,
   B00000000,
   B00011000,
   B00011000,
   B00000000
   //--:--//
},
{
   B00000000,
   B00000000,
   B00100000,
   B00000000,
   B00100000,
   B00100000,
   B01000000,
   B00000000
   //--;--//
},
{
   B00000000,
   B00000000,
   B00010000,
   B00100000,
   B01000000,
   B00100000,
   B00010000,
   B00000000
   //--<--//
},
{
   B00000000,
   B00000000,
   B00000000,
   B01111000,
   B00000000,
   B01111000,
   B00000000,
   B00000000
   //--=--//
},
{
   B00000000,
   B00000000,
   B01000000,
   B00100000,
   B00010000,
   B00100000,
   B01000000,
   B00000000
   //-->--//
},
{
   B00000000,
   B00111000,
   B01000100,
   B00000100,
   B00001000,
   B00010000,
   B00000000,
   B00010000
   //--?--//
},
{
   B00000000,
   B00111000,
   B01000100,
   B01011100,
   B01010100,
   B01011100,
   B01000000,
   B00111100
   //--@--//
},
{
  B00000000,
   B00111000,
   B01000100,
   B01000100,
   B01000100,
   B01111100,
   B01000100,
   B01000100
   //--A--//
},
{
   B00000000,
   B01111000,
   B01000100,
   B01000100,
   B01111000,
   B01000100,
   B01000100,
   B01111000
   //--B--//
},
{
   B00000000,
   B00111000,
   B01000100,
   B01000000,
   B01000000,
   B01000000,
   B01000100,
   B00111000
   //--C--//
},
{
   B00000000,
   B01111000,
   B01000100,
   B01000100,
   B01000100,
   B01000100,
   B01000100,
   B01111000
   //--D--//
},
{
   B00000000,
   B01111100,
   B01000000,
   B01000000,
   B01111000,
   B01000000,
   B01000000,
   B01111100
   //--E--//
},
{
   B00000000,
   B01111100,
   B01000000,
   B01000000,
   B01111000,
   B01000000,
   B01000000,
   B01000000
   //--F--//
},
{
   B00000000,
   B00111000,
   B01000100,
   B01000000,
   B01000000,
   B01001100,
   B01000100,
   B00111000
   //--G--//
},
{
   B00000000,
   B01000100,
   B01000100,
   B01000100,
   B01111100,
   B01000100,
   B01000100,
   B01000100
   //--H--//
},
{
   B00000000,
   B00111000,
   B00010000,
   B00010000,
   B00010000,
   B00010000,
   B00010000,
   B00111000
   //--I--//
},
{
   B00000000,
   B00000100,
   B00000100,
   B00000100,
   B00000100,
   B01000100,
   B01000100,
   B00111000
   //--J--//
},
{
   B00000000,
   B01000100,
   B01001000,
   B01010000,
   B01100000,
   B01010000,
   B01001000,
   B01000100
   //--K--//
},
{
   B00000000,
   B01000000,
   B01000000,
   B01000000,
   B01000000,
   B01000000,
   B01000000,
   B01111000
   //--L--//
},
{
   B00000000,
   B01000100,
   B01101100,
   B01010100,
   B01000100,
   B01000100,
   B01000100,
   B01000100
   //--M--//
},
{
   B00000000,
   B01000100,
   B01100100,
   B01010100,
   B01010100,
   B01001100,
   B01000100,
   B01000100
   //--N--//
},
{
   B00000000,
   B00111000,
   B01000100,
   B01000100,
   B01000100,
   B01000100,
   B01000100,
   B00111000
   //--O--//
},
{
   B00000000,
   B01111000,
   B01000100,
   B01000100,
   B01000100,
   B01111000,
   B01000000,
   B01000000
   //--P--//
},
{
   B00000000,
   B00111000,
   B01000100,
   B01000100,
   B01000100,
   B01010100,
   B01001100,
   B00111100
   //--Q--//
},
{
   B00000000,
   B01111000,
   B01000100,
   B01000100,
   B01000100,
   B01111000,
   B01000100,
   B01000100
   //--R--//
},
{
   B00000000,
   B00111000,
   B01000100,
   B01000000,
   B00111000,
   B00000100,
   B01000100,
   B00111000
   //--S--//
},
{
   B00000000,
   B01111100,
   B00010000,
   B00010000,
   B00010000,
   B00010000,
   B00010000,
   B00010000
   //--T--//
},
{
   B00000000,
   B01000100,
   B01000100,
   B01000100,
   B01000100,
   B01000100,
   B01000100,
   B00111000
   //--U--//
},
{
   B00000000,
   B01000100,
   B01000100,
   B01000100,
   B01000100,
   B01000100,
   B00101000,
   B00010000
   //--V--//
},
{
   B00000000,
   B01000100,
   B01000100,
   B01000100,
   B01000100,
   B01010100,
   B01101100,
   B01000100
   //--W--//
},
{
   B00000000,
   B01000100,
   B01000100,
   B00101000,
   B00010000,
   B00101000,
   B01000100,
   B01000100
   //--X--//
},
{
   B00000000,
   B01000100,
   B01000100,
   B01000100,
   B00101000,
   B00010000,
   B00010000,
   B00010000
   //--Y--//
},
{
   B00000000,
   B01111100,
   B00000100,
   B00001000,
   B00010000,
   B00100000,
   B01000000,
   B01111100
   //--Z--//
},
{
   B01100000,
   B01000000,
   B01000000,
   B01000000,
   B01000000,
   B01000000,
   B01000000,
   B01100000
   //--[--//
},
{
   B00000000,
   B01000000,
   B00100000,
   B00100000,
   B00010000,
   B00010000,
   B00001000,
   B00000000
   //--\--//
},
{
   B01100000,
   B00100000,
   B00100000,
   B00100000,
   B00100000,
   B00100000,
   B00100000,
   B01100000
   //--]--//
},
{
   B00010000,
   B00101000,
   B01000100,
   B00000000,
   B00000000,
   B00000000,
   B00000000,
   B00000000
   //--^--//
},
{
   B00000000,
   B00000000,
   B00000000,
   B00000000,
   B00000000,
   B00000000,
   B00000000,
   B00111100
   //--_--//
},
{
   B00000000,
   B00100000,
   B00100000,
   B00010000,
   B00000000,
   B00000000,
   B00000000,
   B00000000
   //--'--//
},
{
   B00000000,
   B00000000,
   B00111000,
   B00000100,
   B00111100,
   B01000100,
   B01000100,
   B00111100
   //--a--//
},
{
   B00000000,
   B00100000,
   B00100000,
   B00100000,
   B00111000,
   B00100100,
   B00100100,
   B00111000
   //--b--//
},
{
   B00000000,
   B00000000,
   B00000000,
   B00011000,
   B00100100,
   B00100000,
   B00100100,
   B00011000
   //--c--//
},
{
   B00000000,
   B00000100,
   B00000100,
   B00000100,
   B00011100,
   B00100100,
   B00100100,
   B00011100
   //--d--//
},
{
   B00000000,
   B00000000,
   B00000000,
   B00011000,
   B00100100,
   B00111100,
   B00100000,
   B00011100
   //--e--//
},
{
   B00000000,
   B00001100,
   B00010000,
   B00010000,
   B00111100,
   B00010000,
   B00010000,
   B00010000
   //--f--//
},
{
   B00000000,
   B00000000,
   B00011100,
   B00100100,
   B00100100,
   B00011100,
   B00000100,
   B00111000
   //--g--//
},
{
   B00000000,
   B01000000,
   B01000000,
   B01000000,
   B01110000,
   B01001000,
   B01001000,
   B01001000
   //--h--//
},
{
   B00000000,
   B00000000,
   B00000000,
   B00001000,
   B00000000,
   B00001000,
   B00001000,
   B00001000
   //--i--//
},
{
   B00000000,
   B00000100,
   B00000000,
   B00000100,
   B00000100,
   B00000100,
   B00100100,
   B00011000
   //--j--//
},
{
   B00000000,
   B00100000,
   B00100100,
   B00100100,
   B00111000,
   B00100100,
   B00100100,
   B00100100
   //--k--//
},
{
   B00000000,
   B00010000,
   B00010000,
   B00010000,
   B00010000,
   B00010000,
   B00010000,
   B00010000
   //--l--//
},
{
   B00000000,
   B00000000,
   B00000000,
   B00000000,
   B01111000,
   B01010100,
   B01010100,
   B01010100
   //--m--//
},
{
   B00000000,
   B00000000,
   B00000000,
   B00000000,
   B00111000,
   B00100100,
   B00100100,
   B00100100
   //--n--//
},
{
   B00000000,
   B00000000,
   B00000000,
   B00011000,
   B00100100,
   B00100100,
   B00100100,
   B00011000
   //--o--//
},
{
   B00000000,
   B00111000,
   B00100100,
   B00100100,
   B00111000,
   B00100000,
   B00100000,
   B00100000
   //--p--//
},
{
   B00000000,
   B00011100,
   B00100100,
   B00100100,
   B00011100,
   B00000100,
   B00000100,
   B00000100
   //--q--//
},
{
   B00000000,
   B00000000,
   B00000000,
   B00000000,
   B00011000,
   B00100100,
   B00100000,
   B00100000
   //--r--//
},
{
   B00000000,
   B00000000,
   B00000000,
   B00011100,
   B00100000,
   B00011000,
   B00000100,
   B00111000
   //--s--//
},
{
   B00000000,
   B00010000,
   B00010000,
   B00111100,
   B00010000,
   B00010000,
   B00010000,
   B00001100
   //--t--//
},
{
   B00000000,
   B00000000,
   B00000000,
   B00000000,
   B00100100,
   B00100100,
   B00100100,
   B00011100
   //--u--//
},
{
   B00000000,
   B00000000,
   B00000000,
   B00000000,
   B00100100,
   B00100100,
   B00100100,
   B00011000
   //--v--//
},
{
   B00000000,
   B00000000,
   B00000000,
   B00000000,
   B01000100,
   B01000100,
   B01010100,
   B00101000
   //--w--//
},
{
   B00000000,
   B00000000,
   B00000000,
   B00100100,
   B00100100,
   B00011000,
   B00100100,
   B00100100
   //--x--//
},
{
   B00000000,
   B00000000,
   B00000000,
   B00100100,
   B00100100,
   B00011100,
   B00000100,
   B00111000
   //--y--//
},
{
   B00000000,
   B00000000,
   B00111100,
   B00000100,
   B00001000,
   B00010000,
   B00100000,
   B00111100
   //--z--//
},
{
   B00011000,
   B00100000,
   B00100000,
   B01000000,
   B00100000,
   B00100000,
   B00100000,
   B00011000
   //--{--//
},
{
   B01000000,
   B01000000,
   B01000000,
   B01000000,
   B01000000,
   B01000000,
   B01000000,
   B01000000
   //--|--//
},
{
   B01100000,
   B00010000,
   B00010000,
   B00001000,
   B00010000,
   B00010000,
   B00010000,
   B01100000
   //--}--//
},
{
   B00000000,
   B00000000,
   B00000000,
   B00110010,
   B01001100,
   B00000000,
   B00000000,
   B00000000
   //--~--//
}};
byte spe_affichage_layout[][8] =
{{
   B01100110,
   B11111111,
   B11111111,
   B11111111,
   B01111110,
   B00111100,
   B00011000,
   B00000000
   //--Coeur fixe--//
},
{
   B00111100,
   B01000010,
   B10100101,
   B10000001,
   B10100101,
   B10011001,
   B01000010,
   B00111100
   //--Smiley 1--//
},
{
   B00000000,
   B01100110,
   B01100110,
   B00000000,
   B00000000,
   B10000001,
   B01000010,
   B00111100
   //--Smiley 2--//
}};
byte affichage[][8] =
{{
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000
  //--Most left--//
},
{
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000
  //--Midle left--//
},
{
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000
  //--Midle right--//
},
{
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000
  //--Most right--//
}};

//char mot[] = "Loon";

void setup()
{
  Serial.begin(9600);
  Serial.println("New-------");
  for (int i = 0; i < 4; i++) {
    lc.shutdown(i,false);  // Wake up displays
    lc.setIntensity(i,1);  // Set intensity levels
    lc.clearDisplay(i);  // Clear Displays
  }
  char mot[] = "Loon_OW";
  charge_affichage(4, mot,0);
}

void loop()
{
  affiche();
  delay(2000);
  char mot[] = "Test 2.0";
  charge_affichage(3,mot,0);
}

void affiche() {
  int aff = 3;
  for (int i=0;i<4;i++) {
    for (int y=0;y<8;y++) {
      lc.setRow(i,y,affichage[aff][y]);
    }
    aff--;
  }
}

void clear_affichage() {
  for (int aff=0;aff<4;aff++) {
    for (int ligne=0;ligne<8;ligne++) {
      for (int biti=0;biti<8;biti++) {
        bitWrite(affichage[aff][ligne],biti,0);
      }
    }
  }
}
void charge_affichage(int free_affichage, char mot[]) {
  //free_affichage : Nombre de zone d'affichage à utiliser pour le texte (0 à 4);
  //mot[] : mot à afficher
  clear_affichage();
  int writen_col = 0;
  free_affichage -= 1;
  int cara_number = 0;
  for (int cara=0;mot[cara]!='\0';cara++) {
    cara_number += 1;
  }
  for (int cara=cara_number-1;cara>=0;cara--) {
    int ascii_code = ((int)mot[cara])-32;
    if (cara!=cara_number-1) {
      for (int ligne=0;ligne<8;ligne++) {
          bitWrite(affichage[free_affichage][ligne],writen_col,0);
      }
      writen_col += 1;
      if (writen_col==8) {
        writen_col = 0;
        if (free_affichage==0) {
          cara = -1;
        } else {
          free_affichage -= 1;
        }
      }
    }
    if (cara>=0) {
      if (ascii_code == 0) {
        for (int ligne=0;ligne<8;ligne++) {
            //bitWrite(affichage[free_affichage][ligne],writen_col,0);
        }
        //writen_col += 1;
      }
      for (int col=0;col<8;col++) {
        byte tempbyte = B00000000;
        for (int ligne=0;ligne<8;ligne++) {
          bitWrite(tempbyte,ligne,bitRead(ascii[ascii_code][ligne],col));
        }
        //Serial.println(tempbyte,BIN);
        if (tempbyte!=0) {
          //Serial.println(tempbyte,BIN);
          for (int ligne=0;ligne<8;ligne++) {
            bitWrite(affichage[free_affichage][ligne],writen_col,bitRead(tempbyte,ligne));
            //Serial.println(affichage[0][j],BIN);
          }
          writen_col += 1;
          if (writen_col==8) {
            writen_col = 0;
            if (free_affichage==0) {
              col = 8;
              cara = -1;
            } else {
              free_affichage -= 1;
            }
          }
        }
      }
    }
  }
}

void charge_affichage_special(int spe_aff_number) {
  //spe_aff_number : numéro de l'affichage spécial à afficher
  clear_affichage();
  affichage[3][] = spe
  int writen_col = 0;
  free_affichage -= 1;
  int cara_number = 0;
  for (int cara=0;mot[cara]!='\0';cara++) {
    cara_number += 1;
  }
  for (int cara=cara_number-1;cara>=0;cara--) {
    int ascii_code = ((int)mot[cara])-32;
    if (cara!=cara_number-1) {
      for (int ligne=0;ligne<8;ligne++) {
          bitWrite(affichage[free_affichage][ligne],writen_col,0);
      }
      writen_col += 1;
      if (writen_col==8) {
        writen_col = 0;
        if (free_affichage==0) {
          cara = -1;
        } else {
          free_affichage -= 1;
        }
      }
    }
    if (cara>=0) {
      if (ascii_code == 0) {
        for (int ligne=0;ligne<8;ligne++) {
            //bitWrite(affichage[free_affichage][ligne],writen_col,0);
        }
        //writen_col += 1;
      }
      for (int col=0;col<8;col++) {
        byte tempbyte = B00000000;
        for (int ligne=0;ligne<8;ligne++) {
          bitWrite(tempbyte,ligne,bitRead(ascii[ascii_code][ligne],col));
        }
        //Serial.println(tempbyte,BIN);
        if (tempbyte!=0) {
          //Serial.println(tempbyte,BIN);
          for (int ligne=0;ligne<8;ligne++) {
            bitWrite(affichage[free_affichage][ligne],writen_col,bitRead(tempbyte,ligne));
            //Serial.println(affichage[0][j],BIN);
          }
          writen_col += 1;
          if (writen_col==8) {
            writen_col = 0;
            if (free_affichage==0) {
              col = 8;
              cara = -1;
            } else {
              free_affichage -= 1;
            }
          }
        }
      }
    }
  }
}
