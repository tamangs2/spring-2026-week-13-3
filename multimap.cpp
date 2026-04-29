#include <iostream>
#include <map>
#include <string>
using namespace std;

// Fork this repo
// Read: https://www.geeksforgeeks.org/cpp/multimap-associative-containers-the-c-standard-template-library-stl/
// If you have question about the code, please ask to the TA
// Implement a multimap to store student IDs and their names. A multimap allows multiple values for the same key,
//  which is useful in this case since multiple students can have the same ID.
// You can see more information: https://cplusplus.com/reference/map/multimap/
// Add a comment before main about what was the most easy and challenging part
// After you finish, type in the terminaL:
// git add .
// git commit -m "Implement multimap for student IDs and names"
// git push origin main


// most easy part
// Creating and inserting elements into the multimap was straightforward using insert().
// most challenging
// Understanding how to access multiple values for the same key and using iterators
// instead of the [] operator was slightly tricky.

int main() {
    // Create a multimap where the key is student ID (int) and value is student name (string)
    multimap<int, string> students;

    // Insert students with their IDs into the multimap
    students.insert({101, "Arika"});
    students.insert({102, "Sita"});
    students.insert({103, "Shree"});
    students.insert({101, "Lily"});   // duplicate id
    students.insert({103, "Jonah"});  // duplicate id
    
    // Display all students sorted by their student IDs
    cout << "Student List (sorted by ID):" << endl;
    for (auto it = students.begin(); it != students.end(); ++it) {
        cout << "ID: " << it->first << ", Name: " << it->second << endl;
    }

    return 0;
}