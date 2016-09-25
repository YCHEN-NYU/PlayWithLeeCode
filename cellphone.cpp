/*
 * Examples of classes
 * 1. cellphone example
 * 2. 
 *
 *
 *
 */
#include <iostream>

using namespace std;

    class cellphone {
        private:
            string manufacturer;
            string model;
            double price;
            double StorageSize, ScreenSize, weight;
            int quantity;

        public:

            void _INIT(){
               cout << "manufacturer = ";
               cin >> manufacturer;
               cout << "model = ";
               cin >> model;
               cout << "price/each($) = ";
               cin >> price;
               cout << "StorageSize(GB) = ";
               cin >> StorageSize;
               cout << "ScreenSize(\") = ";
               cin >> ScreenSize;
               cout << "weight(g) = ";
               cin >> weight;
                };
	    

            void GET_INFO(){
                cout << "===================" << endl;
                cout << manufacturer << endl;
                cout << model << endl;
                cout << price << "$" << endl;
                cout << StorageSize << "GB\n";
                cout << "Screen Size: " << ScreenSize << "\"\n";
                cout << "Weight: " << weight << "g\n";
                };
    };

int main(){

    cellphone iPhone6S;
    iPhone6S._INIT();
    iPhone6S.GET_INFO();

    return 0;
}
