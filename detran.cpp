#include <stdio.h>
#include <conio.h>
#include <string.h>
main()
{
	char data[] = "abelha"; 						//define uma string para a data
	char inutil[]= "lkdsb"; 						//define uma string para as entradas inuteis
	int N;											//define uma variavel para guardar o numero de linhas
	int Vp, Va, erro, multa;
	float Conf;										//define uma varieavel para comparar as velocidadws
	while(strcmp(data,"0") != 0)					//enquanto "data" for diferente de "0" vai continuar rodando
	{
		multa = 0;									//Inicializa o contador da multa
		scanf("%s", &data);							//le a data
		if(strcmp(data,"0") == 0)					//enquanto "data" for diferente de "0" vai continuar rodando
			return 0;								//acaba o programa
		scanf("%d", &N);							//Le "N"
		for(int cont = 0; cont<N; cont++)			//For "N" vezes
		{
			scanf("%s", &inutil);					//Ambas as linhas são só para descartar os valores inuteis que nos são dados
			scanf("%s", &inutil);
			scanf("%d %d %d", &Vp, &Va, &erro);		//Le as velocidades e se tem erro
			if(erro!=0)								//Caso tenha erro
				Va =Va*95/100;						//Velocidade auferia reduz 5%
			Conf = Va*100/Vp;						//Valor de conferencia é "quantos % Va é de Vp?"
			if(Conf>100&&Conf<=120)					
				multa = multa + 130;
			if(Conf>120&&Conf<=150)
				multa = multa + 195;
			if(Conf>150)
				multa = multa + 880;
			if(Conf<50)
				multa = multa + 130;
		}
		printf("%s %d\n", data, multa);				//Printa a data e a multa
	}
}
