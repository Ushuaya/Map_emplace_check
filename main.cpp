//
//  main.cpp
//  Last_ex
//
//  Created by VolkSeriy on 08.12.2022.
//

#include <iostream>
#include <fstream>

#include "Functions_map.hpp"

 
void test_together(){
    std::ofstream myfile;
    myfile.open ("results.txt");
    myfile << ".\n";
    myfile << "Insert  Hint  Begin  Random" << std::endl;
    
    for(int i = 0; i < 60; i++ ){
        auto start = std::chrono::system_clock::now();
        map_insert();
        auto end = std::chrono::system_clock::now();
        //std::cout << "Insert: " <<  (end - start).count() << std::endl;
        myfile << std::to_string((end - start).count()) << " ";
        
        start = std::chrono::system_clock::now();
        map_emplace_hint();
        end = std::chrono::system_clock::now();
        //std::cout << "Hint: " <<  (end - start).count() << std::endl;
        myfile << std::to_string((end - start).count()) << " ";
        
        start = std::chrono::system_clock::now();
        map_emplace_hint_begin();
        end = std::chrono::system_clock::now();
        //std::cout << "Begin: " <<  (end - start).count() << std::endl;
        myfile << std::to_string((end - start).count()) << " ";
        
        start = std::chrono::system_clock::now();
        map_emplace_hint_begin();
        end = std::chrono::system_clock::now();
        //std::cout << "Random: " << (end - start).count() << std::endl;
        myfile << std::to_string((end - start).count()) << " " << std::endl;;
    }
    myfile.close();
}
int main() {
    
    
    test_together();
    
    
    auto start = std::chrono::system_clock::now();
    // Comment function above and write function under for independent test:
    
    // ----
    auto end = std::chrono::system_clock::now();
    std::cout << "???: " << (end - start).count() << std::endl;


}
