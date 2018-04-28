#include <iostream>

using namespace std;

int main(){
  int iTotTerr, iTotSum = 0;
  cin >> iTotTerr;
  int iLand[iTotTerr];
  for (int i = 0; i < iTotTerr; i++){
    cin >> iLand[i];
    iTotSum += iLand[i];
  }
  iTotSum /= 2;
  for (int i = 0; i < iTotTerr; i++){
    iTotSum -= iLand[i];
    if(iTotSum == 0) {
        printf("%i\n", i+1);
        break;
    }
  }
  return 0;
}
