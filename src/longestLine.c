#include <stdio.h>
#define MAXLINE 1000
int main(){
	return getInput();
}

int getInput(){
	long	c;
	char	line[MAXLINE];
	char	longestLine[MAXLINE];
	int	maxLenth = 0;
	int	currentPosi = 0;
	int	maxLineNum = 0;
	int	currentLineNum = 0;

	while((c = getchar()) != EOF){
		line[currentPosi] = c;
		currentPosi++;
		if(c == '\n'){
			currentLineNum++;
			int i;
			// if this is the longest line by now
			if(currentPosi + 1 > maxLenth){
				// set longest line lenth to current line lenth
				maxLenth = currentPosi + 1;
				maxLineNum = currentLineNum;
				// now copy current line to the longest line char array
				for( i = 0; i <= currentPosi; i++ ){
					longestLine[i] = line[i];
				}
				++i;
				longestLine[i] = '\0';
			}
			// set current line position to 0
			currentPosi = 0;
		}



	}

	printf("%d lines input, the longest line number is %d, it contains %d characters:\n", currentLineNum, maxLineNum,  maxLenth);

	printf("%s", longestLine);

	return 0;
}
