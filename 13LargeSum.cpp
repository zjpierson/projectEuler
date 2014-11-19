#include <cstdlib>
#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char **argv)
{
    ifstream fin;
    char buffer[10] = {0};
    long long numbers[100][5] = {0};

    if(argc != 2)
    {
        cout << "Usage: 13LargeSum  <inputFile>" << endl;
        return 1;
    }

    fin.open(argv[1], ios::in);
    if(!fin)
    {
        cout << "ERROR: could not open " << argv[1] << endl;
        cout << "Usage: 13LargeSum  <inputFile>" << endl;
        return 2;
    }

    for(int i = 0; i < 100; i++)
    {
        cout << i << ":  ";
        for(int j = 0; j < 5; j++)
        {
            fin.readsome(buffer, 10);
            numbers[i][j] = atoll(buffer);
            cout << numbers[i][j];
        }
        cout << endl;
        fin.ignore();
    }


    fin.close();
    return 0;
}
