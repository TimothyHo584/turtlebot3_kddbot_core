/*******************************************************************************
* Copyright 2016 ROBOTIS CO., LTD.
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*******************************************************************************/

/* Authors: Yoonseok Pyo, Leon Jung, Darby Lim, HanCheol Cho */

#ifndef TURTLEBOT3_KDDBOT_H_
#define TURTLEBOT3_KDDBOT_H_

#define NAME                             "Kddbot"

#define WHEEL_RADIUS                     0.070           // meter
//When rotation is wrong, please turning these two value below("WHEEL_SEPARATION" and "TURNING_RADIUS"),to fit real robot!!
//And "WHEEL_SEPARATION" must be x2 of "TURNING_RADIUS".
#define WHEEL_SEPARATION                 0.56          // meter (BURGER : 0.160, WAFFLE : 0.287, KDDBOT : 0.61)
#define TURNING_RADIUS                   0.28         // meter (BURGER : 0.080, WAFFLE : 0.1435, KDDBOT : 0.305)

#define ROBOT_RADIUS                     0.302           // meter (BURGER : 0.105, WAFFLE : 0.220, KDDBOT : 0.302)
#define ENCODER_MIN                      -2147483648     // raw
#define ENCODER_MAX                      2147483648      // raw

#define MAX_LINEAR_VELOCITY              (WHEEL_RADIUS * 2 * 3.14159265359 * 65 / 60) // m/s  (BURGER : 61[rpm], WAFFLE : 77[rpm], KDDBOT : 65 [rpm])
#define MAX_ANGULAR_VELOCITY             (MAX_LINEAR_VELOCITY / TURNING_RADIUS)       // rad/s

#define MIN_LINEAR_VELOCITY              -MAX_LINEAR_VELOCITY  
#define MIN_ANGULAR_VELOCITY             -MAX_ANGULAR_VELOCITY 

#endif  //TURTLEBOT3_KDDBOT_H_
