// sumaDosnumeros.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include <stdio.h>


int main()
{


	int numerouno = 0;
	int numerodos = 0;
	printf("numero uno");
	scanf_s("%d", &numerouno);
	printf("numero dos");
	scanf_s("%d", &numerodos);
	printf("%d", numerouno + numerodos);
	int pause = 0;
	std::cin >> pause;
	return 0;

}
