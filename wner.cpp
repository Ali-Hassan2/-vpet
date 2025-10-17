#include "../include/owner.hpp"
#include "../include/utils.h"
#include <string>
#include <fstream>
#include <vectors>

using namespace std;

Owner:: Owner(){
    id = 0;
    name = "";
    bio = "";
    status = "";
    balance = "";
}

Owner::Owner(int id, string name, string bio, string status, int balance){
    this-> id = id;
    this-> name = name;
    this-> bio = bio;
    this-> status = status;
    this-> balance = balance;

}

void Owner:: createYouAccount(){
    int lastId = 0;
    ifstream infile('../data/owner.txt');
    string line;
    while(getline(infile,line)){
        if(!line.empty()){
            size_t commaPos = line.find(',')
            if(commaPos != string::npos){
                string idString = line.substr(0,commaPos)
                try{
                    lastId = stoi(idString)
                }
                catch(...){
                    lastId = 0;
                }
            }
        }
    }
    infile.close();
    id = lastId + 1;
    cin.ignore();
    cout << "Your Id is: " << id << endl;  
    cout << "Please enter your name: " ;
    getline(cin,name);
    cout << "Please enter your bio: ";
    getline(cin,bio);
    cout << "Please enter your status: ";
    getline(cin,status)
    cout << "Please enter your initial balance: ";
    cin >> balance;

    ofstream file("../data/owner.txt",ios::app)
    if(file.is_open()){
        file << id << ", " << name << ", " << bio << ", " << status << ", "<< balance << endl;
        file.close();
        cout << "owner saved."
    }
    else
    {
        cout << "Cannot save user."
    }

}