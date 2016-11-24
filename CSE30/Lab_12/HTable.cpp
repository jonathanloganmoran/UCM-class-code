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
  int index = k % max_size;
  return index;
}

int HTable::rehash(int &k) {
  int index = (k+1) % max_size;
  return index;
}


int HTable::add(data &d) {

  if (numel == max_size) {
    //Table is full
    return -1;
  } else {
    //find the correct index to add data
    //hint: use for/while loop here
      
      for (int i = 0; i < max_size; i++) {
	int index = hash(i);
	if (dt[index].key == -1) {
	  dt[index] = d;
	  numel++;
	  return 0;
	} else if (dt[index].key != -1) {
	    for (int j = i; j < max_size; j++) {
	      int reHashIdx = rehash(j);
	      if (dt[reHashIdx].key == -1) {
		dt[reHashIdx] = d;
		numel++;
		return 0;
	      }
	    }
	    return -1;
	}



      }
  }
}

int HTable::remove(data &d) {

  if (numel == 0) {
    //Table is empty
    return -1;
  } else {
      //find the correct index to remove data
      //hint: use for/while loop here
      for (int i = 0; i < max_size; i++) {
	int index = rehash(i);
	if (dt[index].key == d.key) {
	  dt[index].key = -1;
	  dt[index].value = "N/A";
	  numel--;
	  return 0;
	}
      }
      return -1;
  }
}


void HTable::output() {

cout << "Table of Contents:" << endl;
for (int i = 0; i < max_size; i++) {
  cout << i << " -> " << dt[i].key << " " << dt[i].value << endl;
}

cout << "There are " << numel << " data elements in the table" << endl;






}





