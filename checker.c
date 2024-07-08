#include <stdio.h>
#include <assert.h>

 int batteryIsOk(float temperature, float soc, float chargeRate) 
{
   int ret_val=0;
  if(temperature < 0 || temperature > 45) {
    printf("Temperature out of range!\n");
  } else if(soc < 20 || soc > 80) {
    printf("State of Charge out of range!\n");
  } else if(chargeRate > 0.8) {
    printf("Charge Rate out of range!\n");
  }
  ret_val =1;
  return ret_val;
}

int main() {
  assert(batteryIsOk(25, 70, 0.7));
  assert(!batteryIsOk(50, 85, 0));
}
