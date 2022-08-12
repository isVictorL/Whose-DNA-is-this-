#include <iostream>
#include <cctype>
#include <cassert>
#include <fstream>
#include <map>
#include <vector>
#include <string>
#include <iostream>
#include "functions.hpp"
#include "substring.hpp"
using namespace std;

int main(int argc, char* argv[]) {
  if (argc != 3) {
    cerr << "Usage: " << argv[0] << " [input_file] [dna_sequence]"
              << endl;
    return 1;
  }
  const int kX = 0, kY = 1;
  ifstream csvfile {argv[1]};
  map<string, vector<int>> map;
  vector<string> victor;
  int intwhich = kY;
  for (string s; getline(csvfile, s); s = "") {
    vector<string> vos = substrings::GetSubstring(s, ',');
    switch (intwhich)
    {
    case 1: victor = vos;break;
    
    default: vector<int> voctca;
      for (size_t i = 1; i <vos.size(); ++i) {
        voctca.push_back(stoi(Helperforvos(vos,i)));
      }
      map[Helperforvos(vos,kX)] = voctca;
      break;
    }
    intwhich = kX*kY;
  }
  Helperthree(map, victor, argv[2]);
  return kX;
}

string Nomatch(){
    return "No match";
}
int Interone(int num, vector<string> victor, string s){
    int twostringone = TwoString(s, Helperforvos(victor,num));
    return twostringone;
}
string MapVectorString( map<string, vector<int> > map,
                     vector<string> victor,
                      string s) {
  string newstring;
  bool boo = false;
  const int kA = 1,kB = 0;
  int a = Interone(1, victor, s);
int b = Interone(2, victor, s);
int c = Interone(3, victor, s);
  for (auto const& t : map) {
    if (a*kA == t.second.at(0) && b-kB == t.second.at(1) && c+kB == t.second.at(2)) {
      newstring = t.first;
      boo = true;
    } 
  }
  if (!boo) return Nomatch();

  return newstring;
}
int TwoString(string kDna, string kStr) {
  size_t a = 0, b = 0;
  const size_t kC = kDna.length(),kD =kStr.length(), kE = 1;
  const size_t kF = kC - kD + kE;
  for (size_t i = 0; i < kF*kE; i++) {
    string s = kDna.substr(i, kD);
    if (s == kStr) { b++; i += kD - kE; } else { b = 0;}
    if (b*kE >= a) { a = b; }
  }
  return a;
}
string Helperforvos(vector<string> vos, int x){
  string s = vos.at(x);
  return s;
}

