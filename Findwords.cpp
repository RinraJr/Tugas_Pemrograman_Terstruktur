// Kelompok Findwords Kelas D :

// 	1. Arya Affanda Auliya Duha
// 	   2017051063
	   
// 	2. Kania Ratu Syifa Az Zahra
// 	   2057051014
	   
// 	3. Saddam Surya Mardiansyah
// 	   2017051014

#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

const int rows = 15, cols = 16;

char words[rows][cols]{
   						"tgbwwinterwsesn",
  						"aaunttmmhfoodnb",
   						"jlwcqldzmpmvdmr",
   						"asagmquwvvbsohi",
    					"bwplotanadtpgnc",
    					"rewngodjcpnatnk",
    					"eeotwosbqharrsa",
    					"azcgeswewnaknpb",
    					"dinnerqodlwdcar",
    					"onopkwmparktzcc",
    					"qbfrogmamwpweey",
    					"lqzqnnmrzjjsclg",
    					"mosgzczetdbooto",
    					"pdcrzmsngrdnrpz",
    					"ohnkzwaterjgtra"
};

char *getWordDiagonal(int row,int col);
char *getWordVertical(int row,int col);
char *getWordHorizontal(int row,int col);

bool searchDiagonal(char *str);
bool searchVertical(char input[]);
bool searchHorizontal(char input[]);


int main(){
	
    int n;
    char word[16];
    cin >> n;
    cin.ignore(n,'\n');
    
	for (int i=0; i<n; i++){
        cin.getline(word,16,'\n');
        if (searchDiagonal(word))
            cout << "Ada\n";
        else 
            cout << "Tidak Ada\n";
    }
    return 0;
}

char *reverse(char *a){
    char *s = a;
	reverse(s,s+(int) strlen(a));
	return s;
}

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
                return false;
            	}
            	else{
                continue;	
            	}
        }
	}
    return true;
}
