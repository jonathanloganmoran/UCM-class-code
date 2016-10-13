#include <fstream>
using namespace std;

int main()
{
    ifstream file_in; 
    file_in.open("words_in.txt");
    string line;
    int count = 0; // this is for finding the number of lines in a text file.
    if ( file_in.is_open() ) {
    	while (!file_in.eof()) {
    	    getline(file_in, line);
    	    count++;
    	}
    }
    file_in.close();

    string *arr = new string[count];

    file_in.open("words_in.txt");
    if ( file_in.is_open() ) {
    	while ( !file_in.eof() ) {
    	    for (int i = 0; i < count; i++) {
    		    getline(file_in, arr[i]);
    	    }
    	}
    }



    ofstream file_out;
    file_out.open("words_out.txt");
    for (int i = 0; i < count; i++) {
	   file_out << arr[i] << endl;
    }
    file_out.close();


return 0;

}
