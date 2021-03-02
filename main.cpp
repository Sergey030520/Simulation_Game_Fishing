#include <iostream>
#include <fstream>

void fishing(std::string const& copy_fish){
    std::ifstream river_file("C:\\Users\\Malip\\source\\repos\\Game_Fishing\\river.txt");
    std::ofstream basket_file("C:\\Users\\Malip\\source\\repos\\Game_Fishing\\basket.txt");
    while (!river_file.eof()){
        std::string fishRiv;
        river_file >> fishRiv;
        if (fishRiv == copy_fish){
            basket_file << copy_fish << std::endl;
            std::cout << copy_fish << std::endl;
        }
    }
    river_file.close(), basket_file.close();
}
int main() {
    std::string fish;
    std::cout << "Input the type of fish you want to catch: ";
    std::cin >> fish;
    fishing(fish);
}