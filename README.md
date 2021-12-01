# V알조 - Hardware
프로젝트의 목적
--
코로나로 인한 배달량 폭등에 따른 폐기물 증가 등 여러 요인들로 인해 환경문제는 점점 심각해지고 있음. 그러나 사람들은 환경오염의 심각성에 대해 쉽게 인지하지 못하며, 본인들이 일상에서 쉽게 행하고 있는 행위들이 지구에 어떤 영향을 미치는지 생각해볼 계기조차 많지 않음. 일상 속에서 행하는 여러 행위에서 환경오염적 요소를 찾아내고, 이에 대한 경각심을 심어줄 필요를 느낌.
무엇보다 초등학생은 환경이 오염된다면 미래에 가장 큰 피해를 입게될 연령층이며, 가장 큰 변화를 일으키기 위해선 미래세대의 변화가 촉구됨. 그래서 환경문제에 집중한 교육용 게임함으로 사용자에게 환경문제에 대한 경각심을 주고자함.



시나리오 설계 
--
1. 사용자가 제자리에서 걷는다.
2. 압력센서를 통해 압력을 입력받는다.
3. 특정 압력 이상이 특정되면 발이 닿은것으로 간주하고 압력이 낮은 값으로 측정되면 발을 뗀 상태로 간주한다.
4. 만약 발이 닿은 상태와 뗀 상태가 반복되면 걷는 것으로 간주한다.


개발도구 - Hardware
--
![캡처](https://user-images.githubusercontent.com/68942045/144181474-0afbcda7-90c1-4bb3-9b94-30a4f1d9698c.JPG)
1. 아두이노 키트
2. 압력센서
3. 신발덮개
압력센서를 신발덮개에 부착해 플레이어의 걷는 motion을 인식하도록 구현할 것입니다. 


설계계획
--
사용자들이 걸을 때 발로 누르는 압력을 압력센서를 이용해 input으로 받고 발을 지면에 붙였다 떼면서 압력 input값에 차이가 생기면, 한걸음 앞으로 간 것으로 인식하도록 할 것입니다. 이렇게 압력 변화를 인식해 사용자의 걷는 motion을 파악하고, 이 motion이 실제 게임 속 주인공의 움직임에 반영되도록 설계하고자 합니다. 

파일설명
--
- pushButton.ino : 압력센서를 아직 구매하지 못해 아두이노우노키트 속 버튼으로 대체하여 만든 코드입니다.
- Arduino_FSR_Test1 : 압력센서를 이용해 압력을 인식하는 

