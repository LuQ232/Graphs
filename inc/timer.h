#pragma once


#include <iostream>
#include <chrono>


class Timer {
     std::chrono::time_point<std::chrono::high_resolution_clock> start_time;
     std::chrono::time_point<std::chrono::high_resolution_clock> stop_time;

  public:
    void start()
    {
        start_time = std::chrono::high_resolution_clock::now();
    }
    void stop()
    {
        stop_time = std::chrono::high_resolution_clock::now();
    }
    void print_time_duration()
    {
        std::cout<<"This Function took: "<<std::chrono::duration_cast<std::chrono::nanoseconds>(stop_time - start_time).count()<<" Nanoseconds."<<std::endl;
    }
    int return_time_duration()
    {
        return std::chrono::duration_cast<std::chrono::nanoseconds>(stop_time - start_time).count();
    }

};

