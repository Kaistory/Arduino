#include <Servo.h>

Servo myservo; //tạo đối tượng servo để điều khiển một servo

int pos = 180; // biến để lưu góc quay servo 
// bạn có thể thay đổi giá trị của pó để thay đổi góc quay

void setup() {
  // put your setup code here, to run once:
  myservo.attach(8); //kết nối vào chân số 8;

}

void loop() {
  // put your main code here, to run repeatedly:
  myservo.write(pos); // cho servo quay góc lệch 0 
  delay(15); // chờ 15 ms 
}
