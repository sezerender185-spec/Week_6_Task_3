#include <iostream>
#include <fstream>
int getAverage(std::string filename) {
   
    std::ifstream file(filename);
        if (!file) {
            std::cout << "ERROR!";
            return;
        }
        int numbers[50];
        int num;
        int sum = 0;
        int count = 0;
        double avg;
        for (int i = 0; i < 50; i++) {
            numbers[count] = num;
            sum = sum + num;

            count++;
        }

        file.close();
         avg = sum / count;
        return avg;
    
    
 }
int main()
{
    std::string filename = "grades.txt";
    std::cout <<"Average: "<< getAverage(filename);
    return 0;
}

