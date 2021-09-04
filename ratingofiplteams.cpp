#include <iostream>
#include<string>
using namespace std;

int main()
{
    int mi = 1;
    int dc = 2;
    int srh = 3;
    int rcb = 4;
    int kkr = 5;
    int pbks = 6;
    int csk = 7;
    int rr = 8;
    cout << "Enter the rank and see the team: ";
    int rank;
    cin >> rank;
    string result;
    result = (rank == mi) ? "MI" : (rank == dc) ? "DC" : (rank == srh) ? "SRH" : (rank == rcb) ? "RCB" : (rank == kkr) ? "KKR" : (rank == pbks) ? "PBKS" : (rank == csk) ? "CSK" : "RR";
    cout << result;
}