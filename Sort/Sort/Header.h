//
//  Header.h
//  Sort
//
//  Created by YiYi on 1/18/17.
//  Copyright © 2017 New York University. All rights reserved.
//

#ifndef Header_h
#define Header_h

#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;
#define FONT_WIDTH 8
#define PRECISION_DIGIT 6

// print all elements in the vector
template <typename T>
void print_vec(const vector<T> vec)
{
    for(auto it = vec.begin(); it != vec.end(); ++it){
        cout << fixed << setprecision(PRECISION_DIGIT) << setw(FONT_WIDTH)
             << *it << " | ";
        if ((distance(vec.begin(), it) + 1)%10 == 0) {
            cout << endl;
        }
    }
    cout << endl;
}


//
template <typename T>
vector<T> merge_vec(const vector<T> vec1, const vector<T> vec2)
{
    vector<T> vec_comb;
    auto it1 = vec1.begin(), it2=vec2.begin();
    while ((it1 != vec1.end()) && (it2 != vec2.end()))
    {
        if(*it1 < *it2)
        {
            vec_comb.push_back(*it1);
            ++it1;
        }
        else
        {
            vec_comb.push_back(*it2);
            ++it2;
        }
    }
    
    while(it1 != vec1.end())
    {
        vec_comb.push_back(*it1);
        ++it1;
    }
    
    while(it2 != vec2.end()){
    vec_comb.push_back(*it2);
        ++it2;
    }
       
    return vec_comb;
}

// merge_sort
// lost of bigger numbers during the merge
template <typename T>
vector<T> merge_sort(const vector<T> vec){
//    cout << "vec.size() = " << vec.size() << endl;
    
    if(vec.size() > 1){
        vector<T> left_vec, right_vec;
        for(int i = 0; i < vec.size(); ++i){
            if(i < (vec.size())/2){
                left_vec.push_back(vec[i]);
            }
            else{
                right_vec.push_back(vec[i]);
            }
        }
        return merge_vec(merge_sort(left_vec), merge_sort(right_vec));

    }
    
    else{
//        print_vec(vec);
        return vec;
    }
}

// check if the vector is in non-decreasing order
template <typename T>
bool is_ordered(const vector<T> vec)
{
    bool is_ordered_flag = true;
    for(auto it = vec.begin(); it != vec.end()-1; ++it){
        if(*it > *(it+1)){
            is_ordered_flag = false;
            break;
        }
        
    }
    return is_ordered_flag;
}


// generate a vector of random number [0, 1.0)
template <typename T>
vector<T> rand_vec_generator(long vec_size)
{
    vector<T> vec;
    srand(int(time(NULL)));
    for(auto i = 0; i < vec_size; ++i){
        auto temp_rand = rand();
        vec.push_back((double(temp_rand%RAND_MAX))/RAND_MAX);
        srand(temp_rand); // reinitiate srand()
    }
    return vec;
}

#endif /* Header_h */
