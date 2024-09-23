#include <stdio.h>

main()
{
	float piek;
	float dal;
	float verbruikpiek = 0.46;
	float verbruikdal = 0.40;
	float leveringstarief = 80.00;

	printf_s("geef het piek verbruik van je stroom\n");
	scanf_s("%f", &piek);
	printf_s("geef het dal verbruik van je stroom\n");
	scanf_s("%f", &dal);
	
	float dalprijs = dal * verbruikdal;
	float piekprijs = piek * verbruikpiek;
	float verbruikjaar = dalprijs + piekprijs + leveringstarief;

	printf_s("de kosten in het jaar is %.2f", verbruikjaar);





}