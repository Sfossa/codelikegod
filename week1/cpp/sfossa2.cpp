class Solution {
public:
    vector<int> countBits(int num) {
   int count = 0;
    vector<int>countBits(1,0);
    vector<int>my_vector(1, 0);
    vector <int>::iterator it;
    for (int i = 1; i <= num; ++i) {
        if (log(i) / log(2) >= my_vector.size()) {
            it = my_vector.begin();
            my_vector.insert(it, 0);
        }
        unsigned int n = my_vector.size() - 1;
        if (my_vector[n] == 0) {
            my_vector[n] += 1;
            ++count;
        }
        else if (my_vector[n] > 0) {
            int k = 1;
            while(k) {
                my_vector[n] = 0;
                --count;
                n -= 1;
                if (my_vector[n] == 0) {
                    my_vector[n] += k;
                    ++count;
                    k = 0;
                }

            }
        }
        countBits.push_back(count);

    }
        return countBits;
     }
};
