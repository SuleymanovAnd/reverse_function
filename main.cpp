#include <iostream>
void reverse (int* ar){
    for (int i = 0; i<6;i++){
        int temp = *(ar + (9-i));
        *(ar + (9-i)) = *(ar+i);
        *(ar+i) = temp;
    }
}
int main() {

    int array [10] = {10,9,8,7,6,5,4,3,2,1};
    int* pAr = array;
     reverse (pAr);
    for (int i = 0; i <10;i++){
        std :: cout << *(pAr +i)<<" ";
    }
}
