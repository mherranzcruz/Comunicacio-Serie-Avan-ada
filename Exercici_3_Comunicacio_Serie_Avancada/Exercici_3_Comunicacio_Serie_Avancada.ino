/*****************************************************************
**                                                              **
**                        Títol:                                **
**          Posar nom representatiu del programa                **
**                                                              **
** NOM:Martin Herranz Cruz                     Data:29/01/2018  **
*****************************************************************/
//****************************INCLUDE*****************************


//***************************VARIABLES****************************
float r1, r2;             // variables for the R's
float rSerie, rParalel;   // variables for the results
//*****************************SETUP******************************

void setup() {                 //Configura el final de salida
  
  Serial.begin(9600);        // initialize serial
  Serial.println("Entra el valor de r1");          //"Entra el valor de r1 i r2 (separats per una coma)" Versió inicial


}

//******************************LOOP******************************

void loop() {                 //Inicia el bucle del programa

 while (Serial.available() > 0) {  // if there's any serial available, read it
    r1 = Serial.parseInt();// look for valid int the incoming serial stream
    
   

    if (Serial.read() == '\n') { //look for newline. Is the end of your sentence
 

  if (r1 <3.5)
  {
    Serial.print("A");
  }
  else if (r1 >= 3.5 && r1 <6.5)
  {
    Serial.print("B");
  }
  else if (r1 >= 6.5 && r1 <11.1)
  {
    Serial.print("C");
  }
   else if (r1 >= 11.1 && r1 <17.7)
  {
    Serial.print("D");
  }
   else if (r1 >= 17.7 && r1 <38.2)
  {
    Serial.print("E");
  }
   else if (r1 >= 38.2 && r1 <43.2)
  {
    Serial.print("F");
  }
   else if (r1 >= 43.2 )
  {
    Serial.print("G");
  }

}
 }
 }

//****************************FUNCIONS****************************
