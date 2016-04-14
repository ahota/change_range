#include<iostream>
#include<iomanip>

float change_range_minimal(float value, float old_min, float old_max,
                                        float new_min, float new_max);
float change_range(float value, float old_min, float old_max,
                                float new_min, float new_max);

//simple one-liner
float change_range_minimal(float value, float old_min, float old_max,
                                        float new_min, float new_max) {
    return (new_max-new_min)*(value-old_min)/(old_max-old_min)+new_min;
}

//in case range is needed
float change_range(float value, float old_min, float old_max,
                                float new_min, float new_max) {
    float old_range = old_max-old_min;
    float new_range = new_max-new_min;
    return new_range * (value - old_min)/old_range + new_min;
}

int main(int argc, char *argv[]) {
    float old_min = -5.0f, old_max = 0.0f,
          new_min =  0.0f, new_max = 5.0f;
    for(float v = old_min; v < old_max; v += 0.1) {
        float cr = change_range(v, old_min, old_max, new_min, new_max); 
        std::cout << std::fixed << std::setprecision(2) << cr << " ";
    }
    std::cout << std::endl;

    return 0;
}
