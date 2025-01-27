#pragma once

#ifndef SOLVER_H
#define SOLVER_H

#include <iostream>
#include "instance.h"
#include <ilcplex/ilocplex.h>

using namespace std;

ILOSTLBEGIN

class Solver {
public:
    Solver(Instance*);
    Instance* instance;

    int E, S, R, T, C;
    vector<int> capacity;
    map<int, int> numberOfStudentInExam;
    map<int, set<int>> examOfStudent;

    map<string, string> exam_and_infor;
    map<string, string> student_and_infor;

    map<int, string> decoding_exam;
    map<int, string> decoding_student;

    int conflict_matrix[100][100];

    void fourIndexFormular(string outputFile);
    void test();
    void threeIndexFormular(string outputFile);
    void Test();
    void Simple3DModel();
    //void mixedModel();
};

#endif