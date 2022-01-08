#include <iostream>

using namespace std;
#include "crc.h"

uint const POLYNOME = 0xA001;
int crc16(string trame)
{
  int j = 0;
uint crc = 0xFFFF;
  do{

    int octet_a_traiter=trame[j];
    crc=crc^(uint)octet_a_traiter;
    for(int i=8;i != 0;i--){
      if(crc%2 !=0){
        crc=(crc>>1);
        crc^= POLYNOME;
    }
      else{
        crc>>=1;

      }
    }
    j++;

  }while (trame.size()>j);
return crc;
}
