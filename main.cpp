#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    fstream outfile;

    outfile.open("resume.html", ios::out);

    // Name --------------------------------------------------------------------------------->

    outfile << "<!DOCTYPE html><html><head><title>Resume</title><style>*{margin:0;padding:0;box-sizing:border-box;}body{font-family:Arial, sans-serif;background-color:#f4f4f4;}header{background-color:#007BFF;color:#fff;text-align:center;padding:40px 0;}.header-content{max-width:800px;margin:0 auto;}h1{margin:0;font-size:36px;}p{font-size:18px;margin-top:10px;}ul.contact{list-style:none;padding:10px 0;}ul.contact li{margin-bottom:5px;}main{max-width:800px;margin:20px auto;background-color:#fff;padding:20px;border-radius:5px;box-shadow:0px 0px 10px rgba(0,0,0,0.2);}h2{color:#007BFF;font-size:24px;margin-top:20px;}.entry,.project,.job{margin-bottom:20px;}.entry h3,.project h3,.job h3{color:#333;font-size:20px;margin-bottom:5px;}ul{list-style:none;padding-left:20px;}ul li{margin-bottom:5px;}footer{text-align:center;margin-top:20px;color:#888;}</style></head><body><header><div class=\"header-content\"><h1>";

    cout << "Enter your Name: ";
    string name;
    getline(cin, name);
    outfile << name <<endl;

    outfile << "</h1><p>Computer Engineering Student</p><ul class=\"contact\"><li> Email: ";

    cout << "Enter your Email-ID: ";
    string email;
    cin >> email;
    outfile << email <<endl;

    outfile << "</li><li> Phone: ";

    cout<<"Enter your phone Number : ";
    string mobile;
    cin.ignore();
    getline(cin, mobile);
    outfile << mobile;

    outfile << "</li><li>LinkedIn: <a href=\"";

    cout << "Enter the linkedin Link:";
    string linkedin;
    // cin.ignore();
    getline(cin, linkedin);
    outfile << linkedin;

    outfile << "\" target=\"_blank\">LinkedIn Profile</a></li><li>GitHub: <a href=\"";

    cout << "Enter the link of Gihub: ";
    string github;
    getline(cin, github);
    outfile << github;

    outfile << "\" target=\"_blank\">GitHub Profile</a></li></ul></div></header>";

    // -------------------------------------------------------------------------------------> 
    
    // 1. Education
    // 2. Skills
    // 3. Projects 
    // 4. Experience

    outfile << "</body></html>";

    outfile.close();
    return 0;
}
