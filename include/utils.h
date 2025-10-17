#include <iostream>
#include <string>
using namespace std;

string printHeader(const string &heading) {
    string value = "\n====== " + heading + " ======\n";
    cout << value; 
    return value;
}

void OwnerMenu(int &choice) {
    printHeader("OWNER MENU");
    cout << "1 - Login\n";
    cout << "2 - Sign Up\n";
    cout << "Please select an option: ";
    cin >> choice;
}

void LoginMenu(string &name, string &password) {
    printHeader("LOGIN MENU");
    cin.ignore();
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Enter your password: ";
    getline(cin, password);
}

void SignUpMenu(int &id, string &name, string &password, string &bio, string &status, int &balance) {
    printHeader("SIGNUP MENU");
    cin.ignore();
    cout << "Enter your name: ";
    getline(cin, name);
    string confirmPassword;
    while(true){
        cout << "Enter your password: ";
        getline(cin, password);
        cout << "Enter your password again: ";
        getline(cin, password);
        if(confirmPassword == password){
            break;
        }
        else{
            cout << "Password do not match. Please try again!";
        }
    }
    cout << "Enter your bio: ";
    getline(cin, bio);
    cout << "Enter your status: ";
    getline(cin, status);
    cout << "Enter your initial balance: ";
    cin >> balance;
}

void MainMenu(int &choice) {
    printHeader("MAIN MENU");
    cout << "1 - User Analysis\n";
    cout << "2 - Market Analysis\n";
    cout << "3 - Pet Analysis\n";
    cout << "0 - Exit\n";
    cout << "Please choose any one of them: ";
    cin >> choice;
}

void UserAnalysisMenu(int &choice) {
    printHeader("USER ANALYSIS MENU");
    cout << "1 - Get User Information\n";
    cout << "2 - Get All Your Pets Info\n";
    cout << "3 - Feed Any Pet\n";
    cout << "4 - Check Your Balance\n";
    cout << "5 - Update Your Info\n";
    cout << "6 - Delete Your Account\n";
    cout << "7 - Kill Any Pet\n";
    cout << "8 - Back\n";
    cout << "Please enter your choice: ";
    cin >> choice;
}

void MarketAnalysisMenu(int &choice) {
    printHeader("MARKET ANALYSIS");
    cout << "1 - Get All Pets Available\n";
    cout << "2 - Buy a New Pet\n";
    cout << "3 - Leave Market\n";
    cout << "Please enter your choice: ";
    cin >> choice;
}

void PetMenu(int &choice) {
    printHeader("PET MENU");
    cout << "1 - Get All Your Pets\n";
    cout << "2 - Update Pet Characteristics\n";
    cout << "3 - Feed Pet\n";
    cout << "4 - Play with Pet\n";
    cout << "5 - Kill Your Pet\n";
    cout << "0 - Back\n";
    cout << "Please select any option: ";
    cin >> choice;
}