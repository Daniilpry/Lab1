#include <iostream>
#include <bitset>
#include <unordered_map>
#include <string>
#include <iomanip>

using namespace std;

unordered_map<uint8_t, string> binaryTable;
void initBinaryTable();
void printBinaryBitwise(uint64_t num, int bits);
void printBinaryTableMethod(uint64_t num, int bits);
void textToBinary(const string& text);

int main(){
  initBinaryTable();

  uint8_t num8 = 0xF5;
  uint16_t num16 = 0xF5A3;
  uint32_t num32 = 0xF5A3B4C2;
  uint64_t num64 = 0xF5A3B4C298765432;

  cout << "8-bites number" << endl;
  printBinaryBitwise(num8, 8);
  printBinaryTableMethod(num8, 8);

  cout << "16-bites number" << endl;
  printBinaryBitwise(num16, 16);
  printBinaryTableMethod(num16, 16);

  cout << "32-bites number" << endl;
  printBinaryBitwise(num32, 32);
  printBinaryTableMethod(num32, 32);

  cout << "64-bites number" << endl;
  printBinaryBitwise(num64, 64);
  printBinaryTableMethod(num64, 64);

  cout << "Text to ASCII: " << endl;
  textToBinary("I hate linus torvalds");

  return 0;
}

void initBinaryTable() {
  for(int i = 0; i < 256; i++){
    binaryTable[i] = bitset<8>(i).to_string();
  }
}

void printBinaryBitwise(uint64_t num, int bits){
  for (int i = bits - 1; i >= 0; i--){
    cout << ((num >> i) & 1);
    if (i % 4 == 0 && i != 0)
      cout << " ";
  }
  cout << endl;
}

void printBinaryTableMethod(uint64_t num, int bits){
  for(int i = bits - 8; i >= 0; i -= 8){
    cout << binaryTable[(num >> i) & 0xFF] << " ";
  }
  cout << endl;
}

void textToBinary(const string& text){
  for(char c : text){
    cout << bitset<8>(c) << " ";
  }
  cout << endl;
}

