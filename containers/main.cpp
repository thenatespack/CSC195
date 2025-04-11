//
//  main.cpp
//  containers
//
//  Created by Nathan Spackman on 4/11/25.
//

#include <iostream>
#include <list>
#include <map>

int main(int argc, const char * argv[]) {
    std::array<std::string, 7> days = {  // Create an array<string, 7>
        "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"
    };  //Initialize it with the days of the week ("Monday" to "Sunday").
    
    std::cout << days.size() << std::endl;  // Print the number of elements in the array.
    for (auto& day : days) {
        std::cout << day;  // Use a for loop (or for-each) to print each day.
    }
    std::cout << "" << std::endl;  //end line
    
    // Use a vector<int>
    std::vector<int> ints={1,2,3,4,5};  // Initialize the vector with five integer values.
    ints.push_back(0);ints.push_back(-1); // Add two more integers using push_back.
    ints.erase(find(ints.begin(), ints.end(), 5));  // Remove the last element using pop_back.
    for (int i=0; i<ints.size()-1; i++) {  //print all but the last
        std::cout << ints[i];
        std::cout << ", ";
    }// Print the contents of the vector using a loop.
    std::cout << ints[ints.size()-1] << std::endl; //print last
    
    std::list<std::string> fruits = {"apple", "cherry", "banana"}; // Use a list<string>
    // Initialize a list with three fruit names.
    
    
    fruits.push_front("watermelon"); // Add an item to the front
    fruits.push_back("mango"); //and another to the back of the list.
    fruits.remove("apple");  // Remove one specific element using remove().
    for (auto it = fruits.begin(); it != fruits.end(); ++it){
        std::cout << *it << " ";
    }
    // Iterate through the list using an iterator and print each item.
    
    std::map<std::string, int> products = {{"apple",10},{"bananas",5}};// Use a map<string, int>
    // Create a map to store the number of items in stock for a few grocery products (e.g., "apples" → 10, "bananas" → 5).
    products.insert({"hotdog",2}); products.insert({{"Chicken Bake",3},{"pizza",2}});// Insert at least three key-value pairs.
    products["pizza"]=10;// Access and update the value for one of the keys.
    // Use a loop to print each key-value pair.
    for (auto& p : products){
        std::cout << p.first << " " <<
        p.second << std::endl;
    }
    return 0;
}
