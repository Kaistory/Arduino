int btX =A0; //Bien tro X gan chân AO
int btY =A1; //Bien tro X gan chân A1
int nutnhan = 5; //Nút nhân chân số 5

int gtX; //Gia trị bien tro X
int gtY; //Gia trị bien tro X
int gtnut; //Gia trị nút

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); // MỞ công 9600
  pinMode (btX, INPUT); 
  pinMode (btY, INPUT);
  pinMode (nutnhan, INPUT_PULLUP); // Sử dụng điện trở bo Ảduino
}

void loop() {
  // put your main code here, to run repeatedly:
  gtX = analogRead (btX); // Đọc biến trở chân A0 gán vào gtX
  gtY = analogRead (btY); // Đọc biến trở chân A1 gán vào gtY
  gtnut = digitalRead (nutnhan); // Đọc giá trị digital chỉ có 0 hoặc 1 nhấn vao se có gt = 0

  Serial.print(" GIÁ TRỊ X: ");
  Serial.print(gtX);
  Serial.print("  ");// Chỉ để cách nhìn cho đẹp thôi :))
  Serial.print(" GIÁ TRỊ Y: ");
  Serial.print(gtY);
  Serial.print("  ");// Chỉ để cách nhìn cho đẹp thôi :))
  Serial.print(" GIÁ TRỊ nút nhấn: ");
  Serial.print(gtnut);
  Serial.println("  ");// Chỉ để cách dòng nhìn cho đẹp thôi :))
  delay(500); //chờ 500 ms
  //Nạp code test nào
}
/* 2 biến trở 10k   
 *  1 biến trở cho trục Y, 1 biến trở cho trục X, 1 nút nhấn
 *  CÓ 5 Chân tín hiệu GND , +5V VRX, VRY, SW
*/
