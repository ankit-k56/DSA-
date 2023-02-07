void wavePrint(int arr[][4], int row , int col){
    for (int i=0;i<col;i++){
        int start=0;
        int last = row-1;
        if(i%2 ==0){
            for (start; start<=last;start++){ 
                cout << arr[start][i] << " ";
            }
            
        }
        else{
            for (last; last>=start; last--){
                cout << arr[last][i] << " ";
            }
            
        }
    }
}
