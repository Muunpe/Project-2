#include <iostream>

int main()
{
    double originalprice = 150000;
    double discountpercentage = 12.5;

    double discountamount = originalprice * (discountpercentage / 100);
    double finalprice = originalprice - discountamount;

    std::cout << " harga :" << originalprice << std::endl;
    std::cout << "diskon :" << discountpercentage << std::endl;
    std::cout << "besarnya diskon dari harga :" << discountamount << std::endl;
    std::cout << "harga setelah diskon :" << finalprice << std::endl;
}
