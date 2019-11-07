/* Author: Denice Veluz
Course: CSCI - 235
Instructor: Ligorio
Assignment: Project 2: Roster.cpp
*/

#include "Roster.hpp"
#include "Student.hpp"
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
//default constructor for empty roster 
                    /**parameterized constructor
                    * @pre the input file is expected to be in CSV
                    (comma separated value) where each line has format:
                    “id,first_name_,last_name\n"
                    @param input_file_name the name of the input csv file
                    @post Student objects are added to roster as per the data
                    in the input file
                    **/
Roster::Roster(){ 
}
/**@post displays all students in roster, one per line 
in the form "first_name_last_name\n"
**/
Roster::Roster(std::string input_file_name){ 
    std::ifstream fin(input_file_name);
    std::string student;

     /** //@pre function that reads from the csv file
//@post when it goes through the while loop, it reads through each line
//and each time it does that, it stores it into student
//@return 
                                **/
    while(getline(fin,student)) 
    {
        std::stringstream student_new(student); //Turns student into a stream so that it can be used in getline
        std::string ID;
        std::string firstname;
        std::string lastname;

        getline(student_new,ID,','); //Reads the ID until it reaches the comma (delimiter)
        getline(student_new,firstname,','); //Reads the first name until it reaches the comma (delimiter)
        getline(student_new,lastname); //Reads thelast name, but doesnt need a delimiter since it is the very last variable
        /*Creates an object of type Student and 
    uses the parameterized contructor to intialize those values */
        Student student_another(std::stoi(ID), firstname, lastname); 
        add(student_another); //Adds another student to the array bag
    }
}

/*//@pre function that displays the names within the array
//@post Returns the first name and last name
//@return the first and last name of each person in the roster
*/
void Roster::display(){ 
    for(int i = 0; i < item_count_; i++){
        std::cout << items_[i].getFirstName() << items_[i].getLastName() << std::endl;
    }
}