class TwiPinPair {
  private:
    uint32_t _dataPin;
    uint32_t _clockPin;
  public:

    TwiPinPair(uint32_t dataPin, uint32_t clockPin) {
      _dataPin = dataPin;
      _clockPin = clockPin;
    }

    void initSetPins() {
      pinMode(_dataPin, OUTPUT);
      pinModeTest(_dataPin, OUTPUT);
      pinMode(_clockPin, OUTPUT);
      pinModeTest(_clockPin, OUTPUT);
      digitalWrite(_dataPin, HIGH);
      digitalWrite(_clockPin, LOW);

      //REG_PORT_DIR0 |= (1 << _dataPin) | (1 << _clockPin);
      //REG_PORT_OUT0 |= (1 << _dataPin);
      //REG_PORT_OUT0 &= ~(1 << _clockPin);
    }

    void invertPins() {
      //REG_PORT_OUT0 ^= (1 << _dataPin);
      //REG_PORT_OUT0 ^= (1 << _clockPin);
      digitalWrite(_dataPin, !(digitalRead(_dataPin)));
      digitalWrite(_clockPin, !(digitalRead(_clockPin)));
    }
};
