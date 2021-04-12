# turtlebot3_kddbot_core
turtlebot3 kddbot openCR code  
**Demo used ubuntu16.04 LTS**
## 使用教學
#### step1 請確認安裝之opencr驅動版本為1.4.15(如使用其他版本，請自行測試)
#### step2 將opencr_library/turtlebot3_msg/SensorState.h放至於opencr驅動的目錄
(ps.如使用linux版本的arduinoIDE，可以使用圖形化檔案夾界面後使用ctrl+h開啟隱藏目錄，並且找到.arduinoXX的資料夾)
-> packages -> OpenCR -> hardware -> OpenCR -> 1.4.15 -> libraries -> turtlebot3_ros_lib -> turtlebot3_msgs內 **（原來的檔案請記得備份）**
#### step3 將opencr_library/turtlebot3/include資料夾內的檔案複製到
opencr驅動的目錄-> packages -> OpenCR -> hardware -> OpenCR -> 1.4.15 -> libraries -> turtlebot3 -> include -> turtlebot3內  
**請務必將原本資料夾內的turtlebot3_motor_driver.h改成其他副檔名(ex:turtlebot3_motor_driver.h.bak),以免程式編譯時吃到2個相同函式名稱導致錯誤**
#### step4 將opencr_library/turtlebot3/src資料夾內的TurtleBot3Kddbot.h複製到  
opencr驅動的目錄-> packages -> OpenCR -> hardware -> OpenCR -> 1.4.15 -> libraries -> turtlebot3 -> src內
#### step5 修改原始turtlebot3_motor_driveer.cpp檔名  
將opencr驅動的目錄-> packages -> OpenCR -> hardware -> OpenCR -> 1.4.15 -> libraries -> turtlebot3 -> src 
-> turtlebot3內的turtlebot3_motor_driver.cpp改成其他副檔名  
(ex:turtlebot3_motor_driver.cpp.bak)  
以免程式編譯時吃到2個相同函式名稱導致錯誤。
#### step6 開啟Arduino主程式turtlebot3_kddbot.ino, 開始編譯
#### step7 成功編譯
