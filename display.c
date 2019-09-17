#include <stdio.h>
#include <stdlib.h>

int main()
{
	char ent, S[7], B[7];
	scanf("%hhd", &ent);
	S[0] = 'a';
	S[1] = 'b';
	S[2] = 'c';
	S[3] = 'd';
	S[4] = 'e';
	S[5] = 'f';
 	S[6] = 'g';

	B[0] = (ent&2)||(ent&8)||((ent&4)&&(ent&1))||((~ent&4)&&(~ent&1));
	B[1] = ((~ent&2)&&(~ent&1))||((ent&2)&&(ent&1))||(~ent&4);
	B[2] = (((ent&1))||(ent&4)||(~ent&2));
	B[3] = ((~ent&4)&&(~ent&1))||((ent&2)&&(~ent&1))||((ent&4)&&(~ent&2)&&(ent&1))||((~ent&4)&&(ent&2))||(ent&8);
	B[4] = ((~ent&4)&&(~ent&1))||((ent&2)&&(~ent&1));
	B[5] = (ent&8)||((~ent&2)&&(~ent&1))||((ent&4)&&(~ent&2))||((ent&4)&&(~ent&1));
	B[6] = (ent&8)||((ent&4)&&(~ent&2))||((~ent&4)&&(ent&2))||((ent&2)&&(~ent&1));
	for(int i=0; i<7; i++){
		if(B[i]){
			printf("%c", S[i]);
		};
	};
	printf("\n");
	// printf("%d%d%d%d%d%d%d\n", a, b, c, d, e, f, g);
}
