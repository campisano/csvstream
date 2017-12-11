/* csvstream_example1.cpp
 *
 * Andrew DeOrio <awdeorio@umich.edu>
 *
 * An easy-to-use CSV file parser for C++
 * https://github.com/awdeorio/csvstream
 */

#include "csvstream.h"
#include <iostream>
#include <string>
#include <map>
using namespace std;


int main() {
  // Open file
  csvstream csvin("csvstream_example.csv");

  // vector a pair, which have key = column name, value = cell datum
  vector<pair<string, string>> row;

  // Extract the "animal" column
  while (csvin >> row) {
    cout << row[1].second << "\n"; // print only the values in the second col
  }

}
