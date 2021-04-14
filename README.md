Можно запустить сразу игру. Она называется GAME
Можно ее собрать: через CMakeLists.txt

------------------------------------------------------

Описание игры:
Есть юниты 3 типов (можно потом добавить и другие типы):
	1) Атакующие (Attacker):
		у них большая атака и среднее здоровье
	2) Производящие (Producer):
		они производят ресурсы, не атакуют
	3) Защищающие (Safer):
		у них большое здоровье, маленькая атака

У каждого юнита есть координаты (x и y)
Юниты могут атаковать других юнитов
Юниты могут перемещаться

Юниты можно объединять в армии
Армии могут атаковать другие армии
Армии могут перемещаться

----------------------------------------------------

У каждого игрока есть доступные ресурсы
В начале игры у каждого игрока нет юнитов, но есть какое-то количество ресурсов

Игра - пошаговая:
На каждом шаге игрок своими армиями либо нападает на армии противника,
	либо перемещает армию. Каждая армия в течении шага не может быть
	задействована более 1 раза. Если на данном шаге армия не нападала,
	то в конце шага игрок получает + к своим ресурсам
	(пропорционально количеству не нападавших Producer)
На своем шаге игрок может создать новых юнитов (за ресурсы), но в течение
	 этого шага они не могут атаковать.
В конце своего шага игрок может объединить/разделить свои армии.


Цель: уничтожить все юниты противника.
