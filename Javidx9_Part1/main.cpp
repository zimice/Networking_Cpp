#include <iostream>

// If using windows
// #ifdef _WIN32
// #define _WIN32_WINNT 0x0A00

#define ASIO_STANDALONE
#include <asio.hpp>
#include <asio/ts/buffer.hpp>
#include <asio/ts/internet.hpp>

int main(){
    asio::error_code ec;

    asio::io_context context; //create a "context" -essentially the platform specific interface

    //Get the address of something to connect to 
    asio::ip::tcp::endpoint endpoint(asio::ip::make_address("93.184.216.34", ec), 80);

    asio::ip::tcp::socket socket(context);

    socket.connect(endpoint, ec);

    if(ec){
        std::cout << "Error" << std::endl;
    }else{
        std::cout << "Successfull" << std::endl;
    }
        
    
    return 0 ;
}