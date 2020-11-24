#include <stdio.h>
int main(){

//Headding	
	printf("\n\n\t\t         -------------------\n");
	printf("------------------------- CURRENCY CONVETER -------------------------\n");
	printf("\t\t         -------------------\n\n");


//Menu to choose currency convert

	printf("\tA M E R I C A  (Rate = 170.00 Rs)\n");
	printf("\t\t01. US Dollars to SL Rupees\n");
	printf("\t\t02. SL Rupees to US Dollars\n\n");

	printf("\tA U S T R A I L I A  (Rate = 115.00 Rs)\n");
	printf("\t\t03. Austrailian Dollars to SL Rupees\n");
	printf("\t\t04. SL Rupees to Austrailian Dollars\n\n");

	printf("\tI T A L Y  (Rate = 190.00 Rs)\n");
	printf("\t\t05. Euro to SL Rupees\n");
	printf("\t\t06. SL Rupees to Euro\n\n");

	printf("\tE N G L A N D  (Rate = 215.00 Rs)\n");
	printf("\t\t07. Pounds Sterling Dollars to SL Rupees\n");
	printf("\t\t08. SL Rupees to Pounds Sterling\n\n");

	printf("\tB A H R A I N  (Rate = 430.00 Rs)\n");
	printf("\t\t09. Bahrain Dinars to SL Rupees\n");
	printf("\t\t10. SL Rupees to Bahrain Dinars\n\n");

	int num;
	printf("   Please choose your currency convert number : ");
	scanf("%d",&num);


//----------------A M E R I C A--------------------

if (num == 1){
printf("\n\nUS Dollars to SL Rupees-------------------------------\n\n");

	float amount1,convert1;
	printf("\tEnter the amount in USD : ");
	scanf("%f",&amount1);
	convert1=amount1*170.00;
	printf("\n\tYour entered amount is %.2f RS.\n",convert1);

//Footer	
	printf("\n\t\t         -------------------\n");
	printf("------------------------- T H A N K   Y O U -------------------------\n");
	printf("\t\t         -------------------\n\n");
}


else if (num == 2){
printf("\n\nSL Rupees to US Dollars-------------------------------\n\n");

	float amount2,convert2;
	printf("\tEnter the amount in RS : ");
	scanf("%f",&amount2);
	convert2=amount2/170.00;
	printf("\n\tYour entered amount is %.2f USD.\n",convert2);

//Footer	
	printf("\n\t\t         -------------------\n");
	printf("------------------------- T H A N K   Y O U -------------------------\n");
	printf("\t\t         -------------------\n\n");
}





//----------------A U S T R A I L I A--------------------

else if (num == 3){
printf("\n\nAustrailian Dollars to SL Rupees-------------------------------\n\n");

	float amount3,convert3;
	printf("\tEnter the amount in ASD : ");
	scanf("%f",&amount3);
	convert3=amount3*115.00;
	printf("\n\tYour entered amount is %.2f RS.\n",convert3);

//Footer	
	printf("\n\t\t         -------------------\n");
	printf("------------------------- T H A N K   Y O U -------------------------\n");
	printf("\t\t         -------------------\n\n");
}


else if (num == 4){
printf("\n\nSL Rupees to Austrailian Dollars-------------------------------\n\n");

	float amount4,convert4;
	printf("\tEnter the amount in RS : ");
	scanf("%f",&amount4);
	convert4=amount4/115.00;
	printf("\n\tYour entered amount is %.2f ASD.\n",convert4);

//Footer	
	printf("\n\t\t         -------------------\n");
	printf("------------------------- T H A N K   Y O U -------------------------\n");
	printf("\t\t         -------------------\n\n");
}




//--------------------------I T A L Y-----------------------------

else if (num == 5){
printf("\n\nEuro to SL Rupees-------------------------------\n\n");

	float amount5,convert5;
	printf("\tEnter the amount in Euro : ");
	scanf("%f",&amount5);
	convert5=amount5*190.00;
	printf("\n\tYour entered amount is %.2f RS.\n",convert5);

//Footer	
	printf("\n\t\t         -------------------\n");
	printf("------------------------- T H A N K   Y O U -------------------------\n");
	printf("\t\t         -------------------\n\n");
}


else if (num == 6){
printf("\n\nSL Rupees to Euro-------------------------------\n\n");

	float amount6,convert6;
	printf("\tEnter the amount in RS : ");
	scanf("%f",&amount6);
	convert6=amount6/190.00;
	printf("\n\tYour entered amount is %.2f Euro.\n",convert6);

//Footer	
	printf("\n\t\t         -------------------\n");
	printf("------------------------- T H A N K   Y O U -------------------------\n");
	printf("\t\t         -------------------\n\n");
}




//--------------------------E N G L A N D-----------------------------

else if (num == 7){
printf("\n\nPounds Sterling to SL Rupees-------------------------------\n\n");

	float amount7,convert7;
	printf("\tEnter the amount in Pounds : ");
	scanf("%f",&amount7);
	convert7=amount7*215.00;
	printf("\n\tYour entered amount is %.2f RS.\n",convert7);

//Footer	
	printf("\n\t\t         -------------------\n");
	printf("------------------------- T H A N K   Y O U -------------------------\n");
	printf("\t\t         -------------------\n\n");
}


else if (num == 8){
printf("\n\nSL Rupees to Pounds Sterling-------------------------------\n\n");

	float amount8,convert8;
	printf("\tEnter the amount in RS : ");
	scanf("%f",&amount8);
	convert8=amount8/215.00;
	printf("\n\tYour entered amount is %.2f Pounds.\n",convert8);

//Footer	
	printf("\n\t\t         -------------------\n");
	printf("------------------------- T H A N K   Y O U -------------------------\n");
	printf("\t\t         -------------------\n\n");
}





//--------------------------B A H R A I N-----------------------------

else if (num == 9){
printf("\n\nBahrain Dinars to SL Rupees-------------------------------\n\n");

	float amount9,convert9;
	printf("\tEnter the amount in Dinars : ");
	scanf("%f",&amount9);
	convert9=amount9*430.00;
	printf("\n\tYour entered amount is %.2f RS.\n",convert9);

//Footer	
	printf("\n\t\t         -------------------\n");
	printf("------------------------- T H A N K   Y O U -------------------------\n");
	printf("\t\t         -------------------\n\n");
}


else if (num == 10){
printf("\n\nSL Rupees to Bahrain Dinars-------------------------------\n\n");

	float amount10,convert10;
	printf("\tEnter the amount in RS : ");
	scanf("%f",&amount10);
	convert10=amount10/430.00;
	printf("\n\tYour entered amount is %.2f Dinars.\n",convert10);

//Footer	
	printf("\n\t\t         -------------------\n");
	printf("------------------------- T H A N K   Y O U -------------------------\n");
	printf("\t\t         -------------------\n\n");
}


else{
	printf("\n\n   Please select number correctly..!!!\n\n");

//Footer	
	printf("\n\t\t         -------------------\n");
	printf("------------------------- T H A N K   Y O U -------------------------\n");
	printf("\t\t         -------------------\n\n");
}


return 0;
}
