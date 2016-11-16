#include <iostream>
#include "HTable.h"
using namespace std;

HTable::HTable() {
  max_size = 23;
  numel = 0;

  dt = new data[max_size]; //dynamic array that stores pointers of type 'data'
  for (int i = 0; i < max_size; i++) {
    dt[i].key = -1;
    dt[i].value = "N/A";
  }
}

HTable::HTable(int t_size) {
  //set max_size the same as t_size
  //initialize numel and dt

  max_size = t_size;
  numel = 0;

  dt = new data[max_size];
  for (int i = 0; i < max_size; i++) {
    dt[i].key = -1;
    dt[i].value = "N/A";
  }
}

int HTable::hash(int &k) {
  




}















