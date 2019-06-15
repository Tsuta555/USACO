/*
ID: u0605141
PROG: ride
LANG: C
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
	char comet[7],group[7];
	int i,x,m,n;
	int j=0,y=0;
	int total_1=1,total_2=1;
	
	FILE *fin = fopen("ride.in","r");
	FILE *fout = fopen("ride.out","w");
	
	fscanf(fin, "%s %s",comet,group);
	
	for(i=0;comet[i]!='\0';i++){
		j=comet[i]-64;
		total_1 = total_1*j;
	}
	for(x=0;group[x]!='\0';x++){
		y=group[x]-64;
		total_2 = total_2*y;
	}
	m = total_1%47;
	n = total_2%47;
	if(m == n)
		fprintf(fout, "GO\n");
	else
		fprintf(fout, "STAY\n");
	

	return 0;
}
