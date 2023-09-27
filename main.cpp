#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    fstream outfile;

    outfile.open("index.html", ios::out);

    // Personal Details _______________________________________________________________________________________________

    outfile << "<!DOCTYPE html><html><head><title>Resume</title><style>*{margin:0;padding:0;box-sizing:border-box;}body{font-family:Arial, sans-serif;background-color:#f4f4f4;}header{background-color:#007BFF;color:#fff;text-align:center;padding:40px 0;}.header-content{max-width:800px;margin:0 auto;}h1{margin:0;font-size:36px;}p{font-size:18px;margin-top:10px;}ul.contact{list-style:none;padding:10px 0;}ul.contact li{margin-bottom:5px;}main{max-width:800px;margin:20px auto;background-color:#fff;padding:20px;border-radius:5px;box-shadow:0px 0px 10px rgba(0,0,0,0.2);}h2{color:#007BFF;font-size:24px;margin-top:20px;}.entry,.project,.job{margin-bottom:20px;}.entry h3,.project h3,.job h3{color:#333;font-size:20px;margin-bottom:5px;}ul{list-style:none;padding-left:20px;}ul li{margin-bottom:5px;}</style></head><body><header><div class=\"header-content\"><h1>";

    // Name -> 
    cout << "Enter your Name : ";
    string name;
    getline(cin, name);
    outfile << name <<endl;

    // Emal Id -> 
    outfile << "</h1><p>Computer Engineering Student</p><ul class=\"contact\"><li> Email: ";
    cout << "Enter your Email-ID : ";
    string email;
    getline(cin, email);
    outfile << email <<endl;

    // Mobile No -> 
    outfile << "</li><li> Phone: ";
    cout<<"Enter your phone Number : ";
    string mobile;
    // cin.ignore();
    getline(cin, mobile);
    outfile << mobile;

    // Linkedin -> 
    outfile << "</li><li>LinkedIn: <a href=\"";
    cout << "Enter the linkedin Link :";
    string linkedin;
    getline(cin, linkedin);
    outfile << linkedin;
    outfile << "\" target=\"_blank\">LinkedIn Profile</a></li><li>GitHub: <a href=\"";

    // Github -> 
    cout << "Enter the link of Github : ";
    string github;
    getline(cin, github);
    outfile << github;
    outfile << "\" target=\"_blank\">GitHub Profile</a></li></ul></div></header>";


    
    // 1. Education ______________________________________________________________________________________
    cout << endl << endl;
    outfile << "<main><section id=\"education\"><h2>Education</h2><div class=\"entry\"><h3>BS in Computer Engineering</h3><p>";

    // College Name --->
    cout << "Enter your College Name, City and State : ";
    string college_name;
    getline(cin, college_name);
    outfile << college_name;

    // Year of graduation -->
    outfile << "</p><p>Expected Graduation : ";
    cout << "Enter the year of Graduation : ";
    string year;
    getline(cin, year);
    outfile << year;

    // Skills __________________________________________________________________________________________
    cout << endl << endl;
    outfile << "</p></div></section><section id=\"skills\"><h2>Skills</h2><ul><li>Programming Languages : ";

    // Programming Skills -> 
    cout << "Enter your Programming Language skills (Ex: C/C++, Java, etc) : ";
    string programming_skills;
    getline(cin , programming_skills);
    outfile << programming_skills;

    // Tech Skiils -> 
    outfile << "</li><li>Tech Skills : ";
    cout << "Enter your Tech skills (Ex: Data Structures, OOPS, etc ) : ";
    string tech_skills;
    getline(cin , tech_skills);
    outfile << tech_skills;

    // Operating System _> 
    outfile << "</li><li>Operating Systems : ";
    cout << "Enter OS in which you are comfortable with : ";
    string operating_system;
    getline(cin , operating_system);
    outfile << operating_system;

    // Soft Skills -> 
    outfile << "</li><li>Soft Skills : ";
    cout << "Enter soft skills : ";
    string soft_skills;
    getline(cin , soft_skills);
    outfile << soft_skills;
    outfile << "</li></ul></section>";

    // Projects _____________________________________________________________________________________
    cout << endl << endl;
    outfile << "<section id=\"projects\"><h2>Projects</h2><div class=\"project\"><h3>";
    // Project 1 : 
    cout << "Enter Project 1 Name : ";
    string project1;
    getline(cin, project1);
    outfile << project1 ;
    outfile <<"</h3><p>";

    cout << "Enter the description of 1st project : ";
    string project1_desc;
    getline(cin, project1_desc);
    outfile << project1_desc;
    outfile << "</p></div><div class=\"project\"><h3>";
    cout << endl;

    // Project 2: 
    cout << "Enter Project 2 Name : ";
    string project2;
    getline(cin, project2);
    outfile << project2;
    outfile <<"</h3><p>";

    cout << "Enter the description of 2nd project : ";
    string project2_desc;
    getline(cin, project2_desc);
    outfile << project2_desc;
    outfile << "</p></div></section>";

    // Experience ____________________________________________________________________________________
    cout << endl << endl;
    outfile << "<section id=\"experience\"><h2>Experience</h2><div class=\"job\"><h3>";
    cout << "Enter the Internship/Job Title : ";
    string experience_1;
    getline(cin, experience_1);
    outfile << experience_1;
    outfile << "</h3><p>";

    cout << "Enter the company Name, city : ";
    string company_name_1;
    getline(cin, company_name_1); 
    outfile << company_name_1;
    outfile << "</p><p>";

    cout << "Enter the Time Period : ";
    string time_period_1;
    getline(cin, time_period_1);
    outfile << time_period_1;
    outfile << "</p><p>";

    cout << "Enter the Description of responsibilities and achievements:  ";
    string experience_1_desc;
    getline(cin, experience_1_desc);
    outfile << experience_1_desc;
    outfile << "</p></div></section>";
    
    outfile.close();
    return 0;
}
