/* Author: Denice Veluz
Course: CSCI - 235
Instructor: Ligorio
Assignment: Project 2: Roster.hpp
*/
#ifndef ROSTER_CLASS_
#define ROSTER_CLASS_

#include <vector>
#include "ArrayBag.hpp"
#include "Student.hpp"

class Roster: public ArrayBag<Student>
{
    public:
    //default constructor for empty roster 
        /**parameterized constructor
         * @pre the input file is expected to be in CSV
        (comma separated value) where each line has format:
        “id,first_name_,last_name\n"
        @param input_file_name the name of the input csv file
        @post Student objects are added to roster as per the data
        in the input file
        **/
        Roster(); 
        /**@post displays all students in roster, one per line 
        in the form "first_name_last_name\n"
        **/
        Roster(std::string input_file_name); 
        /*//@pre function that displays the names within the array
                            //@post Returns the first name and last name
                            //@return the first and last name of each person in the roster
                            */
        void display(); 
};

#endif