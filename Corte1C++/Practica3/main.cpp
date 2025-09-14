#include <iostream>
#include <iomanip>  // lo uso para el std::setw y std::setprecision

int main(int argc, char** argv) {

    float fahr, celsius;      
    float lower = 0, upper = 300, step = 20;

    fahr = lower;
    while (fahr <= upper) {
        celsius = (5.0f / 9.0f) * (fahr - 32.0f);

        std::cout 
		<< std::setw(3) << fahr << " "
                  << std::fixed << std::setprecision(1)
                  << std::setw(6) << celsius << std::endl;

        fahr += step;
    }

	return 0;
}
