#include <iostream>
using namespace std;
/*string quality(char input) {*/
/*  switch (input) {*/
/*    case 'a':*/
/*    return "SD";*/
/*    break;*/
/*    case 'b':*/
/*    return "HD";*/
/*    break;*/
/*    case 'c':*/
/*    return "UHD";*/
/*    break;*/
/*    case 'd':*/
/*    return "4K";*/
/*    break;*/
/*    default:*/
/*    return "SD";*/
/*      break;*/
/*  }*/
/*}*/

int main() {
  char inputChannel = 'a', inputQuality = 'b';
  string quality, channel;
  if (inputChannel == 'a') {
    channel = "RCTI";
  } else if (inputChannel == 'b') {
    channel = "SCTV";
  } else if (inputChannel == 'c') {

    channel = "Indosiar";
  } else if (inputChannel == 'd') {
    channel = "TransTv";

  } else if (inputChannel == 'e') {
    channel = "ANTV";
  } else {
    channel = "Invalid Input";
  }
  switch (inputQuality) {
  case 'a':
    quality = "SD";
    break;
  case 'b':
    quality = "HD";
    break;
  case 'c':
    quality = "UHD";
    break;
  case 'd':
    quality = "4k";
    break;
  default:
    quality = "SD";
    break;
  }
  cout << "Anda memilih channel " << channel << " dengan kualitas " << quality
       << endl;
  return 0;
}
