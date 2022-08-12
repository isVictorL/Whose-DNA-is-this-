#ifndef FUNCTIONS_HPP
#define FUNCTIONS_HPP

#include "substring.hpp"
#include <string>
#include <vector>
#include <map>
using namespace std;
const int kC = 1;
vector<vector<string> > Importer(const string& contents);
int Analyzer(const string& str, const string& seq);

int TwoString( string kDna, string kStr);
string MapVectorString( map<string, vector<int> > map,
                     vector<string> victor,
                      string s);
void Help(vector<string> vos, vector<int> voi);
int Interone(int num,  vector<string> victor,  string s);
string Nomatch();
vector<vector<string> > Input(const string& input);
string CSVV(string s, string t);
string Helperforvos(vector<string> vos, int x);
void Helperthree(map<string, vector<int> > map,
                     vector<string> victor,
                      string s);
#endif