//Switch
#define S1 5
#define S2 4
#define S3 3
#define S4 2

//Display de 7 segmentos
#define A 10
#define B 9
#define C 6
#define D 7
#define E 8
#define F 11
#define G 12

//Números del 0 al 9

int vNum0[] = { 0 , 0 , 0 , 0 };
int vNum1[] = { 0 , 0 , 0 , 1 };
int vNum2[] = { 0 , 0 , 1 , 0 };
int vNum3[] = { 0 , 0 , 1 , 1 };
int vNum4[] = { 0 , 1 , 0 , 0 };
int vNum5[] = { 0 , 1 , 0 , 1 };
int vNum6[] = { 0 , 1 , 1 , 0 };
int vNum7[] = { 0 , 1 , 1 , 1 };
int vNum8[] = { 1 , 0 , 0 , 0 };
int vNum9[] = { 1 , 0 , 0 , 1 };

//Letras A-C-E-F-H-J

int vLetraA[] = { 1 , 0 , 1 , 0 };
int vLetraC[] = { 1 , 0 , 1 , 1 };
int vLetraE[] = { 1 , 1 , 0 , 0 };
int vLetraF[] = { 1 , 1 , 0 , 1 };
int vLetraH[] = { 1 , 1 , 1 , 0 };
int vLetraJ[] = { 1 , 1 , 1 , 1 };

//////////////
void setup()
{
  //Monitor Serial
  Serial.begin( 9800 );
  
  //Switch
  pinMode( S1 , INPUT );
  pinMode( S2 , INPUT );
  pinMode( S3 , INPUT );
  pinMode( S4 , INPUT );
  
  
  for( int pin = 2 ; pin <= 12  ; pin++ )
  {
    pinMode( pin , INPUT ); 
  }
  
}//Fin void setup

