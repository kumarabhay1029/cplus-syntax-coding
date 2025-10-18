#include <iostream>

float conversion(float bpm) {
  std::cout << "BPM to Seconds Per Beat conversion: \n";
  std::cout << "Enter BPM: ";
  std::cin >> bpm;

  float secPRbt = 60 / bpm;
  return secPRbt;
}

int main() {
  float bpm = 0;
  float secondsPerBeat = conversion(bpm);
  std::cout << "Seconds per beat: " << secondsPerBeat;
  return 0;
}