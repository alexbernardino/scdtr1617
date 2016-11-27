//ASYNCHRONOUS
#include <iostream>
#include <boost/asio.hpp>
using namespace boost::system;
using namespace boost::posix_time;
boost::asio::io_service io;
boost::asio::deadline_timer tim(io);
int c = 0;
void deadline_handler(const error_code & ec)  { 
    std::cout << c++ << std::endl;
    tim.expires_from_now(milliseconds(1000));
    tim.async_wait(&deadline_handler); } 
int main() {
   tim.expires_from_now(milliseconds(1000));
   tim.async_wait(&deadline_handler); 
   io.run();  //exits when task queue empty
}

