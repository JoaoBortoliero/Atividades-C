#include <stdio.h>

void menu ();
float somar (float a, float b);
float subtrair (float a, float b);
float multiplicar (float a, float b);
float dividir (float a, float b);
void resultado (int operacao, float result);

int main (){
  float a, b, result;
  int operacao;

  printf ("Insira o primeiro número: ");
  scanf ("%f", &a);
  printf ("Insira o segundo número: ");
  scanf ("%f", &b);
  menu ();
  scanf ("%d", &operacao);
  switch (operacao)
    {
    case 1:
      result = somar (a, b);
      break;
    case 2:
      result = subtrair (a, b);
      break;
    case 3:
      result = multiplicar (a, b);
      break;
    case 4:
      if (a == 0 || b == 0)
	{
	  printf ("O número não pode ser divido por zero(0). \n");
	}
      else
	{
	  result = dividir (a, b);
	}
      break;
    default:
      printf ("NC:mero invC!lido! \n");
    }

  resultado (operacao, result);



  return 0;
}

void menu ()
{
  printf ("Digite a operação que deseja realizar: \n");
  printf ("1(+) soma \n");
  printf ("2(-) subtrair \n");
  printf ("3(*) multiplicar \n");
  printf ("4(/) dividir \n");
}

float somar (float a, float b)
{
  return a + b;
}

float subtrair (float a, float b)
{
  return a - b;
}

float multiplicar (float a, float b)
{
  return a * b;
}

float dividir (float a, float b)
{
  if (b == 0)
    {
      printf ("O número não pode ser divido por zero(0). \n");
    }
  return a / b;
}

void resultado (int operacao, float result)
{
  switch (operacao)
    {
    case 1:
      printf ("O resultado da soma C) %.1f", result);
      break;
    case 2:
      printf ("O resultado da subtração C) %.1f", result);
      break;
    case 3:
      printf ("O resultado da multiplicação C) %.1f", result);
      break;
    case 4:
      printf ("O resultado da divisão C) %.1f", result);
      break;
    }
}
