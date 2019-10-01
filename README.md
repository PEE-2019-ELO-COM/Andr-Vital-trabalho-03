O programa 'display.c' têm como objetivo fazer a conversão de binário para 7 segmentos
O funcionamento do código é o seguinte: inicialmente cria-se 3 chars, sendo dois deles
um array e o último a entrada feita pelo usuário (sendo essa entrada um número).
Em seguida, para um dos arrays, associa-se cada posição dele à uma letra entre a-g, que serão
as posições que apareceriam no display de 7 segmentos.
No outro array associa-se para cada posição dele a operações lógicas, seja eles bitwise ou não
para indicar qual valor lógico ele vai possuir, dado uma entrada de um char pelo usuário.
Por fim, associa-se os dois arrays para indicar quais segmentos estão ligados, dado uma string
criada com essa associação (o programa vai printar a posição 'i' do array das letras quando
o resultado lógico do outro array na mesma posição 'i' for 1).
