bool searchHorizontal(char input[]){
	char *check;
	
	for (int i = 0; i < 15; i++)
    {
        check = strstr(words[i], input);
        
	    if(check != NULL){
	        return true;
	    }
    }
    
    return false;
}

bool searchVertical(char input[]){
	char *check;
	char kata[15];
	
	for (int i = 0; i < 15; i++)
    {
        for (int j = 0; j < 15; j++)
        {
            kata[j] = words[j][i];
        }
        
        check = strstr(kata, input);

        if(check != NULL){
	        return true;
	    }
    }
    
    return false;
}
   
   
