#include<iostream>
#define scale_num 8
using namespace std;
int main(){
    int Scale[scale_num];
    for(int i=0;i<scale_num;i++){
        cin >> Scale[i];
    }
    if(Scale[0] == 1){
        for(int i=1; i<scale_num; i++){
            if(Scale[i] == i + 1){
                if(i == scale_num - 1){
                    printf("ascending\n");
                }
            }
            else{
                printf("mixed\n");
                break;
            }
        }
    }
    else if(Scale[0] == 8){
        for(int i=1; i<scale_num; i++){
            if(Scale[i] == scale_num-i){
                if(scale_num - i == 1){
                    printf("descending\n");
                }
            }
            else{
                printf("mixed\n");
                break;
            }
        }
    }
    else{
        printf("mixed\n");
    }
}