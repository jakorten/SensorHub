void pinModeTest( uint32_t ulPin, uint32_t ulMode )
{
  
  // Handle the case the pin isn't usable as PIO
  Serial.print("D");
  Serial.print(ulPin);
  if ( g_APinDescription[ulPin].ulPinType == PIO_NOT_A_PIN )
  {
    Serial.print(" is not usable as PIO");
    Serial.println();
    return ;
  }

  EPortType port = g_APinDescription[ulPin].ulPort;
  uint32_t pin = g_APinDescription[ulPin].ulPin;
  uint32_t pinMask = (1ul << pin);
 
  Serial.print(", P");
  char portLetter = 'A';
  portLetter += port;
  Serial.print(portLetter);
  Serial.print(pin);
  /*
  Serial.print(" Mask: ");
  Serial.print(pinMask, BIN);
  */
  Serial.println();
}
