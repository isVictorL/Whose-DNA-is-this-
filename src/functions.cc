#include "functions.hpp"
#include "substring.hpp"
#include <vector>
#include <string>
using  namespace std;
#include "functions.hpp"
#include <iostream>

void Helperthree(map<string, vector<int> > map,
                     vector<string> victor,
                      string s){
  (void)map;
  (void)victor;
  (void)s;
   cout << MapVectorString(map, victor, s) << endl;  
                      }                  
void Help(vector<string> vos, vector<int> voi){
  for (size_t i = 1; i < vos.size(); ++i)
  {
    voi.push_back(stoi(vos.at(i)));
  }
  
}                  