import serial
import cv2
#from  HandTrackingModule import handDetector
from cvzone.HandTrackingModule import HandDetector
seriala = serial.Serial('COM5', 115200)
seriala.timeout = 1
cap=cv2.VideoCapture(0)
detector = HandDetector(detectionCon=1, maxHands=1)
while True:
    success,img =cap.read()
    img=cv2.resize(img,(500, 350))
    img=detector.findHands(img)
    l , box = detector.findPosition(img,draw=False)
    if l:
        e = '\n'

        f=detector.fingersUp()
        s=(list(map(int,f)))
        print(s)
        w=0
        for q in s:
            w = w + q
            print(w)
        seriala.write(e.encode())
        seriala.write(str(int(w)).encode())
    cv2.imshow('Image',img)
    if cv2.waitKey(20) & 0xFF == 27:
        break
cv2.destroyAllWindows()