//////////////
void loop()
{
  int contar = 0;
  
  int v1 = digitalRead( S1 );
  int v2 = digitalRead( S2 );
  int v3 = digitalRead( S3 );
  int v4 = digitalRead( S4 );
  
  int vec[] = { v1 , v2 , v3 , v4 };
  
  //Mostrar número 0
   for ( int i = 0 ; i < 4; i++ )
 {
   if ( vec[i] == vNum0[i])
   {
     contar = contar + 1;
   }
 }
  
 if ( contar == 4 )
 {
   formarNum_letra( 1 , 1 , 1 , 1 , 1 , 1 , 0 );
 }
  
 contar = 0;
  
 //Mostrar número 1
 for ( int i = 0 ; i < 4; i++ )
 {
   if ( vec[i] == vNum1[i])
   {
     contar = contar + 1;
   }  
 }
  
 if ( contar == 4 )
 {
   formarNum_letra( 0 , 1 , 1 , 0 , 0 , 0 , 0 );
 }
  
 contar = 0;
  
 //Mostrar número 2
 for ( int i = 0 ; i < 4; i++ )
 {
   if ( vec[i] == vNum2[i])
   {
     contar = contar + 1;
   }
 }
  
 if ( contar == 4 )
 {
   formarNum_letra( 1 , 1 , 0 , 1 , 1 , 0 , 1 );
 }
  
 contar = 0;
  
 //Mostrar número 3 
 for ( int i = 0 ; i < 4; i++ )
 {
   if ( vec[i] == vNum3[i])
   {
     contar = contar + 1;
   }
 }
  
 if ( contar == 4 )
 {
   formarNum_letra( 1 , 1 , 1 , 1 , 0 , 0 , 1 );
 }
  
 contar = 0;
  
 //Mostrar número 4 
 for ( int i = 0 ; i < 4; i++ )
 {
   if ( vec[i] == vNum4[i])
   {
     contar = contar + 1;
   }
 }
  
 if ( contar == 4 )
 {
   formarNum_letra( 0 , 1 , 1 , 0 , 0 , 1 , 1 );
 }
  
 contar = 0;
  
 //Mostrar número 5
 for ( int i = 0 ; i < 4; i++ )
 {
   if ( vec[i] == vNum5[i])
   {
     contar = contar + 1;
   }
 }
  
 if ( contar == 4 )
 {
   formarNum_letra( 1 , 0 , 1 , 1 , 0 , 1 , 1 );
   Serial.println("Mostrar: Numero 1 ");
 }
   
 contar = 0;
  
 //Mostrar número 6
 for ( int i = 0 ; i < 4; i++ )
 {
   if ( vec[i] == vNum6[i])
   {
     contar = contar + 1;
   }
 }
  
 if ( contar == 4 )
 {
   formarNum_letra( 1 , 0 , 1 , 1 , 1 , 1 , 1 );
 }
  
 contar = 0;
  
 //Mostrar número 7
 for ( int i = 0 ; i < 4; i++ )
 {
   if ( vec[i] == vNum7[i])
   {
     contar = contar + 1;
   }
 }
  
 if ( contar == 4 )
 {
   formarNum_letra( 1 , 1 , 1 , 0 , 0 , 0 , 0 );
 }
  
 contar = 0;
  
 //Mostrar número 8
 for ( int i = 0 ; i < 4; i++ )
 {
   if ( vec[i] == vNum8[i])
   {
     contar = contar + 1;
   }
 }
  
 if ( contar == 4 )
 {
   formarNum_letra( 1 , 1 , 1 , 1 , 1 , 1 , 1 );
 }
  
 contar = 0;
  
 //Mostrar número 9
 for ( int i = 0 ; i < 4; i++ )
 {
   if ( vec[i] == vNum9[i])
   {
     contar = contar + 1;
   }
 }
  
 if ( contar == 4 )
 {
   formarNum_letra( 1 , 1 , 1 , 0 , 0 , 1 , 1 ); 
 }
  
 contar = 0;
  
 //Mostrar letra A
 for ( int i = 0 ; i < 4; i++ )
 {
   if ( vec[i] == vLetraA[i])
   {
     contar = contar + 1;
   }
 }
  
 if ( contar == 4 )
 {
   formarNum_letra( 1 , 1 , 1 , 0 , 1 , 1 , 1 );
 }
  
 contar = 0;
  
 //Mostrar letra C
 for ( int i = 0 ; i < 4; i++ )
 {
   if ( vec[i] == vLetraC[i])
   {
     contar = contar + 1;
   }
 }
  
 if ( contar == 4 )
 {
   formarNum_letra( 1 , 0 , 0 , 1 , 1 , 1 , 0 );
 }
  
 contar = 0;
  
 //Mostrar letra E
 for ( int i = 0 ; i < 4; i++ )
 {
   if ( vec[i] == vLetraE[i] )
   {
     contar = contar + 1;
   }
 }
  
 if ( contar == 4 )
 {
   formarNum_letra( 1 , 0 , 0 , 1 , 1 , 1 , 1 );
 }
  
 contar = 0;
  
 //Mostrar letra F
 for ( int i = 0 ; i < 4; i++ )
 {
   if ( vec[i] == vLetraF[i] )
   {
     contar = contar + 1;
   }
 }
  
 if ( contar == 4 )
 {
   formarNum_letra( 1 , 0 , 0 , 0 , 1 , 1 , 1 );
 }
  
 contar = 0;
  
 //Mostrar letra H
 for ( int i = 0 ; i < 4; i++ )
 {
   if ( vec[i] == vLetraH[i] )
   {
     contar = contar + 1;
   }
 }
  
 if ( contar == 4 )
 {
   formarNum_letra( 0 , 1 , 1 , 0 , 1 , 1 , 1 );
 }
  
 contar = 0;
  
 if ( contar == 4 )
 {
   Serial.println("Mostrar: Numero 1 ");
 }
  
 contar = 0; 
  
 //Mostrar letra J
 for ( int i = 0 ; i < 4; i++ )
 {
     if ( vec[i] == vLetraJ[i] )
     {
       contar = contar + 1;
     }
 }

 if ( contar == 4 )
 {
   formarNum_letra( 0 , 1 , 1 , 1 , 1 , 0 , 0 );
 }
  
 contar = 0; 
  
}//Fin loop

void formarNum_letra(int a, int b, int c, int d, int e, int f, int g)
{
  digitalWrite( A , a );
  digitalWrite( B , b );
  digitalWrite( C , c );
  digitalWrite( D , d );
  digitalWrite( E , e );
  digitalWrite( F , f );
  digitalWrite( G , g );
  
}//Fin formarNum_letra