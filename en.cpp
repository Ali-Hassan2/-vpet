#include<iostream>
#include<string>
using namespace std;

class owner{

    private:
    int id;
    string name;
    string bio:
    string status;
    int balance;

    public:
    owner(){
        this->id = 0;
        this->name = "";
        this->bio = "";
        this->status = "";
        this->balance = ""
    }

    owner(int id, string name, string bio, string status, int balance){
        this->id = id;
        this->name = name;
        this->bio = bio;
        this->status = status;
        this->balance = balance
    }

    void createYouAccount(){};
    void LoginToSystem(){};
    void getBalance(){}
    void checkTransactions(){}
} 

class pet {
    private: 
    int id;
    string category;
    string name;
    int feedLevel;
    int eneryLevel;
    string color;
    int price;

    public:

    pet(){
        this-> id = 0;
        this-> category = "";
        this-> name = "";
        this -> feedLevel = 0;
        this -> eneryLevel = 0; 
        this-> color = "";
        this-> price = 0
    }

    pet(int id, string category, string name, string feedLevel, string eneryLevel, string color, int price){
        this -> id = id;
        this-> category = category;
        this -> name = name;
        this-> feedLevel = feedLevel;
        this -> eneryLevel = eneryLevel;
        this  -> color = color;
        this -> price = price;
    }

   void buyNewPet(){};
   void ViewAllPets(){};
   void ViewPetEnergyLevel(int id);
   int getEneryLevel(int petId) {};
   int getFeedLevel(int petId) {};
   void FeedPet (int petId) {};
   void UpdateEneryLevel(int petId){};
   void KillYourPet (int petId) {};
}

class market{
    private:
    string marketName;
    string markedDescription;
    string pets[];

    public:
    market(){
        this->marketName = "";
        this->markedDescription = "";
        this.
    }
    void BuyPet(int petId) {};
    void UpdatePetsData () {}; 
}
