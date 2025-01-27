#pragma once
#ifndef ES_INSTANCE_H
#define ES_INSTANCE_H
#include "preprocess.h"
#include <vector>
#include <fstream>
#include <iostream>
#include <sstream>
#include <map>
#include <unordered_map>
#include <string>
#include <set>

using namespace std;

class Instance {
public:
    int E, S, R, T, C; // Number of exam, student, room, timeslot, course
	vector<int> capacity; // Room's capacity at time slot t
	map<int, int> numberOfStudentInExam; // Number of student in each exam
	map<int, set<int>> examOfStudent; // The exam that each student takes

    map<string, string> exam_and_infor;
    map<string, string> student_and_infor;

    map<int, string> decoding_exam;
    map<int, string> decoding_student;

    int conflict_matrix[100][100];

    Instance(string instanceFile);

private:
    void read_input(const string inputFile);
};

#endif //ES_INSTANCE_H