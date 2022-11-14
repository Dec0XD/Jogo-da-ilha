#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdlib.h>

int main(){
  printf("-::......     :+++==::.        .        =+**************###### \n");
  printf("--::::::..   .:=-==-:.      .            .-=+++++++++**++********##### \n");
  printf("----:::..   ..             ..::.... .       .-+++++++++**********##### \n");
  printf("=--:::........      .      .:--:::::......    -+++++++**++********#* \n");
  printf("+===----::::..................::::::-::::...  .++*++++++************ \n");
  printf("++++++===--:::::::::::::..:...  ......::::...:==+++++++++*+++++++******* \n");
  printf("++++++=+++===--:::---:-----::....:::........  =++++++++++*+++++++++******+++ \n");
  printf("++++++===+++====---=------==========-=--:..   :++++++++++++++++++++++++**+++++++++++++ \n");
  printf("++++=+======++=========-====++++++++++++:..:-=*++++++++++++++==+++++++++++++++++++++++++ \n");
  printf("=============+++=++========+++++++++++++*####+==+====+++========++++++++++========== \n");
  printf("===========================+++++===+==++***##*+===========--=======++++===-----===== \n");
  printf("======================================++##*##*+==+=====-----========-------------- \n");
  printf("---------====---===================--+*##*#*###===----::---------------------- \n");
  printf("::---------------------------------=+*++#*####*####*=-----====----------:--::::--- \n");
  printf("::::::::::::-:------:-------------=+*++*###*#######**---=++++++=-----::::::::::--- \n");
  printf(".......:::::::::::::::------::--=+++*+*#*#*#######++++++++++++=-:::::::::::::: \n");
  printf(".................::::::::::-=++**+*#+######*######*+++++++++++++++-::::::::::: \n");
  printf("..............::::::::::-=++++*+*+#*#####*######++++++++++++++=--======= \n");
  printf("*+++++++++++++++++*++*+**++*++#**#*#######********** \n");
  printf("++++++++++=+++++++=+++#++**+++*+**###########++++++*++++++++++++++ \n");
  printf("==========--*+=-=+-+++**++*****#**#######*++++++++++++++++++++ \n");
  printf("===-----:::::::.....:--=+++#++++++++++****#**+++++++===---:.:-====--========== \n");
  printf("=====--::::::::------:...:-==++++++++++****#*+-:::::::------===----::..::::---:: \n");
  printf("===--::.........:-----:::.::.....::::----------------:..:::-==:::--::::::::::.:::-::---:-= \n");
  printf("=--:...    .....:::::::::::-=====------::::::----------===---::::::...........::::----==== \n");
  printf("=--::.....        ........::::::::::.::--=-----====-:::..:::::::...........:::::--:-==+=++ \n");
  printf("+==--:::......         ...............::::::::::::::::::::.............:::..::--:-=+++++** \n");
  printf("+++==::::::.......           . ....................................::::::::::--=+++*** \n");
  printf("##*++-::::::.................. .....................::::::::::::::::::::--=++++***## \n");
  printf("###**++=-::::::::::...................:::::::::::::::::::::------------=+++++*++*### \n");
  printf("#####***++==-----==--------------:::::::::.::::::----============---==++*+*##### \n");
  printf("##########*+**+++++++++++++++++==========================+++===++++*+==*######## \n");
  printf("######*####******++++*++++++++*++++++++++++****+++*#######&&&& \n");


  printf("####   ####     ###  ##    ##              ### ##    ## ##            #### ##  ### ###   ## ##    ## ##   ##  ###  ### ##    ## ## \n");
  printf(" ##     ##       ##  ##     ##              ##  ##  ##   ##           # ## ##   ##  ##  ##   ##  ##   ##  ##   ##   ##  ##  ##   ##\n");
  printf(" ##     ##       ##  ##   ## ##             ##  ##  ##   ##             ##      ##      ####     ##   ##  ##   ##   ##  ##  ##   ##\n");
  printf(" ##     ##       ## ###   ##  ##            ##  ##  ##   ##             ##      ## ##    #####   ##   ##  ##   ##   ## ##   ##   ##\n");
  printf(" ##     ##       ##  ##   ## ###            ##  ##  ##   ##             ##      ##          ###  ##   ##  ##   ##   ## ##   ##   ##\n");
  printf(" ##     ##  ##   ##  ##   ##  ##            ##  ##  ##   ##             ##      ##  ##  ##   ##  ##   ##  ##   ##   ##  ##  ##   ##\n");
  printf("####   ### ###  ###  ##  ###  ##           ### ##    ## ##             ####    ### ###   ## ##    ## ##    ## ##   #### ##   ## ## \n");
  char algo;
  printf("Digite qualquer coisa para iniciar o jogo!");
  scanf("%c", &algo);
  system("clear");    
 // 1) Declare sua matriz de char que representa o mapa da ilha.
  char matriz_ilha[10][10];
  // 2) Inicialize a matriz com algum caractere, pode ser '0', 'o', o que vc
  //    quiser, ejogadasceto espaco em branco.
  int tamanho_ilha = 10;

  // 3) Defina em qual casa esta o tesouro ou sorteie utilizando o codigo
  //    abaijogadaso:
  //    onde majogadas eh o numero majogadasimo a ser sorteado e min o minimo.
  int min=0,max=9;
    		srand(time(0));
	   int coluna_sorteada = (rand() % (max - min + 1)) + min;
	   int linha_sorteada = (rand() % (max - min + 1)) + min;
  // 4) Declare uma variavel para armazenar o nome do jogador, pergunte qual o
  //    nome dele e salve na variavel.
  char jogador;
  printf("\nQual o seu nome? ");
  scanf("%s",&jogador);
  
  // 5) Pergunte quantos seu chancess o jogador quer fazer, lembrando que tem que
  //    ser menor que a quantidade de casas da ilha. Caso ele nao acerte nessas
  //    X tentativas, o vulcao entra em erupcao e acaba o jogo.
  int chances;
  printf("\nQuantas chances você quer? ");
	scanf("%d",&chances);
  

  printf("Esse é o mapa da ilha! \nDigite suas tentativas como coluna espaço linha(EX:1 3)\n");

  int tamanhocoluna=0,tamanholinha=0,coluna,linha, coluna_M, linha_j;
  
  for(tamanholinha=0;tamanholinha<tamanho_ilha;tamanholinha++){
		for(tamanhocoluna=0;tamanhocoluna<tamanho_ilha;tamanhocoluna++){
			matriz_ilha[tamanholinha][tamanhocoluna]='-';
		
		}
	}
  printf("\n");
  printf("    ");
  for (coluna_M = 0; coluna_M < tamanho_ilha; coluna_M++)
  {
    printf(" %d |", coluna_M);
  }
  printf("\n");
  for (linha = 0; linha < tamanho_ilha; linha++)
  {
    printf(" %d |", linha);
    for (coluna_M = 0; coluna_M < tamanho_ilha; coluna_M++)
    {
      printf(" %c |", matriz_ilha[linha][coluna_M]);
    }
    printf("\n");
  }

  
    printf("Cada simbolo no mapa representa uma distançia do tesouro!\n");
    printf("C - Congelando = A sua tentativa esta a 5 ou mais casas de distancia\n");
    printf("F - Frio = A sua tentativa esta a 4 casas de distancia\n");
    printf("M - Morno = A sua tentativa esta a 3 casas de distancia\n");
    printf("Q - Quente = A sua tentativa esta a 2 casas de distancia\n");
    printf("P - Pelando = A sua tentativa esta a 1 casas de distancia\n");
  // 7) O jogador tem X tentativas. Para cada tentativa, pergunte qual a linha
  //    e coluna ele deseja cavar. Isso eh ele tentando achar o tesouro. Caso
  //    ele acerte, imprima uma frase de parabens e encerre o programa. Caso
  //    ele erre, vc tem que dar uma pista, escrevendo uma frase e marcando no
  //    mapa com uma letra que representa a pista:
  //    C - Congelando = A sua tentativa esta a 5 ou mais casas de distancia
  //    F - Frio = A sua tentativa esta a 4 casas de distancia
  //    M - Morno = A sua tentativa esta a 3 casas de distancia
  //    Q - Quente = A sua tentativa esta a 2 casas de distancia
  //    P - Pelando = A sua tentativa esta a 1 casas de distancia
int linhatesouro = 0,coluna_tesouro = 0;
int diferenca_de_linha, diferenca_de_coluna, distancia_tesouro, jogadas = 1;
for(linhatesouro=0;linhatesouro<tamanho_ilha;linhatesouro++){
		for(coluna_tesouro=0;coluna_tesouro<tamanho_ilha;coluna_tesouro++){
			matriz_ilha[linhatesouro][coluna_tesouro]='-';
		
		}
	}

 	while(jogadas<=chances){
	 printf("\n Quais coordenadas quer jogar? ");
	 scanf("%d" "%d",&coluna, &linha_j);
	 diferenca_de_linha=linha-coluna_sorteada;
   diferenca_de_coluna=coluna-linha_sorteada;
   distancia_tesouro=abs(diferenca_de_coluna)+abs(diferenca_de_linha);
   if(distancia_tesouro>=5 ){
	 matriz_ilha[linha_j][coluna]='C';
	printf("\nC - Congelando = A sua tentativa esta a 5 ou mais casas de distancia\n");
	}	
   if(distancia_tesouro==4 ){
	 matriz_ilha[linha_j][coluna]='F';
	 printf("F - Frio = A sua tentativa esta a 4 casas de distancia\n");
	}	
		 if(distancia_tesouro==3 ){
	 matriz_ilha[linha_j][coluna]='M';
	 printf("M - Morno = A sua tentativa esta a 3 casas de distancia\n");
	}	
   if(distancia_tesouro==2 ){
	 matriz_ilha[linha_j][coluna]='Q';
	 printf("Q - Quente = A sua tentativa esta a 2 casas de distancia\n");
	}	
   if(distancia_tesouro==1){
	 matriz_ilha[linha_j][coluna]='P';
	 printf("P - Pelando = A sua tentativa esta a 1 casas de distancia\n");
	}

   printf("\n");
  printf("    ");
  for (coluna_M = 0; coluna_M < tamanho_ilha; coluna_M++)
  {
    printf(" %d |", coluna_M);
  }
  printf("\n");
  for (linha = 0; linha < tamanho_ilha; linha++)
  {
    printf(" %d |", linha);
    for (coluna_M = 0; coluna_M < tamanho_ilha; coluna_M++)
    {
      printf(" %c |", matriz_ilha[linha][coluna_M]);
    }
    printf("\n");
  }

  
   if(linha_j==linha_sorteada && coluna==coluna_sorteada){
       system("clear");
	 printf("\n Parabens %s! Voce achou o tesouro antes que o vulcão entrasse em erupção", &jogador);
jogadas=chances+1;
      matriz_ilha[coluna_sorteada][linha_sorteada]='T';
   printf("\n");
  printf("    ");
   for (coluna_M = 0; coluna_M < tamanho_ilha; coluna_M++)
  {
    printf(" %d |", coluna_M);
  }
  printf("\n");
  for (linha = 0; linha < tamanho_ilha; linha++)
  {
    printf(" %d |", linha);
    for (coluna_M = 0; coluna_M < tamanho_ilha; coluna_M++)
    {
      printf(" %c |", matriz_ilha[linha][coluna_M]);
    }
    printf("\n");
  }
    break;
}	
    
      // 8) Caso o jogador nao acerte depois de X rodadas, imprima uma mensagem
  //    informando que o vulcao entrou em erupcao e o tesouro foi perdido, eh
  //    game over. Imprima o mapa e onde estava o tesouro.
    if(jogadas==chances){
        system("clear");
    printf("\n GAME OVER");
    printf("\n O tesouro Estava aqui");
    jogadas=chances+1;
      matriz_ilha[coluna_sorteada][linha_sorteada]='T';
   printf("\n");
  printf("    ");
   for (coluna_M = 0; coluna_M < tamanho_ilha; coluna_M++)
  {
    printf(" %d |", coluna_M);
  }
  printf("\n");
  for (linha = 0; linha < tamanho_ilha; linha++)
  {
    printf(" %d |", linha);
    for (coluna_M = 0; coluna_M < tamanho_ilha; coluna_M++)
    {
      printf(" %c |", matriz_ilha[linha][coluna_M]);
    }
    printf("\n");
  }
    break;
   
  }
   else{
	jogadas+=1;
  
  }
}

return 0;
}	
