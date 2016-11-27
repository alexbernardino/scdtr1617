//SYNCHRONOUS 
#include <iostream>
#include <boost/asio.hpp>
using namespace boost::system;
using namespace boost::posix_time;
boost::asio::io_service io;
boost::asio::deadline_timer tim(io);
int c = 0;
int main() {
   for(;;) {
      tim.expires_from_now(milliseconds(1000));
      tim.wait();  //blocks
      std::cout << c++ << std::endl;
   } 
}

