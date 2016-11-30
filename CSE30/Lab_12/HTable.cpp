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
	int inputKey = d.key; // key from input of this method
	string inputValue = d.value; // value from input of this method

	int index = hash(inputKey); //index to put data in
	
	//If there is no collision
	if (dt[index].key == -1) {
	    dt[index].key = inputKey;
	    dt[index].value = inputValue;
	    numel++;
	    return 0;
	}

	// if there is a collision, the below will execute

	int newIndex = rehash(inputKey); // get new index (+1)
	int i = newIndex;

	while (i < max_size) {
	    //if there is an open spot
	    if (dt[i].key == -1) {
		dt[i].key = inputKey;
		dt[i].value = inputValue;
		numel++;
		return 0;
	    }
	    i++;
	}

	//now, for the wrap around
	for (int j = 0; j < newIndex; j++) {
	    if (dt[i].key == -1) {
		dt[i].key = inputKey;
		dt[i].value = inputValue;
		numel++;
		return 0;
	    }
	}

	//If we get here, then everything is filled up, so
	return -1;
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
	if (dt[i].key == d.key) { // if key is found, remove it
	  dt[i].key = -1;
	  dt[i].value = "N/A";
	  numel--; //element removed
	  return 0;
	}
      }

      //if we get here, then nothing was removed.
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





