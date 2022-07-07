int bitwiseAnd(int N, int K) {
    int arr[N], temp = 0;
    for(int i = 0; i < N; ++i){
        arr[i] = i+1;
    }
    
    for(int i = 0; i < N; ++i){
        for(int j = i+1; j < N; ++j){
            if(temp < (arr[i] & arr[j]) && (arr[i] & arr[j]) < K)
                temp = arr[i] & arr[j];
        }
    }
    return temp;
}

int bitwiseOr(int N, int K) {
    int arr[N], temp = 0;
    for(int i = 0; i < N; ++i){
        arr[i] = i+1;
    }
    
    for(int i = 0; i < N; ++i){
        for(int j = i+1; j < N; ++j){
            if(temp < (arr[i] | arr[j]) && (arr[i] | arr[j]) < K)
                temp = arr[i] | arr[j];
        }
    }
    return temp;
}

int bitwiseXor(int N, int K) {
    int arr[N], temp = 0;
    for(int i = 0; i < N; ++i){
        arr[i] = i+1;
    }
    
    for(int i = 0; i < N; ++i){
        for(int j = i+1; j < N; ++j){
            if(temp < (arr[i] ^ arr[j]) && (arr[i] ^ arr[j]) < K)
                temp = arr[i] ^ arr[j];
        }
    }
    return temp;
}
