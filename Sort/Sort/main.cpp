//
//  main.cpp
//  Merge_Sort
//
//  Created by YiYi on 1/18/17.
//  Copyright © 2017 New York University. All rights reserved.
//

#include "Header.h"

int main(int argc, const char * argv[]) {
    // a few seconds to sort 1M random number]
    long random_vector_size;
    cout << "How many random number (0, 1) do you want to generate: ";
    cin >> random_vector_size;
    auto rand_vec = rand_vec_generator<double>(random_vector_size);
    cout << "Unsorted array of random [0, 1): " << endl;
    cout << string(40, '=') << endl;
    print_vec(rand_vec);
    cout << string(40, '=') << endl;
    auto sorted_vec = merge_sort(rand_vec);
    cout << "Sorted array of random [0, 1): " << endl;
    print_vec(sorted_vec);
    if(is_ordered(sorted_vec))
        cout << "Sorting succeeds." << endl;
    else
        cout << "Sorting fails." << endl;
    
    return 0;
}
