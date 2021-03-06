#pragma once

#include <iostream>
#include <string>

#include "../inc/Matrix_graph.h"
#include "../inc/timer.h"
#include "../inc/file_staff.h"
#define INT_MAX 9999




int minimal_distance(const Matrix_graph &Matrix_graph,int *distance, bool *is_shortest_way);
void printPath(int parent[], int j);
void dijkstra(const Matrix_graph & Matrix_graph,int start_point,int test_number,int density,int test_variation);
void dijkstra_agorithm(const Matrix_graph & Matrix_graph,int *dist,bool *is_shortest_way,int * path_data,Timer & time);

void print_utility(const Matrix_graph &Matrix_graph,int *dist,int * path);


void path_to_string(int *parent,int j,std::string &name);
std::string data_to_string(const Matrix_graph &Matrix_graph, int *dist, int *path);
