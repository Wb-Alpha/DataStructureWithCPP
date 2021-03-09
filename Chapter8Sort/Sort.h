//
// Created by h on 2021-02-03.
template <class T>
int getArrayLen(T& array)
{
    return (sizeof(array) / sizeof(array[0]));
}



void bubbleSort(int a[]){
    int len = getArrayLen(a);
    for (int i = 0; i < len-1; i++){
        for (int j = 0; j < len-i-1; j++){
            if (a[j] > a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}

void insertSort(int a[], int len){
    int i,j;
    for (i = 2; i <= len; i++){
        if (a[i] < a[i-1]){
            a[0] = a[i];
            for (j = i-1; a[0] < a[j]; j--){
                a[j+1] = a[j];
            }
            a[j+1] = a[j];
        }
    }
}


void show(int a[], int len)
{
    for (int i = 0; i < len; i++)
    {
        std::cout << a[i] << " ";
    }
    std::cout << std::endl;
}
