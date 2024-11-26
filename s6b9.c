#include <stdio.h>

int main() {
    int tram, chuc, donVi;
    int sum;
    for (int num = 100; num < 1000; num++) {
        tram = num / 100;         
        chuc = (num / 10) % 10;   
        donVi = num % 10;          
        sum = tram * tram * tram + chuc * chuc * chuc + donVi * donVi * donVi;
        if (sum == num) {
            printf("%d\n", num);
        }
    }

    return 0;
}
