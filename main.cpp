#include <iostream>
#include <tuple>
#include <string>


int fibonacci(int n){
    std::cout<<"Calculando fib("<< n<<")"<<std::endl;

    if(n == 0){
        std::cout<<"Fib(0) = o (PARADA)"<<std::endl;
        return 0;
    }
    if(n == 1){
        std::cout<<"Fib(1) = 1 (PARADA!)"<<std::endl;
        return 1;
    }

    std::cout<<"Fib("<<n<<") = Fib("<<(n-1)<<") + fib("<<(n-2)<<")\n";
    int resultado = fibonacci(n - 1) + fibonacci(n - 2);
    std::cout<<"Fib("<<n<<") = "<<resultado<<std::endl;
    return resultado;
}


int main(){

    fibonacci(4);

    return 0;
}
  // 0,1,1,2,3,5,8,13