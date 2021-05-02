char *getWordDiagonal(int row, int col){
    char string[16];
    
	if(rows - row < cols - col){
        for(int i = 0; i < rows-row; i++){
            string[i] = words[row+i][col+i];
        }
    }
	else{
    	for(int i = 0; i < cols-col; i++){
            string[i] = words[row+i][col+i];
        }
	}
    char *s = string;
    return s;
}

bool searchDiagonal(char *str){
    char *strcheck;
    
	for(int kolom=0 ; kolom<cols ; kolom++){
        for(int baris=0;baris<rows;baris++){
            strcheck = getWordDiagonal(baris,kolom);
            char *check = strstr(strcheck,str);
            char *checkreverse = strstr(reverse(strcheck), str);
            	if (check > 0 || checkreverse > 0){
                return true;
            	}
            	else{
                continue;	
            	}
        }
	}
    return false;
}
