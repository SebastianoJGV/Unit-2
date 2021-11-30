void setup() {
  Serial.begin(9600);
  bool bit0 = 1;
  bool bit1 = 1;
  bool bit2 = 1;

  for(int n = 0; n<2;n++){
      bit2=!bit2;
          for(int j = 0; j<2; j++){
              bit1=!bit1;
              for(int i = 0; i<2; i++){
                  bit0 = !bit0;
                  Serial.print(bit2);
                  Serial.print(bit1);
              	  Serial.print(bit0);
              	  Serial.print(",");
              }
         }
      }
  }

void loop() {}

