#include <iostream>
using namespace std;
#include "crc.h"

int main(){
  string trame;
  cout<<"Quelle trame voulez vous vérifier ? "<<endl;
  getline(cin,trame);
  cout<< hex <<crc16(trame)<<endl;
}
